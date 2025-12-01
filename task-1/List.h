#ifndef LIST_H
#define LIST_H

class LinkedList
{
private:
    struct Node
    {
        int data;
        Node* next;
    };

    Node* head;

public:
    // Constructor - sets up a new empty list
    LinkedList();
    
    // Destructor - cleans up when we're done with the list
    ~LinkedList();

    // Check if the list is empty
    bool isEmpty() const;
    
    // Put a new number at the front of the list
    void insertAtBeginning(int value);
    
    // Put a new number at the end of the list
    void insertAtEnd(int value);
    
    // Remove the first number from the list
    void deleteFirst();
    
    // Remove the last number from the list
    void deleteLast();
    
    // Look for a number in the list (returns true if found)
    bool search(int value) const;
    
    // Print all the numbers in the list
    void display() const;
};

#endif
