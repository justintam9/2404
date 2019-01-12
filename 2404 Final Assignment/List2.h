#include <iostream>
using namespace std;
#include <cstdlib>

#include "Event.h"
#include "Array.h"

template <class T>
class List
{
    template <typename K>
    class Node
    {
        friend class List<K>;
        private :
            K data;
            Node* next;
            Node* previous;
    };

    public:
    List();
    ~List();
    void copy (Array&);
    void add (T);
    void print();

    private:
    Node<T>* head;
};

template <class T>
List<T>::List()
{
    head = NULL;
}

template <class T>
List<T>::~List()
{
    Node<T>* currNode, *temp;
    currNode = head;
    while (currNode != NULL){
        temp = currNode;
        currNode = currNode -> next;
        delete temp -> data;
        delete temp;
    }
}

template <class T>
void List<T>::copy (Array& array){
    Node<T> *currNode;
    currNode = head;
    while (currNode!=NULL){
        array.add (currNode->data);
        currNode = currNode -> next;
    }
}

template <class T>
void List<T>::add (T b)
{
    Node<T>* tmpNode;
    Node<T>* currNode;
    Node<T>* prevNode;

    tmpNode = new Node<T>;
    tmpNode -> data = b;
    tmpNode -> next = NULL;
    tmpNode -> previous = NULL;

    currNode = head;
    prevNode = NULL;

    while (currNode != NULL){
        if (*b<(currNode->data))
            break;
        prevNode = currNode;
        currNode = currNode -> next;
    }

    if (prevNode == NULL){
        head = tmpNode;
    }
    else{
        prevNode-> next = tmpNode;
        tmpNode -> previous = prevNode;
    }

    tmpNode ->next = currNode;
    if (currNode != NULL)
    currNode ->previous = tmpNode;
}

template <class T>
void List<T>::print()
{
    Node<T> * currNode = head;
    while (currNode != NULL){
        currNode -> data -> print();
        currNode = currNode -> next;
    }
}
