#include <iostream>
using namespace std;

// stack node
class Node 
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;

    }
};

// stack class
class Stack
