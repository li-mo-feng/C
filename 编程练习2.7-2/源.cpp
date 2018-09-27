//要求输出一个以long为单位的距离然后转为“码”，一个long是220个码；
#include<iostream>
int Dis(int n)
{
	int dis = n * 220;
	return dis;
}

int main()
{
	using namespace std;
	cout << "请输入一个整数距离"<<endl;
	int num;
	cin >>num;
	cout << num << "long的长度为" << Dis(num) << "码";
}