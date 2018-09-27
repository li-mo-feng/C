#include<iostream>
int main()
{
	using namespace std;
	int yams[3];
	//定义空数组内部元素类型为int（python列表）
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 9;
	//三个元素的值

	int yamcosts[3] = { 20,30,5 };
	//定义数组并初始化
	cout << "Total yams=";
	cout << yams[0] + yams[1] + yams[2] << endl;
	//输出数组一的内部元素之和
	cout << "The package with" << yams[1] << "yams costs";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yamcosts[0] * yams[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];

	cout << "The total yam expense is " << total << " cents.\n";
	cout << "Size of one element=" << sizeof(yams);
	cout << "bytes.\n";
	cout << "Size of one element=" << sizeof(yams[0]);
	cout << "bytes.\n";
	return 0;

}