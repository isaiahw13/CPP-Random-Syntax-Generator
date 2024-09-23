#include "digits.h"
#include "node.h"
#include <stdio.h>

Digits::Digits(){
    ZERO = new Node("0");
    ONE = new Node("1");
    TWO = new Node("2");
    THREE = new Node("3");
    FOUR = new Node("4");
    FIVE = new Node("5");
    SIX = new Node("6");
    SEVEN = new Node("7");
    EIGHT = new Node("8");
    NINE = new Node("9");

    ALL_DIGITS = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
}
