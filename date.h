#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int day, int month, int year);
	    void setDay(int day);
		int getDay();
		void setMonth(int month);
		int getMonth();
		void setYear(int year);
		int getYear();
		bool isLeapYear(int year);
		int monthDays();
		void nextDay();	
};


#endif
