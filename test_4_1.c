#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int calc(int(*pt)(int, int))
//{
//	int a, b;
//	printf("请输入两个数字:>");
//	scanf("%d%d", &a, &b);
//	return pt(a, b);
//}
//void mevu()
//{
//	printf("       两位数加减乘除运算\n");
//	printf("***  1.加  2.减  3.乘  4.除  ***\n");
//	printf("       输入0.可退出程序\n");
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		mevu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);
//			printf("结果 = %d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("结果 = %d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("结果 = %d\n", ret);
//			break;
//		case 4:
//			ret = calc(div);
//			printf("结果 = %d\n", ret);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}

#include<stdio.h>
int binary_search(int arr[], int sz, int target)
{
	int left = 0;
	int right = sz - 1;
	int ane = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] >= target)
		{
			ane = mid;
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return ane;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int target;
	scanf("%d", &target);
	int ret = binary_search(arr, sz, target);
	printf("target的下标 = %d\n", ret);
	return 0;
}