//Ҫ�����һ����longΪ��λ�ľ���Ȼ��תΪ���롱��һ��long��220���룻
#include<iostream>
int Dis(int n)
{
	int dis = n * 220;
	return dis;
}

int main()
{
	using namespace std;
	cout << "������һ����������"<<endl;
	int num;
	cin >>num;
	cout << num << "long�ĳ���Ϊ" << Dis(num) << "��";
}