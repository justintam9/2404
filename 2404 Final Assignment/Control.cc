#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"
#include "Calendar.h"
#include "Event.h"
#include "Control.h"
#include "SchoolEvent.h"
#include "WorkEvent.h"
#include "EventServer.h"
#include "Array.h"

Control::Control(){
    Array school, work;
    server.retrieve (school,work);
    for (int i = 0; i< school.getSize();i++){
        SchoolEvents.add (school.get(i));
    }
    for (int i = 0; i < work.getSize();i++){
        WorkEvents.add (work.get(i));
    }
}
Control::~Control(){
    Array school,work;
    SchoolEvents.copyEvents(school);
    WorkEvents.copyEvents(work);
    server.update(school,work);
}
void Control::launch(){
    SchoolEvents.setName("School Events");
    WorkEvents.setName("Work Events");
    string n,cName,type;
    int d,m,y,h,min,p;
    Event * temp;
    while (view.displayMenu()){
        view.getEventType (type);
        view.readEvent (n,p,d,m,y,h,min);
        if (type == "School"){
            temp = new SchoolEvent (n,p);
            temp-> setDate (d,m,y,h,min);
            SchoolEvents.add (temp);
        }
        else if (type == "Work"){
            temp = new WorkEvent (n,p);
            temp-> setDate (d,m,y,h,min);
            WorkEvents.add (temp);
        }
    }
    view.print(SchoolEvents);
    view.print(WorkEvents);
}   
