#include <iostream>
#include <iomanip>
using namespace std;

#include "Calendar.h"
#include "Event.h"
#include "Date.h"
#include "View.h"


bool View::displayMenu(){
    int numOptions = 1;
    int selection = -1;

    cout <<endl;
    cout << "(1) Add event" << endl;
    cout << "(0) Exit" << endl;

    while (selection < 0 || selection > numOptions){
        cout << "enter your selection: ";
        cin >> selection;
        if (selection == 1)
        {
            return true;
        }
        else if (selection == 0)
        {
            return false;
        }
    }
    return false;
}

void View::readEvent (string& name, int& priority, int& day, int& month, int& year, int& hour, int& minute){

    cout << "Name of event: ";
    cin.ignore();
    getline (cin,name);
    cout << "Priority:   ";
    cin >> priority;
    cout << "day:   ";
    cin  >> day;
    cout << "month: ";
    cin  >> month;
    cout << "year:  ";
    cin  >> year;
    cout << "hour:   ";
    cin >> hour;
    cout << "minute:   ";
    cin >> minute;
}

void View::getCalendarName (string& cName){
    cout<< "Enter Calendar name:  ";
    getline(cin,cName);
}

void View::getEventType (string& type){
    cout<< "Enter Event Type (School/Work):  ";
    cin >> type;
}

void View::print (Calendar& c){
    c.print();
}



