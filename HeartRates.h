/* File: HeartRates.h */

#include <string>

using namespace std;

class HeartRates
{
   public:
       HeartRates ( string fname, string lname, int mm, int dd, int yy, int month, int day, int year );
       void setFirstName ( string fname);
       string getFirstName ();
       void setLastName (string lname);
       string getLastName ();
       void setMonthOfBirth (int mm);
       int getMonthOfBirth ();
       void setDayOfBirth (int dd);
       int getDayOfBirth ();
       void setYearOfBirth(int yy);
       int getYearOfBirth();
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


