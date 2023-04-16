#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == (is_leap_year(year)))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n一共有%d个闰年", count);
	return 0;
}
int binary_search(int arr[], int x, int sz)
{
	int left = 0;
	int right = sz - 1; int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 6; int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, x, sz);
	if (ret == -1)
	{
		printf("找不到该数字下标\n");
	}
	else
		printf("这个数字的下标是%d\n", ret);
	return 0;
}
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}
int main()
{	//嵌套调用&链式访问printf的每次打印的是个数也就是位数运行结果为4321.
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int num = Add(a, b);
	printf("%d\n", num);
	return 0;
}
#include<stdio.h>
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
#include<stdio.h>
int Fac1(int n)
{
	if (n <= 1)
		return 0;
	else
		return n * Fac1(n - 1);//求阶乘
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fac1(n);
	printf("n的阶乘是%d\n", ret);
	return 0;
}
#include<stdio.h>
int count = 0;
int Fih(int n)
{
	if (n == 3)
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fih(n - 1) + Fih(n - 2);
} 
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fih(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
//}
#include<stdio.h>
int Far1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Far1(n);
	printf("%d\n", ret);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1, 2, 3}, {4, 5} };
	int i = 0;
	for (i = 0; i < 3; i++)\ \二维数组的地址
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	return 0;
}
#include<stdio.h>//冒泡排序
void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;//假设这一趟要排序的数据已经有序了
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;//本趟排序的数据并不完全有序
			}
		}
		if (flag == 0)//说明这串元素已经有序了
			break;
	}
}
int main()
{
	int arr[] = { 10,11,2,3,45,5,16,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素地址
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 10;
	int b = a--;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
#include<stdio.h>
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}
写一个函数init将arr数组全部初始化为0
写一个print打印arr数组元素
reverse函数实现arr的逆向打印
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[8] - &arr[1]);
	return 0;
}
#include<stdio.h>
int main()
{// 乘法口诀表
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int binary_search(int arr[], int sz, int x)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	scanf("%d", &x);
	int t = binary_search(arr, sz, x);//在数组arr中找x的下标
	printf("这个数的下标为%d\n", t);
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[] = { 1,1,2,2,3,3,8,4,4,5,5 };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^ arr[i];
	}
	printf("%d\n", ret);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
		count++;
		printf("%d = hehe\n", count);
	}
	return 0;
}
模拟实现strcpy函数
#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(*dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

#include<stdio.h>
#include<assert.h>
//size_t == unsigned int
size_t my_strlen(const char* arr)
{//求字符串长度
	assert(arr);
	size_t coust = 0;
	while (*arr++)
	{
		coust++;
	}
	return coust;
}
int main()
{
	char arr[] = "hello world";
	printf("arr的字符个数为%d个\n", my_strlen(arr));
	return 0;
}
#include<stdio.h>
int numberof1(int n)
{
	int i = 0;
	int count = 0;//求n的二进制形式有几个一
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 16;
	int ret = numberof1(n);
	printf("ret = %d\n", ret);
	return 0;
}
#include<stdio.h>
int main(){
	int m = 0;
	int n = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	int ret = m ^ n;
	while (ret= ret & (ret - 1))
	{
		count++;
	}
	count++;
	printf("%d\n", count);
	return 0;
}
#include<stdio.h>
int cnt = 0;
int fin(int n)
{
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fin(n - 1) + fin(n - 2);
}
int main()
{
	fin(8);
	printf("%d\n", cnt);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 1;
	printf("a = %d\n", a);
	return 0;
}
int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
	{
		printf("hehe\n");
	}
	return 0;
}

整形家族
浮点型家族
构造类型 -- 自定义类型
 数组
 struct 结构体类型
 enum 枚举
 union 联合体
 
指针类型
 
空类型
void
 函数返回类型 void test();
 函数参数 void tset(void);
 指针 void *p;
int main()
{
	int a = 1;
	char* p = (char*) & a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}