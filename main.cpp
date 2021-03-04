/*File: main.cpp*/

#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

int main()
{
   string fname, lname;
   int mm, dd, yy;
   int month, day, year;
   cout << "Welcome to your target Heart Rate Calculator, Please provide your First name: ";
   cin >> fname;
   cout << "Last name: ";
   cin >> lname;
   cout << "Birth month: ";
   cin >> mm;
   cout << "Day of Birth ";
   cin >> dd;
   cout << "Birth Year: ";
   cin >> yy;
   cout << "Current month: ";
   cin >> month;
   cout << "Current day ";
   cin >> day;
   cout << "Current Year: ";
   cin >> year;
   HeartRates person1( fname, lname, mm, dd, yy, month, day, year);
   cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() <<
       ". Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
       "/" << person1.getYearOfBirth() << endl;
   cout << "Your age is " << person1.getAge() << " years!" << endl;
   cout << "Your max heart rate is " << person1.getMaximumHeartRate() << endl;
   cout << "Your target heart rate is " << person1.getTargetHeartRate() << endl;
}
