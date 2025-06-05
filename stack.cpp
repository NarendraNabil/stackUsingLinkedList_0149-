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
        newNode->data = value;      // 2. Assign value
        newNode->next = top;        // 3. Set the next pointer of the new node to the current
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;

    }

    // isEmpty operation : Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL
    }

    // pop operationremove the topmost elemt from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // if the stack is empty, print a message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // ipdate the top pointer to the next node
    }
