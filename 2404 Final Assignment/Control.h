#ifndef CONTROL_H
#define CONTROL_H

#include "Calendar.h"
#include "View.h"
#include "EventServer.h"

class Control
{
    public:
        Control();
        ~Control();
        void launch();
    private:
        Calendar SchoolEvents, WorkEvents;
        View view;
        EventServer server;
};
#endif

