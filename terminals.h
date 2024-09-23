#ifndef TERMINALS_H
#define TERMINALS_H
#include <vector>

struct Node;

struct Terminals{
    // Declaring all terminal nodes
    std::vector<Node*> DIGITS;
    std::vector<Node*> CHARS;

    Node* EMPTY;
    Node* IF;
    Node* WHILE;
    Node* ELSE;
    Node* EQUALS;
    Node* SEMICOLON;
    Node* INT;
    Node* DOUBLE;
    Node* OPEN_BRACKET;
    Node* OPEN_PARENTHESIS;
    Node* CLOSE_BRACKET;
    Node* CLOSE_PARENTHESIS;
    Node* PLUS;
    Node* MINUS;
    Node* MULTIPLY;
    Node* DIVIDE;
    Node* MAIN;
    Node* RETURN;
    
    Terminals();
};

#endif
