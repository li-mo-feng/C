#include<iostream>
using namespace std;

//��һ���Զ��������ռ�
namespace firt_space
{
	int a = 10;
}
//�ڶ����Զ���������ռ�
namespace second_space
{
	int a = 20;
	namespace third_space
	{
		
	}
}












int main()
{
	cout <<"��һ�������ռ��е� a = "<< firt_space::a << endl;
	cout <<"�ڶ��������ռ��е� a = "<< second_space::a << endl;
}