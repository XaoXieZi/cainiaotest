#define _CRT_SECURE_NO_WARNINGS
//������
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵��
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("���ֿ�����%c\n", killer);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120) 
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//void print1(int* p, int sz)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void print2(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print1(p, sz);//ָ���ӡԪ��
//	printf("\n");
//	print1(arr, sz);//�±��ӡԪ��
//	return 0;
//}
//
//#include<stdio.h>
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//����ָ��

#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int (*p)(int, int) = Add;
//	int ret = (*p)(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	void (*pt)(int, int) = print;
//	(*pt)(arr, sz);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲���������������void
//	//1.void(*)() - ����ָ������
//	//2.(void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3.*(void(*)())0 - ��0�ĵ�ַ�����˽����ò���
//	//4.(*(void(*)())0) - ����0�ĵ�ַ���ĺ���
//	return 0;
//}
void add(int x, int y)
{
	return x + y;
}
void sul(int x, int y)
{
	return x - y;
}
void mul(int x, int y)
{
	return x * y;
}
void div(int x, int y)
{
	return x / y;
}
void mevu()
{
	printf("****************************\n");
	printf("***** 1. add    2. sul *****\n");
	printf("***** 3. mul    4. div *****\n");
	printf("*******   0. exit    *******\n");
	printf("****************************\n");
}
int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	int (*poi[5])(int, int) = { NULL, add, sul, mul, div };
	do
	{
		mevu();
		printf("������һ����:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������:>");
			scanf("%d %d", &a, &b);
			int ret = (*poi[input])(a, b);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("�������, ����������!\n");
		}
	} while (input);
	return 0;
}