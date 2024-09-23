#ifndef DIGITS_H
#define DIGITS_H
#include <vector>
//Defining all the possible digits

struct Node;

struct Digits{
    Node* ZERO;
    Node* ONE;
    Node* TWO;
    Node* THREE;
    Node* FOUR;
    Node* FIVE;
    Node* SIX;
    Node* SEVEN;
    Node* EIGHT;
    Node* NINE;

    std::vector<Node*> ALL_DIGITS;
    
    Digits();
};


#endif
