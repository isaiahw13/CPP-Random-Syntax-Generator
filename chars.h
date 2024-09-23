#ifndef CHARS_H
#define CHARS_H
#include <vector>
//Defines all possible chars

struct Node;

struct Chars{
    Node* UPPER_A;
    Node* UPPER_B;
    Node* UPPER_C;
    Node* UPPER_D;
    Node* UPPER_E;
    Node* UPPER_F;
    Node* UPPER_G;
    Node* UPPER_H;
    Node* UPPER_I;
    Node* UPPER_J;
    Node* UPPER_K;
    Node* UPPER_L;
    Node* UPPER_M;
    Node* UPPER_N;
    Node* UPPER_O;
    Node* UPPER_P;
    Node* UPPER_Q;
    Node* UPPER_R;
    Node* UPPER_S;
    Node* UPPER_T;
    Node* UPPER_U;
    Node* UPPER_V;
    Node* UPPER_W;
    Node* UPPER_X;
    Node* UPPER_Y;
    Node* UPPER_Z;

    Node* LOWER_A;
    Node* LOWER_B;
    Node* LOWER_C;
    Node* LOWER_D;
    Node* LOWER_E;
    Node* LOWER_F;
    Node* LOWER_G;
    Node* LOWER_H;
    Node* LOWER_I;
    Node* LOWER_J;
    Node* LOWER_K;
    Node* LOWER_L;
    Node* LOWER_M;
    Node* LOWER_N;
    Node* LOWER_O;
    Node* LOWER_P;
    Node* LOWER_Q;
    Node* LOWER_R;
    Node* LOWER_S;
    Node* LOWER_T;
    Node* LOWER_U;
    Node* LOWER_V;
    Node* LOWER_W;
    Node* LOWER_X;
    Node* LOWER_Y;
    Node* LOWER_Z;

    Node* WHITESPACE;

    std::vector<Node*> ALL_CHARS;
    
    Chars();
};

#endif
