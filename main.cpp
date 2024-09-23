#include <iostream>
#include <queue>
#include <fstream>
#include <random>
#include <algorithm>
#include "node.h"
#include "non_terminals.h"
using namespace std;

long randomNumber(long upperBounds)
{
    static std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<long> dis(0, upperBounds);
    return dis(gen);
}

int main()
{
    //Import all of the tokens
    Non_Terminals defs;
    
    //Create output txt file and queue to hold tokens while generating
    ofstream outputFile;
    outputFile.open("Randomly_Generated_Code.txt");
    queue<string> output;
    
    //Create vector to hold token nodes for traversing with DFS. Start with program element
    vector<Node*> s;
    Node* program = defs.PROG;
    s.push_back(program);
    
    //Use DFS to traverse all Nodes and generate code, keeping track of # of iterations
    int numTokens = 0;
    while(!s.empty())
    {
        //Check if program has become unreasonably long. Restart and clear the output if so.
        if(numTokens > 250)
        {
            s.clear();
            output = queue<string>();
            s.push_back(program);
            numTokens = 0;
        }
        
        //Grab next node to visit
        Node* temp = s.back();
        s.pop_back();
        
        //If token has multiple tokens like <digit><digit_seq>, push each of them to the stack for traversal
        if(temp->multi_token == true)
        {
            for(long i = temp->children.size() - 1; i >= 0; i--)
            {
                s.push_back(temp->children[i]);
            }
        }
        //If the token doesn't have multiple tokens within it, ex: <digit>, randomly select one of it's child elements
        else if(temp->children.size() > 0)
        {
            long randomIndex = randomNumber(temp->children.size() - 1);
            s.push_back(temp->children[randomIndex]);
        }
        //If the token has no children at all (leaf), push it to the output queue to be written to the output txt file
        else
        {
            output.push(temp->token);
            numTokens++;
        }
    }
    
    //Counting number of open brackets to generate proper indentation.
    //Offset used to correct issue with indentation of last bracket
    int open_brackets = 0, offset = 0;
    while(!output.empty())
    {
        //Grab the token from the front of the queue
        string token = output.front();
        output.pop();
        
        //Check if the number of open brackets/indents needs to be modified.
        if(token == "}\n")
            open_brackets--;
        else if(token == "{\n")
            open_brackets++;
        
        //Print out token
        outputFile << token;
        
        //Print out the indents
        if(output.front() == "}\n")
            offset = 1;
        if(open_brackets > 0 && token.length() > 0 && token.substr(token.length() - 1, 1) == "\n")
            for(int i = 0; i < open_brackets - offset; i++)
                outputFile << "   ";
        if(offset > 0)
            offset = 0;
    }
    
    //Finally, close the file
    outputFile.close();
}

