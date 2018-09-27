#include<iostream>
using namespace std;

//第一个自定义命名空间
namespace firt_space
{
	int a = 10;
}
//第二个自定义的命名空间
namespace second_space
{
	int a = 20;
	namespace third_space
	{
		
	}
}












int main()
{
	cout <<"第一个命名空间中的 a = "<< firt_space::a << endl;
	cout <<"第二个命名空间中的 a = "<< second_space::a << endl;
}