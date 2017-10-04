#include "date.h"
#include <iostream>
using namespace std;
int main()
{
	Date A(21, 12, 2020);
	cout<<A.getDay()<<endl;
	cout<<A.getMonth()<<endl;
	cout<<A.getYear()<<endl;
	if(A.isLeapYear(A.getYear())==true)
	{
		cout<<"Nhuan"<<endl;
	}
	else
	{
		cout<<"Khong nhuan"<<endl;
	}
	cout<<A.monthDays()<<endl;
	for(int i=0; i<10; i++)
	{
		for(int j=1; j<=4; j++)
		{
		cout<<A.getDay()<<"/"<<A.getMonth()<<"/"<<A.getYear()<<"     ";
		A.nextDay();
		}
		cout<<"\n";
		
	}
	return 0;
}
