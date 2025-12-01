#include <iostream>
#include "List.h"
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    Node* temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

bool LinkedList::isEmpty() const
{
    return head == nullptr;
}

void LinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty())
    {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void LinkedList::deleteFirst()
{
    if (isEmpty()) {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteLast()
{
    if (isEmpty()) {
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}

bool LinkedList::search(int value) const
{
    Node* current = head;
    while (current != nullptr)
    {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void LinkedList::display() const
{
    if (isEmpty())
    {
        cout << "The list is empty\n";
        return;
    }

    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "END\n";
}
