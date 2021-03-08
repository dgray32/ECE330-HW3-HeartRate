/* File: HeartRates.h*/

#include <string>

using namespace std;

class HeartRates
{
   public:
       HeartRates ( string fname, string lname, int mm, int dd, int yy, int month, int day, int year );
       void setFName ( string fname);
       string getFName ();
       void setLName (string lname);
       string getLName ();
       void setMOB (int mm);
       int getMOB ();
       void setDOB (int dd);
       int getDOB ();
       void setYOB(int yy);
       int getYOB();
       void setCurrentMonth (int month);
       int getCurrentMonth();
       void setCurrentDay (int day);
       int getCurrentDay();
       void setCurrentYear (int year);
       int getCurrentYear();
       int getAge();
       int getMaximumHeartRate();
       string getTargetHeartRate();
   private:
       string firstName;
       string lastName;
       int dayOfBirth;
       int monthOfBirth;
       int yearOfBirth;
       int currentMonth;
       int currentDay;
       int currentYear;
};


