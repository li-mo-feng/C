#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize ];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	//��ȡһ�У�ͨ�����з���ȷ����β ����һ������Ϊ����Ķ��󣬵ڶ���Ϊ�ֶγ���
	//�������з���ʾ���ܽ����Ҳ�������з���
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert,ArSize) ;
	cout << "I have some delicious " << dessert;
	cout << "for you, " << name << ".\n";
	return 0;

}