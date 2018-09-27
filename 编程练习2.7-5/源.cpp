#include<iostream>


float Fahr(float n)
{
	float cles = n * 1.8 + 32.0;
	return cles;
}


float main()
{
	using namespace std;
	cout << "Please enter Celsius value: ";
	float n;
	cin >> n;
	float cles = Fahr(n);
	cout << n << "degrees Celsius is " << cles << " degrees Fahrenheit";
}