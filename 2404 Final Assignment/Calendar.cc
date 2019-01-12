#include <iostream>
#include <iomanip>
using namespace std;

#include "Calendar.h"
#include "List.cc"


//default constructor
Calendar::Calendar (string n)
{
    name = n;
}

//add Event objects in an array in ascending order
void Calendar::add (Event* e)
{
    l.add (e);
}

void Calendar::copyEvents (Array& array){
    l.copy(array);
}

void Calendar::setName (string n)
{
    name = n;
}

//print all Event objects in the array
void Calendar:: print()
{
    cout<<endl<< "Calendar:   "<<name<<endl;
    l.print();
}
