#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
	/*char* pt = "hello world";
	pt = "w";
	printf("%s\n", pt);*/
	//printf("%s\n", pt);
	/*char arr[] = "hello world";
	printf("%s\n", arr);
	printf("%c\n", arr[0]);*/
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	int(*pi)[6] = &arr;
//	printf("%d\n", *p);
//	printf("%d\n", *(*pi));
//	printf("%d\n", (*pi)[1]);
//	return 0;
//}
//#include<stdio.h>
//void test(int *pa)
//{
//	printf("%d ", *pa);
//}
//int main()
//{
	//int a = 0;
	//int* pa = &a;
	//int** pt = &pa;
	//test(pt);
	//printf("%d\n", a);
	/*int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* pa = arr;
	int** par = &pa;*/
	//printf("%d ", *(**par+1));
	//printf("%d ", *(*pa+1));
	/*test(pa);*/
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(arr + i));
	//}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
void Sevp(char* buf1, char* buf2, int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void *name, int sz, int length, 
				int (*cmp)(const void*, const void*))
{
	int i = 0;
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)name+j*length, (char*)name+(j+1)*length) > 0)
			{
				Sevp((char*)name+j*length, (char*)name+(j+1)*length, length);
			}
		}
	}
}

int s_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print_f(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	/*int num = 0x01020304;
	char *p = &num;
	p += 1;
	short* *pd = &p;
	printf("%#x\n", **pd);*/
	//用冒泡排序实现一个qsort函数
	int arr[] = { 3,10,4,5,1,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), s_int);
	print_f(arr, sz);
	return 0;
}