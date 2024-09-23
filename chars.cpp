#include "chars.h"
#include "node.h"
#include <iostream>
//Initializes all possible chars

Chars::Chars(){
    UPPER_A = new Node("A");
    UPPER_B = new Node("B");
    UPPER_C = new Node("C");
    UPPER_D = new Node("D");
    UPPER_E = new Node("E");
    UPPER_F = new Node("F");
    UPPER_G = new Node("G");
    UPPER_H = new Node("H");
    UPPER_I = new Node("I");
    UPPER_J = new Node("J");
    UPPER_K = new Node("K");
    UPPER_L = new Node("L");
    UPPER_M = new Node("M");
    UPPER_N = new Node("N");
    UPPER_O = new Node("O");
    UPPER_P = new Node("P");
    UPPER_Q = new Node("Q");
    UPPER_R = new Node("R");
    UPPER_S = new Node("S");
    UPPER_T = new Node("T");
    UPPER_U = new Node("U");
    UPPER_V = new Node("V");
    UPPER_W = new Node("W");
    UPPER_X = new Node("X");
    UPPER_Y = new Node("Y");
    UPPER_Z = new Node("Z");

    LOWER_A = new Node("a");
    LOWER_B = new Node("b");
    LOWER_C = new Node("c");
    LOWER_D = new Node("d");
    LOWER_E = new Node("e");
    LOWER_F = new Node("f");
    LOWER_G = new Node("g");
    LOWER_H = new Node("h");
    LOWER_I = new Node("i");
    LOWER_J = new Node("j");
    LOWER_K = new Node("k");
    LOWER_L = new Node("l");
    LOWER_M = new Node("m");
    LOWER_N = new Node("n");
    LOWER_O = new Node("o");
    LOWER_P = new Node("p");
    LOWER_Q = new Node("q");
    LOWER_R = new Node("r");
    LOWER_S = new Node("s");
    LOWER_T = new Node("t");
    LOWER_U = new Node("u");
    LOWER_V = new Node("v");
    LOWER_W = new Node("w");
    LOWER_X = new Node("x");
    LOWER_Y = new Node("y");
    LOWER_Z = new Node("z");

    WHITESPACE = new Node(" ");

    ALL_CHARS = {UPPER_A, UPPER_B, UPPER_C, UPPER_D, UPPER_E, UPPER_F, UPPER_G,
    UPPER_H, UPPER_I, UPPER_J, UPPER_K, UPPER_L, UPPER_M, UPPER_N, UPPER_O, UPPER_P, UPPER_Q,
    UPPER_R, UPPER_S, UPPER_T, UPPER_U, UPPER_V, UPPER_W, UPPER_X, UPPER_Y, UPPER_Z, LOWER_A,
    LOWER_B, LOWER_C, LOWER_D, LOWER_E, LOWER_F, LOWER_G,LOWER_H, LOWER_I, LOWER_J, LOWER_K,
    LOWER_L, LOWER_M, LOWER_N, LOWER_O, LOWER_P, LOWER_Q, LOWER_R, LOWER_S, LOWER_T, LOWER_U,
    LOWER_V, LOWER_W, LOWER_X, LOWER_Y, LOWER_Z, WHITESPACE};
}


