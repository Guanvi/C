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
		bool isLeapYear(int year);					//判断是否为闰年
		int * calMonthDays(Date date);					//计算目标日期前(月份数-1)个月的天数
		bool isCorrectDate(int year,int month,int day);
		bool isInterCorrect(Date &date);
		friend int calDays(Date firstDate,Date secondDate);		//计算两个日期相差的天数
};



#endif
