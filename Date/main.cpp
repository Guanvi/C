#include <iostream>
#include "date.h"

using namespace std;

int main()
{
	Date firstDate;
	Date secondDate;
	Date &f=firstDate;
	Date &s=secondDate;
	while(true)
	{
		cout << "Date1" << " > " ;
		while(!firstDate.isInterCorrect(f))
		{
			cout << "Date1" << " > " ;
		
		}
		cout << "Date2" << " > " ;
		while(!secondDate.isInterCorrect(s))
		{
			cout << "Date2" << " > " ;
		}
		cout << "相差 " << calDays(firstDate,secondDate) << " 天" <<endl;
	}

	return 0;
}
