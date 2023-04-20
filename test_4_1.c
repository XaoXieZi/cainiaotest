#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int *pa = &a;
	char ch = 'w';
	char*pc = &ch;
	double * d[5];
	double *(*pd)[5] = &d;

	int arr[10] = {1,2,3,4,5};
	int (*parr)[10] = &arr;//取出的是数组的地址
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d ", (*pb)[i]);
	}

	/*parr 就是一个数组指针 - 其中存放的是数组的地址

	arr - 是数组名是首元素的地址 - arr[0]的地址*/
	return 0;
}
int main()
{
	int arr[10] = {0};
	int *p1 = arr;
	int (*p2)[10] = &arr;
	printf("%p\n", p1);
	printf("\n");
	printf("%p\n", p1+1);
	printf("\n");
	printf("%p\n", p2);
	printf("\n");
	printf("%p\n", p2+1);
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int (*pa)[10] = &arr;
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		printf("%d ", *((*pa)+i));
	}	
	return 0;
}
void print(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", *((*p)+i+j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	//print(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}
int i;//i是全局变量，不初始化，默认是0
int main()
{
	i--;//-1
	//sizeof这个操作符，算出的结果的类型是unsigned int
	if(i>sizeof(i))//比大小时会将i也转为unsigned int 无符号整形
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
//求Sa = a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2+22+222+2222+22222
#include<stdio.h>

int main()
{
	int n = 0;  //n代表n项
	int a = 0;  //a代表这个数字
	scanf("%d%d", &a, &n);  //输入这两个值
	int i = 0;
	int ret = 0;
	int num = 0; //计算所有项之和
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		num = ret + num;
	}
	printf("%d\n", num);
	return 0;
}


int binary_search(int arr[], int sz, int x)
{
	//首先确定左右下标
	int left = 0;
	int right = sz - 1;
	int mid = 0;
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
			return mid;
	}
	if (left > right)
		return -1;
}
int main()
{
	int x = 0;//在arr一个有序数组中找到元素x的下标
	scanf("%d", &x);
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, sz, x);
	if(ret == -1)
		printf("找不到\n");
	else
		printf("x数组下标为%d\n", ret);
	return 0;
}
