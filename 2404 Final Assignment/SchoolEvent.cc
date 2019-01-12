#include <iostream>
#include <iomanip>
using namespace std;

#include "SchoolEvent.h"

SchoolEvent::SchoolEvent (string n, int p)
    :Event (n,p)
{
}

SchoolEvent::~SchoolEvent()
{
}

bool SchoolEvent::operator< (Event* e)
{
    if (this->getDate()<(e->getDate())){
        return true;
    }
    return false;
}
