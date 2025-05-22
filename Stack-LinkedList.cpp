#include <iostream>

using namespace std;

// Node class Representing a single node in the linked list
class Node {
    public:
        int data;
        Node* next;
        
        Node(){
            next = NULL;
        }
};

// Stack class
class Stack{
    private:
    Node *top; // Pointer to the top of the Stack

    public:
    Stack(){
        top = NULL; // initializing the stack with a null top pointer   
    }
};