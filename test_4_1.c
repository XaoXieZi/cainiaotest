#define _crt_secure_no_warnings 1
#include<stdio.h>
int main()
{//不使用数组下标打印出数组每个元素
	int arr[] = { 1,2,3,4,8,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0; 
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
// 求出0~100000之间的所有“水仙花数”并输出。
// “水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身，
//如 ：153 = 1^3+5^3+3^3, 则153是“水仙花数”。

#include<math.h>
int main(){
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为自幂数
		if (i > 100 && i < 1000)
		{
			//计算i的位数
			int n = 1;
			int tmp = i;
			while (tmp / 10)
			{
				n++;
				tmp = tmp / 10;
			}
			tmp = i;
			int sum = 0;
			//计算i的每一位的n次方之和
			while (tmp)
			{
				sum += pow(tmp % 10, n);
				tmp = tmp / 10;
			}
			if (sum == i)
				printf("%d ", i);
		}
	}
	return 0;
}
int main()
{
	unsigned long pula[] = { 6,7,8,9,10 };
	unsigned long* pulp;
	pulp = pula;
	*(pulp + 3) += 3;
	printf("%d, %d\n", *pulp, *(pulp + 3));
	return 0;
}
//完成一个字符数组的逆序
#include<string.h>
int strlen_my(char* arr)
{
	int i = 0;
	int count = 0;
	while (arr[i++] != '\0')
	{
		count++;
	}
	return count;
}
void reverse(char* arr, int ret)
{
	int left = 0;
	int right = ret - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] =  "hello world" ;
	//int ret = strlen(arr);
	int ret = strlen_my(arr);
	reverse(arr, ret);
	printf("%s\n", arr);
	return 0;
}
//字符逆序
#include<string.h>
void reverse(char* str)
{
	int ret = strlen(str);
	char* left = str;
	char* right = str + ret - 1;
	while (left++ < right--)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
	}
}
int main()
{
	char arr[] = "hello world";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}