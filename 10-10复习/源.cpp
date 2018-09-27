#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//里面包含了system
#include<float.h>
int main(int argc, char const *argv[])
{
	//printf("float 存储最大字节数：%lu\n", sizeof(float));
	//printf("float最小值：%E\n", FLT_MIN);
	//printf("float最大值：%E\n", FLT_MAX);
	//printf("float精度值：%d\n", FLT_DIG);
	//printf("int存储大小：%lu\n", sizeof(int));
	//printf("Hello World\n");
	float f, x = 3.6, y = 5.2;
	int i = 4, a, b;
	a = x + y;
	b = (int)(x + y);
	//强制转换
	f = 10 / i;
	printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);
	//%d格式化输出为整形
	system("pause");
	return 0;
}