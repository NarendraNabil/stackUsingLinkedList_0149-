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
{
private:
    Node *top; // pointer to the top node of the stack

public: 
    Stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }
    
    //Push operation Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
