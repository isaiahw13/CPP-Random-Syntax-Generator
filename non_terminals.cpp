#include "non_terminals.h"
#include "terminals.h"
#include "node.h"
#include <iostream>

Non_Terminals::Non_Terminals(){
    Terminals terminals;
    
    
    //digit
    DIGIT = new Node("<digit>", terminals.DIGITS);

    //char
    CHAR = new Node("<char>", terminals.CHARS);

    //digit_seq
    DIGIT_AND_DIGIT_SEQ = new Node("<digit><digit_seq>", {}, true);
    DIGIT_SEQ = new Node("<digit_seq>", {});

    //char_digit_seq
    CHAR_AND_CHAR_DIGIT_SEQ = new Node("<char><char_digit_seq>", {}, true);
    DIGIT_AND_CHAR_DIGIT_SEQ = new Node("<digit><char_digit_seq>", {}, true);
    CHAR_DIGIT_SEQ = new Node("<char_digit_seq>", {});

    //const
    CONST = new Node("<const>", {});

    //id
    ID = new Node("<id>", {});

    //type
    TYPE = new Node("<type>", {});

    //op
    OP = new Node("<op>", {});

    //exp
    EXP_AND_OP_AND_EXP = new Node("<exp> <op> <exp>", {}, true);
    EXP = new Node("<exp>", {});

    //decl_stat
    TYPE_AND_ID_SEMICOLON = new Node("<type> <id> ;", {}, true);
    TYPE_AND_ASSGN_STAT = new Node("<type> <assgn_stat>", {}, true);
    DECL_STAT = new Node("<decl_stat>", {});

    //assgn_stat
    ASSGN_STAT = new Node("<assgn_stat>", {}, true);

    //iter_stat
    WHILE_EXP_AND_STAT = new Node("while ( <exp> ) <stat>", {}, true);
    WHILE_EXP_AND_CMPD_STAT = new Node("while ( <exp> ) <cmpd_stat>", {}, true);
    ITER_STAT = new Node("<iter_stat>", {});

    //if_stat
    IF_EXP_AND_STAT = new Node("if ( <exp> ) <stat>", {}, true);
    IF_EXP_AND_CMPD_STAT = new Node("if ( <exp> ) <cmpd_stat>", {}, true);
    IF_EXP_AND_STAT_ELSE_STAT = new Node("if ( <exp> ) <stat> else <stat>", {}, true);
    IF_EXP_AND_CMPD_STAT_ELSE_STAT = new Node("if ( <exp> ) <cmpd_stat> else <stat>", {}, true);
    IF_EXP_AND_STAT_ELSE_CMPD_STAT = new Node("if ( <exp> ) <stat> else <cmpd_stat>", {}, true);
    IF_EXP_AND_CMPD_STAT_ELSE_CMPD_STAT = new Node("if ( <exp> ) <cmpd_stat> else <cmpd_stat>", {}, true);
    IF_STAT = new Node("<if_stat>", {});
    
    //cmpd_stat
    CMPD_STAT = new Node("<cmpd_stat>", {}, true);
    
    //stat
    STAT = new Node("<stat>", {});
    
    //stat_list
    STAT_LIST_AND_STAT = new Node("<stat_list> <stat>", {}, true);
    STAT_LIST = new Node("<stat_list>", {});
    
    //prog
    PROG = new Node("<prog>", {
        terminals.INT,
        terminals.MAIN,
        terminals.OPEN_PARENTHESIS,
        terminals.CLOSE_PARENTHESIS,
        terminals.OPEN_BRACKET,
        STAT_LIST,
        terminals.RETURN,
        new Node("0"),
        terminals.SEMICOLON,
        terminals.CLOSE_BRACKET
    }, true);
    
    DIGIT_AND_DIGIT_SEQ->children = {DIGIT, DIGIT_SEQ};
    DIGIT_SEQ->children = {terminals.EMPTY, DIGIT_AND_DIGIT_SEQ};
    CHAR_AND_CHAR_DIGIT_SEQ->children = {
        CHAR,
        CHAR_DIGIT_SEQ
    };
    DIGIT_AND_CHAR_DIGIT_SEQ->children = {
        DIGIT,
        CHAR_DIGIT_SEQ
    };
    CHAR_DIGIT_SEQ->children = {
        terminals.EMPTY,
        CHAR_AND_CHAR_DIGIT_SEQ,
        DIGIT_AND_CHAR_DIGIT_SEQ
    };
    CONST->children = {DIGIT_AND_DIGIT_SEQ};
    ID->children = {CHAR_AND_CHAR_DIGIT_SEQ};
    TYPE->children = {
        terminals.INT,
        terminals.DOUBLE
    };
    OP->children = {
        terminals.PLUS,
        terminals.MINUS,
        terminals.MULTIPLY,
        terminals.DIVIDE
    };
    EXP_AND_OP_AND_EXP->children = {
        EXP,
        OP,
        EXP
    };
    EXP->children = {
        EXP_AND_OP_AND_EXP,
        ID,
        CONST
    };
    TYPE_AND_ID_SEMICOLON->children = {
        TYPE,
        ID,
        terminals.SEMICOLON
    };
    TYPE_AND_ASSGN_STAT->children = {
        TYPE,
        ASSGN_STAT
    };
    DECL_STAT->children = {
        TYPE_AND_ID_SEMICOLON,
        TYPE_AND_ASSGN_STAT
    };
    ASSGN_STAT->children = {
        ID,
        terminals.EQUALS,
        EXP,
        terminals.SEMICOLON
    };
    WHILE_EXP_AND_STAT->children = {
        terminals.WHILE,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        STAT
    };
    WHILE_EXP_AND_CMPD_STAT->children = {
        terminals.WHILE,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        CMPD_STAT
    };
    ITER_STAT->children = {
        WHILE_EXP_AND_STAT,
        WHILE_EXP_AND_CMPD_STAT
    };
    IF_EXP_AND_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        STAT
    };
    IF_EXP_AND_CMPD_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        CMPD_STAT
    };
    IF_EXP_AND_STAT_ELSE_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        STAT,
        terminals.ELSE,
        STAT
    };
    IF_EXP_AND_CMPD_STAT_ELSE_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        CMPD_STAT,
        terminals.ELSE,
        STAT
    };
    IF_EXP_AND_STAT_ELSE_CMPD_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        STAT,
        terminals.ELSE,
        CMPD_STAT
    };
    IF_EXP_AND_CMPD_STAT_ELSE_CMPD_STAT->children = {
        terminals.IF,
        terminals.OPEN_PARENTHESIS,
        EXP,
        terminals.CLOSE_PARENTHESIS,
        CMPD_STAT,
        terminals.ELSE,
        CMPD_STAT
    };
    IF_STAT->children = {
        IF_EXP_AND_STAT,
        IF_EXP_AND_CMPD_STAT,
        IF_EXP_AND_STAT_ELSE_STAT,
        IF_EXP_AND_CMPD_STAT_ELSE_STAT,
        IF_EXP_AND_STAT_ELSE_CMPD_STAT,
        IF_EXP_AND_CMPD_STAT_ELSE_CMPD_STAT
    };
    CMPD_STAT->children = {
        terminals.OPEN_BRACKET,
        STAT_LIST,
        terminals.CLOSE_BRACKET
    };
    STAT->children = {
        CMPD_STAT,
        IF_STAT,
        ITER_STAT,
        ASSGN_STAT,
        DECL_STAT,
    };
    STAT_LIST_AND_STAT->children = {
        STAT_LIST,
        STAT
    };
    STAT_LIST->children = {
        STAT,
        STAT_LIST_AND_STAT
    };

    PROG->children = {
        terminals.INT,
        terminals.MAIN,
        terminals.OPEN_PARENTHESIS,
        terminals.CLOSE_PARENTHESIS,
        terminals.OPEN_BRACKET,
        STAT_LIST,
        terminals.RETURN,
        new Node("0"),
        terminals.SEMICOLON,
        terminals.CLOSE_BRACKET
    };
}
