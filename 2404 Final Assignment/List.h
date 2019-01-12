#ifndef LIST_H
#define LIST_H
#include <cstdlib>
#include <iostream>
using namespace std;

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

#endif
