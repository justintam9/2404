#ifndef CALENDAR_H
#define CALENDAR_H

#define MAX_ARR_SIZE 128
#include "Event.h"
#include "Array.h"
#include "List.h"

class Calendar
{
    public:
        Calendar(string = "No name");
        void copyEvents (Array&);
        void add(Event*);
        void setName(string);
        void print();
    private:
        List<Event*> l;
        string name;

};
#endif
