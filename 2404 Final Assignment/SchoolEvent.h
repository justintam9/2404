#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H

#include "Event.h"

class SchoolEvent : public Event
{
    public:
        SchoolEvent (string = "Default", int = 0);
        ~SchoolEvent();
        bool operator< (Event*);
};

#endif
