#ifndef NON_TERMINALS_H
#define NON_TERMINALS_H
//Defining all of the possible non-terminals
struct Node;

struct Non_Terminals{
    
    //digit
    Node*  DIGIT;

    //char
    Node*  CHAR;

    //digit_seq
    Node*  DIGIT_AND_DIGIT_SEQ;
    Node*  DIGIT_SEQ;

    //char_digit_seq
    Node*  CHAR_AND_CHAR_DIGIT_SEQ;
    Node*  DIGIT_AND_CHAR_DIGIT_SEQ;
    Node*  CHAR_DIGIT_SEQ;

    //const
    Node*  CONST;

    //id
    Node*  ID;

    //type
    Node*  TYPE;

    //op
    Node*  OP;

    //exp
    Node*  EXP_AND_OP_AND_EXP;
    Node*  EXP;

    //decl_stat
    Node*  TYPE_AND_ID_SEMICOLON;
    Node*  TYPE_AND_ASSGN_STAT;
    Node*  DECL_STAT;

    //assgn_stat
    Node*  ASSGN_STAT;

    //iter_stat
    Node*  WHILE_EXP_AND_STAT;
    Node*  WHILE_EXP_AND_CMPD_STAT;
    Node*  ITER_STAT;

    //if_stat
    Node*  IF_EXP_AND_STAT;
    Node*  IF_EXP_AND_CMPD_STAT;
    Node*  IF_EXP_AND_STAT_ELSE_STAT;
    Node*  IF_EXP_AND_CMPD_STAT_ELSE_STAT;
    Node*  IF_EXP_AND_STAT_ELSE_CMPD_STAT;
    Node*  IF_EXP_AND_CMPD_STAT_ELSE_CMPD_STAT;
    Node*  IF_STAT;

    //stat
    Node*  STAT;

    //stat_list
    Node*  STAT_LIST_AND_STAT;
    Node*  STAT_LIST;


    //cmpd_stat
    Node*  CMPD_STAT;

    //prog
    Node*  PROG;
    
    Non_Terminals();

};

#endif
