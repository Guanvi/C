#include <iostream>
#include "date.h"

using namespace std;

int main()
{
	Date firstDate;
	Date secondDate;
	int year,month,day;
	while(true)
	{
		cout << "请输入第一个日期 : \n" << ">  " ;
		cin >> year >>month >> day ;
		firstDate.setDate(year,month,day);
		cout << "请输入第二个日期 : \n" << ">  " ;
		cin >> year >> month >> day ;
		secondDate.setDate(year,month,day);
		cout << "相差 " << calDays(firstDate,secondDate) << "天" <<endl;
	}

	return 0;
}
