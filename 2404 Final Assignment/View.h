#ifndef VIEW_H
#define VIEW_H

#include "Calendar.h"
#include "Event.h"

class View
{
    public:
        bool displayMenu();
        void readEvent (string&,int&,int&,int&,int&,int&,int&);
        void print (Calendar&);
        void getCalendarName (string&);
        void getEventType (string&);
};

#endif
