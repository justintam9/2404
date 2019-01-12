#include "List.h"


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
void List<T>::add (T e)
{
    Node<T>* tmpNode;
    Node<T>* currNode;
    Node<T>* prevNode;

    tmpNode = new Node<T>;
    tmpNode -> data = e;
    tmpNode -> next = NULL;
    tmpNode -> previous = NULL;

    currNode = head;
    prevNode = NULL;
    while (currNode != NULL){
        if (*e<(currNode->data))
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
    cout << endl;
    while (currNode != NULL){
        currNode -> data -> print();
        currNode = currNode -> next;
    }
}

