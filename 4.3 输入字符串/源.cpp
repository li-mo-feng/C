#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize ];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	//读取一行，通过换行符来确定行尾 ，第一个参数为赋予的对象，第二个为字段长度
	//遇到换行符表示接受结束且不输出换行符。
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert,ArSize) ;
	cout << "I have some delicious " << dessert;
	cout << "for you, " << name << ".\n";
	return 0;

}