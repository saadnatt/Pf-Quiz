#include<iostream>
using namespace std;
int main()
{
	int events, i;
	double bill;
	double totalRevenue = 0;
	int grandEvents = 0;
	cout << "Enter number of events" ;
	cin >> events;
	for(i=1; i<=events; i++)
	{
		cout << "Enter food bill for event" << i << ":" ;
		cin >> bill;
		if(bill > 60000)
		{
		cout << "Grand Event" << endl;
			grandEvents ++;
		}
		totalRevenue += bill;
	}
	cout << "Total revenue is " << totalRevenue << endl;
	cout << "Number of Grand Events" << grandEvents << endl;
	return 0;

}
