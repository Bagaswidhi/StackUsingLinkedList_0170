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

    // Push operation: insert an element onto the top of the stack
    int push( int value) {
        Node* newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; // 2. Assign the value to the new node
        newNode->next = top; // 3. Set the next pointer
        top = newNode; // 4. Update the top pointer to the new node
        cout << " Push Value: " << value << endl; // 5. Print the pushed value
        return value;
    }

    void pop(){
        if (isEmpty()){
            cout << "Stack is empty." << endl; 
        }

        Node* temp = top; // Create a temporary pointer to the top node
        top = top->next; // Update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;   
    }

    // peek top operation: retrieve the value of the topmost element without removing it
    void peek(){
        if ( top == NULL){
            cout << "List is empty." << endl;
        }
        else{
            Node *current = top;
            while (current != NULL){
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// return the value of the top node
    }

    // IsEmpty operation: check if the stack is empty
    bool isEmpty() {
        return top == NULL; // Return true if the top pointer is null, indicatiing an empty stack
    }
};

int main(){
    Stack stack;

    int choice = 0;
    int value;
}