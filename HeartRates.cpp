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
   setFirstName(fname);
   setLastName(lname);
   setMonthOfBirth(mm);
   setDayOfBirth(dd);
   setYearOfBirth(yy);
   setCurrentMonth (month);
   setCurrentDay (day);
   setCurrentYear (year);
}

void HeartRates::setFirstName ( string fname)
{
   firstName = fname;
}

string HeartRates::getFirstName ()
{
   return firstName;
}

void HeartRates::setLastName (string lname)
{
   lastName = lname;
}

string HeartRates::getLastName ()
{
   return lastName;
}

void HeartRates::setMonthOfBirth (int mm)
{
   monthOfBirth = mm;
}

int HeartRates::getMonthOfBirth ()
{
   return monthOfBirth;
}

void HeartRates::setDayOfBirth (int dd)
{
   dayOfBirth = dd;
}

int HeartRates::getDayOfBirth ()
{
   return dayOfBirth;
}

void HeartRates::setYearOfBirth(int yy)
{
   yearOfBirth = yy;
}

int HeartRates::getYearOfBirth()
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
   if (getMonthOfBirth() > currentMonth) delta = -1;
   if ((getMonthOfBirth() == currentMonth) && (getDayOfBirth() > currentDay)) delta = -1;
   return (currentYear - getYearOfBirth() + delta);
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
