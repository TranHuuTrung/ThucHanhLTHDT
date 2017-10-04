#include "date.h"
Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::setDay(int day)
{
	this->day = day;
}
int Date::getDay()
{
	return this->day;
}void Date::setMonth(int month)
{
	this->month  = month;
}
int Date::getMonth()
{
	return this->month;
}
void Date::setYear(int year)
{
	this->year = year;
}
int Date::getYear()
{
    return this->year;	
}
bool Date::isLeapYear(int year)
{
	if((this->year%400==0)||(this->year%4==0&&this->year%100!=0)) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int Date::monthDays()
{
	switch(this->month)
	{
		case 4:
	    case 6:
	    case 9:
	    case 11:
	    	return 30;
	    	break;
	    case 2:
	    	if(isLeapYear(this->year)==true)
	    	{
	    		return 29;
	    	}
	    	else
	    	{
	    		return 28;
	    	}
	    	break;
	    	default:
	    		return 31;
	}
}
void Date::nextDay()
{
	switch(this->month)
	{
		case 4:
		case 6: 
    	case 9:
		case 11:
			if(this->day==30)
			{
				this->day = 1;
				this->month ++;
			}
			else 
			{
				this->day +=1;
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(this->day==31)
			{
				this->day=1;
				this->month++;
			}
			else 
			{
				this->day ++;
			}
			break;
		case 2:
			if(isLeapYear(this->year)==true)
			{
				if(this->day == 29)
				{
					this->day=1;
					this->month++;
				}
				else 
				{
					this->day++;
				}
			}
			else
			{
				if(this->day==28)
				{
					this->day=1;
					this->month++;
				}
				else
				{
					this->day++;
				}
			}
			break;
		case 12:
			if(this->day==31)
			{
				this->day =1;
				this->month =1;
				this->year++;
			}
			else
			{
				this->day++;
			}

	}
}
	
	







