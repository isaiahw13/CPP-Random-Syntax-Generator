#include "node.h"
#include <iostream>

Node::Node(std::string tkn, std::vector<Node*> chlrn, bool mlti_tkn)
{
    token = tkn;
    children = chlrn;
    multi_token = mlti_tkn;
}
