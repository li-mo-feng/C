#include<iostream>
void fun1(void)
{
	std::cout << "Three blind mice"<<std::endl;
}

void fun2(void)
{
	std::cout << "See how they run"<<std::endl;
}

int main()
{
	fun1();
	fun1();
	fun2();
	fun2();
}