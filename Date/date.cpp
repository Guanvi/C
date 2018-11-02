#include "date.h"

const int LEAP_YEAR_DAYS=366;
const int NORMAL_YEAR_DAYS=365;
int leapYearMonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int normalYearMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};

void Date :: setDate(int year,int month,int day)
{
	this->year=year;
	this->month=month;
	this->day=day;
}

bool Date :: isLeapYear(int year)
{
	if((year%4==0&&year%100!=0) || year %400==0)
	{
		return true;
	}else{
		return false;
	}
}

int calDays(Date firstDate,Date secondDate)
{
	int * calMonthDays(Date date);

	int y_Day=0;
	int allDays=0;
	Date maxDate;
	Date minDate;
	int maxDateMonthdays=0;
	int minDateMonthdays=0;

	//确定较大日期和较小日期
	if((firstDate.getYear()>secondDate.getYear()) || ((firstDate.getYear()==secondDate.getYear()) && firstDate.getMonth()>secondDate.getMonth()) || ((firstDate.getYear()==secondDate.getYear())&&(firstDate.getMonth()==secondDate.getMonth()) &&(firstDate.getDay()>secondDate.getDay())))
	{
		maxDate=firstDate;
		minDate=secondDate;

	}else{
		maxDate=secondDate;
		minDate=firstDate;
	}			
	//计算两个日期的元日相差多少天	
	for(auto i=minDate.getYear();i<maxDate.getYear();i++)
	{
		if(minDate.isLeapYear(i))
		{
			y_Day+=LEAP_YEAR_DAYS;
		}else{
			y_Day+=NORMAL_YEAR_DAYS;
		}

	}
	int *maxMday=calMonthDays(maxDate);
	int *minMday=calMonthDays(minDate);
	//计算较大日期整月的总天数
	for(int i=1;i<maxDate.getMonth();i++)
	{
		maxDateMonthdays+=*(maxMday+i-1);
	}
	//计算较小日期整月的总天数
	for(int i=1;i<minDate.getMonth();i++)
	{
		minDateMonthdays+=*(minMday+i-1);
	}
	//相差天数=两日期元日相差天数+大日期
	allDays=y_Day+maxDateMonthdays+maxDate.getDay()-minDateMonthdays-minDate.getDay();
	return allDays;
}

int* calMonthDays(Date date)
{
	if(date.isLeapYear(date.getYear()))
	{
		return leapYearMonth;
	}else{
		return normalYearMonth;
	}
}
