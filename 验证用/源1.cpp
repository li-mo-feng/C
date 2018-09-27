#include<iostream>
#include <typeinfo>
int main()
{
	using namespace std;
	char grade = 65;
	char grade1 = 'A';
	char dog[20] = "hello,world";
	cout << dog;
	cout << typeid(dog).name();
	if (grade == grade1)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}