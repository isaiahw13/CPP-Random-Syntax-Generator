#include "terminals.h"
#include "digits.h"
#include "chars.h"
#include "node.h"
#include <iostream>

Terminals::Terminals(){
    Digits digits;
    Chars chars;
    
    DIGITS = digits.ALL_DIGITS;

    CHARS = chars.ALL_CHARS;

    EMPTY = new Node();

    IF = new Node("if");

    WHILE = new Node("while");

    ELSE = new Node("else\n");

    EQUALS = new Node(" = ");

    SEMICOLON = new Node(";\n");

    INT = new Node("int ");

    DOUBLE = new Node("double ");

    OPEN_BRACKET = new Node("{\n");

    OPEN_PARENTHESIS = new Node("(");

    CLOSE_BRACKET = new Node("}\n");

    CLOSE_PARENTHESIS = new Node(")\n");

    PLUS = new Node(" + ");

    MINUS = new Node(" - ");

    MULTIPLY = new Node(" * ");

    DIVIDE = new Node(" / ");

    MAIN = new Node("main");

    RETURN = new Node("return ");

}
