#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{//��ʹ�������±��ӡ������ÿ��Ԫ��
//	int arr[] = { 1,2,3,4,8,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0; 
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//// ���0~100000֮������С�ˮ�ɻ������������
//// ��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
////�� ��153 = 1^3+5^3+3^3, ��153�ǡ�ˮ�ɻ�������
//
//#include<math.h>
//int main(){
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		if (i > 100 && i < 1000)
//		{
//			//����i��λ��
//			int n = 1;
//			int tmp = i;
//			while (tmp / 10)
//			{
//				n++;
//				tmp = tmp / 10;
//			}
//			tmp = i;
//			int sum = 0;
//			//����i��ÿһλ��n�η�֮��
//			while (tmp)
//			{
//				sum += pow(tmp % 10, n);
//				tmp = tmp / 10;
//			}
//			if (sum == i)
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	unsigned long pula[] = { 6,7,8,9,10 };
//	unsigned long* pulp;
//	pulp = pula;
//	*(pulp + 3) += 3;
//	printf("%d, %d\n", *pulp, *(pulp + 3));
//	return 0;
//}
////���һ���ַ����������
//#include<string.h>
//int strlen_my(char* arr)
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i++] != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//void reverse(char* arr, int ret)
//{
//	int left = 0;
//	int right = ret - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] =  "hello world" ;
//	//int ret = strlen(arr);
//	int ret = strlen_my(arr);
//	reverse(arr, ret);
//	printf("%s\n", arr);
//	return 0;
//}
////�ַ�����
//#include<string.h>
//void reverse(char* str)
//{
//	int ret = strlen(str);
//	char* left = str;
//	char* right = str + ret - 1;
//	while (left++ < right--)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}//2*(line-1-i)-1
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮһ��Ǯ��������ƿ���Ի�һƿ��ˮ������20Ԫ�����Ժȶ���ƿ��
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	while (money>0)
//	{
//		money--;
//		empty++;
//		if (empty % 2 == 0)
//		{
//			money++;
//		}
//	}
//	printf("%d\n", empty);
	
	/*int money = 0;
	int total = 0;
	scanf("%d", &money);
	if(money>0)
	total = 2 * money - 1;*/

	/*int total = money;
	int empty = money;*/
	/*while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}*/
	//printf("%d\n", total);
//	return 0;
//}
