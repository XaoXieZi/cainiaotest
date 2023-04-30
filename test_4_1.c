#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = {2,1,3,4,8,9,10,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp_char(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}
void print(char ch[], int ret)
{
	int i = 0;
	for (i = 0; i < ret; i++) {
		printf("%c ", ch[i]);
	}
}
void test1()
{
    char ch[] = "alfkehhasdfuier";
	int ret = strlen(ch);
	qsort(ch, ret, sizeof(ch[0]), cmp_char);
	print(ch, ret);
}


struct stu
{
	char name[20];
	int age;
};
int s_int(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void print1(struct stu s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
}

int s_char(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void print2(struct stu s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
}
void test2() {
	使用qsort函数排序结构体数据
	/*struct stu s[3] = { {"zhangsan", 20},{"lisi", 21}, {"wangwu", 19} };
	int sz = sizeof(s) / sizeof(s[0]);*/
	按照年龄来排序
	/*qsort(s, sz, sizeof(s[0]), s_int);
	print1(s, sz);
	printf("\n")*/;
	按照名字来排序
	qsort(s,sz, sizeof(s[0]), s_char);
	print2(s, sz);
	printf("%d\n", s[0].age);
}

int main()
{
	//test1();
	test2();
	
	return 0;
}
#include<stdio.h>
	int test(int a)
	{
		if (a > 4 || a < 1)
		{
			return -1;
		}
		int b, c;
		if (a <= 4 && a >= 1)
		{
			printf("请输入两个数:>");
			if (a == 1)
			{
				scanf("%d%d", &b, &c);
				return b + c;
			}
			else if (a == 2)
			{
				scanf("%d%d", &b, &c);
				return b - c;
			}
			else if (a == 3)
			{
				scanf("%d%d", &b, &c);
				return b * c;
			}
			else if (a == 4)
			{
				scanf("%d%d", &b, &c);
				return b / c;
			}
		}
	}
	int main()
	{
		int a = 0;
		printf("1.加，2.减，3.乘，4.除\n");
		printf("请输入:>");
		scanf("%d", &a);
		int ret = test(a);
		if (ret == -1)
			printf("输入错误,退出程序！");
		else
			printf("等于%d\n", ret);
		return 0;
	}
#include<stdio.h>//回调函数
	int add(int x, int y)
	{
		return x + y;
	}
	int cale(int* (pt)(int, int))
	{
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		return pt(x, y);
	}
	int main()
	{
		int ret = cale(add);
		printf("%d\n", ret);
	}
int z_sort(void* e1, void* e2){
	
}
int main() {
	int arr[] = { 2,3,1,4,7,5,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bublle_sort(arr, sz, sizeof(arr[0]), z_sort);
	return 0;
}