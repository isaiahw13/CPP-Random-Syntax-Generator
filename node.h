#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>

struct Node{
    //For nodes marked multi token, all children will be generated if applicable, ex: <exp> <op> <exp>, 
    //All three non-terminals will be generated, not just one. unlike something like + | - |  | /, where only one is generated
    bool multi_token;
    std::string token;//for storing the token, ex: "<prog>" or "if"
    std::vector<Node*> children;//for storing all of the possible next syntax tokens
    
    Node(std::string tkn = "", std::vector<Node*> chlrn = std::vector<Node*>(), bool mlti_tkn = false);
};


#endif
