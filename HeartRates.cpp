/* File:HeartRates.cpp */

#include <iostream>
#include <string>
#include <sstream>
#include "HeartRates.h"

using namespace std;

template <typename T>
std::string toString(T val)
{
   std::ostringstream oss;
   oss << val;
   return oss.str();
}

HeartRates::HeartRates ( string fname, string lname, int mm, int dd, int yy, int month, int day, int year )
{
   setFName(fname);
   setLName(lname);
   setMOB(mm);
   setDOB(dd);
   setYOB(yy);
   setCurrentMonth (month);
   setCurrentDay (day);
   setCurrentYear (year);
}

void HeartRates::setFName ( string fname)
{
   firstName = fname;
}

string HeartRates::getFName ()
{
   return firstName;
}

void HeartRates::setLName (string lname)
{
   lastName = lname;
}

string HeartRates::getLName ()
{
   return lastName;
}

void HeartRates::setMOB (int mm)
{
   monthOfBirth = mm;
}

int HeartRates::getMOB ()
{
   return monthOfBirth;
}

void HeartRates::setDOB (int dd)
{
   dayOfBirth = dd;
}

int HeartRates::getDOB ()
{
   return dayOfBirth;
}

void HeartRates::setYOB(int yy)
{
   yearOfBirth = yy;
}

int HeartRates::getYOB()
{
   return yearOfBirth;
}

void HeartRates::setCurrentMonth (int month)
{
    currentMonth = month;
}

int HeartRates::getCurrentMonth ()
{
    return currentMonth;
}

void HeartRates::setCurrentDay (int day)
{
    currentDay = day;
}

int HeartRates::getCurrentDay ()
{
    return currentDay;
}

void HeartRates::setCurrentYear (int year)
{
    currentYear = year;
}

int HeartRates::getCurrentYear ()
{
    return currentYear;
}

int HeartRates::getAge()
{
   int delta = 0;
   if (getMOB() > currentMonth) delta = -1;
   if ((getMOB() == currentMonth) && (getDOB() > currentDay)) delta = -1;
   return (currentYear - getYOB() + delta);
}

int HeartRates::getMaximumHeartRate()
{
   return (220 - getAge());
}

string HeartRates::getTargetHeartRate()
{
   int max;
   max = getMaximumHeartRate();
   string lowrate, highrate;
   lowrate = toString(max * 50 / 100);
   highrate = toString(max * 85 / 100);
   return (lowrate + "-" + highrate);
}
