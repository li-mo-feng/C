#include<iostream>
int main()
{
	using namespace std;
	int yams[3];
	//����������ڲ�Ԫ������Ϊint��python�б�
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 9;
	//����Ԫ�ص�ֵ

	int yamcosts[3] = { 20,30,5 };
	//�������鲢��ʼ��
	cout << "Total yams=";
	cout << yams[0] + yams[1] + yams[2] << endl;
	//�������һ���ڲ�Ԫ��֮��
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