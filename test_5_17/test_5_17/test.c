#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//9.ָ���������������

//����������Ԫ�صĵ�ַ
//�������������⣺
//1.sizeof(�����������������������ʾ�������飬�������������Ĵ�С
//2.&���������������������ʾ�������飬ȡ����������������ĵ�ַ
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a)); //16
	//printf("%d\n", sizeof(a + 0));//4/8 a+0������ĵ�һ��Ԫ�صĵ�ַ���ǵ�ַ����С����4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4��a��ʾ������Ԫ�صĵ�ַ��*a��ʾ����ĵ�һ��Ԫ�أ�sizeof(*a)���ǵ�һ��Ԫ�صĴ�С��4���ֽ�
	//printf("%d\n", sizeof(a + 1));//4��a+1��ʾ����ڶ���Ԫ�صĵ�ַ��sizeof(a+1)���ǵڶ���Ԫ�ش�С��4���ֽ�
	//printf("%d\n", sizeof(a[1])); //4 ������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));  //4/8 &aȡ��������������ĵ�ַ������ĵ�ַҲ�ǵ�ַѽ���ǵ�ַ��С����4/8�ֽ�  
	//printf("%d\n", sizeof(*&a));//16  ���������������Ĵ�С
	//printf("%d\n", sizeof(&a + 1));//4/8 //&a������ĵ�ַ��+1�����������飬��������4���λ�õĵ�ַ
	//printf("%d\n", sizeof(&a[0]));//4/8 ȡ�����������һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 ָ��ڶ���Ԫ�صĵ�ַ


	char arr[] = { 'a','b','c','d','e','f' };//a,b,c,d,e,f

	return 0;
}
//szieof ������Ƕ�����ռ�ڴ�Ĵ�С-��λ���ֽ�