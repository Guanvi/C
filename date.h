#ifndef DATE_H
#define DATE_H


class Date
{

	private :
		int year;
		int month;
		int day;

	public :
		void setDate(int year,int month,int day);
		int getYear(){return year;};
		int getMonth(){return month;};
		int getDay(){return day;};
		bool isLeapYear(int year);
		int * calMonthDays(Date date);
		int calDays(Date firstDate,Date secondDate);


};

#endif
