#include<iostream>

int had_months(int n)
{
	int months = 12 * n;
	return months;
}


int main()
{
	using namespace std;
	cout << "Enter your age£º";
	int years;
	cin >> years;
	int months = had_months(years);
	cout << " is " << months << " passed " << endl;

}