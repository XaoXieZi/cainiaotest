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
	int (*parr)[10] = &arr;//ȡ����������ĵ�ַ
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d ", (*pb)[i]);
	}

	/*parr ����һ������ָ�� - ���д�ŵ�������ĵ�ַ

	arr - ������������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ*/
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
int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
int main()
{
	i--;//-1
	//sizeof���������������Ľ����������unsigned int
	if(i>sizeof(i))//�ȴ�Сʱ�ὫiҲתΪunsigned int �޷�������
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
//��Sa = a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//���磺2+22+222+2222+22222
#include<stdio.h>

int main()
{
	int n = 0;  //n����n��
	int a = 0;  //a�����������
	scanf("%d%d", &a, &n);  //����������ֵ
	int i = 0;
	int ret = 0;
	int num = 0; //����������֮��
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
	//����ȷ�������±�
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
	int x = 0;//��arrһ�������������ҵ�Ԫ��x���±�
	scanf("%d", &x);
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, sz, x);
	if(ret == -1)
		printf("�Ҳ���\n");
	else
		printf("x�����±�Ϊ%d\n", ret);
	return 0;
}
