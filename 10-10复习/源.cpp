#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//���������system
#include<float.h>
int main(int argc, char const *argv[])
{
	//printf("float �洢����ֽ�����%lu\n", sizeof(float));
	//printf("float��Сֵ��%E\n", FLT_MIN);
	//printf("float���ֵ��%E\n", FLT_MAX);
	//printf("float����ֵ��%d\n", FLT_DIG);
	//printf("int�洢��С��%lu\n", sizeof(int));
	//printf("Hello World\n");
	float f, x = 3.6, y = 5.2;
	int i = 4, a, b;
	a = x + y;
	b = (int)(x + y);
	//ǿ��ת��
	f = 10 / i;
	printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);
	//%d��ʽ�����Ϊ����
	system("pause");
	return 0;
}