//#include<stdio.h>
//void chage(int arr1[], int arr2[], int a)
//{ 
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int t=arr1[i];
//	    arr1[i] = arr2[i];
//	    arr2[i] =  t;
//	} 
//}
//int main()//将数组A中的内容和数组B中的内容进行交换。
//{
//	int arr1[4] = {1,2,3,4};
//	int arr2[4] = {5,6,7,8};
//	int i;
//   chage(arr1, arr2,sizeof(arr1)/sizeof(arr1[0]));
//   for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//   {
//	   printf("%d", arr1[i]);
//   }
//   printf("\n");
//   for (i = 0; i <sizeof(arr1) / sizeof(arr1[0]); i++)
//   {
//       printf("%d", arr2[i]);
//   }
//	return 0;
//}
//
//int main()//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
//{
//	int i;
//	double  sum1 = 0.0, sum2 = 0.0, sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum1 = sum1 +1.0 / i;
//		}
//		else
//		{
//			sum2 = sum2 - 1.0 / i;
//		}
//	}
//	sum = sum1+sum2;
//	printf("sum=%lf", sum);
//	printf("\n");
//	return 0;
//}
//
//#include <string.h>
//int main()//编写程序数一下 1到 100 的所有整数中出现多少次数字9
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9||i/10==9)
//		{
//			count ++;
//		}
//	}
//	printf("The count is :%d\n", count);
//	return 0;
//}
//
//int main()//在屏幕上输出以下图案
//{
//	char arr[5][6] = { (' ', ' ', '*', '*', ' ', ' '), (' ', '*', ' ', ' ', '*', ' '), ('*', ' ', ' ', ' ', ' ', '*'),
//		(' ', '*', ' ', ' ', '*', ' '), (' ', ' ', '*', '*', ' ', ' ') };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			printf("%s", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//int main()//求出0～999之间的所有“水仙花数”并输出。
//{
//	int i, num, m, s, a, b, c;
//	for (i =100; i <= 999; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100 % 10;
//		s = pow(a, 3) + pow(b, 3) + pow(c, 3);
//		if (i == s)
//		{
//         printf("The nums are =%d\n", i);
//		}	
//	}
//	return 0;
//int add(int x)
//{
//	int a = x * 10 + x;
//	int b = x * 100 + a;
//	int c = x * 1000 + b;
//	int d = x * 10000 + c;
//	int sum =x+ a + b + c + d;
//	return sum;
//}
//
//int main()//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//{
//	int a,Sn;
//	printf("please input a num:\n");
//	scanf("%d", &a);
//	Sn = add(a);
//	printf("%d\n", Sn);
//	return 0;
//}
//
//int main()
//{
//	int i;
//	int arr[10] = { 1, 2, 3, 4, -1, -2, -3, -4, 2, 3 };
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>0)
//		{
//			printf("%d\t", arr[i]);
//		}
//		else
//		{
//			printf("0\t");
//		}
//	}
//	return 0;
//}

float average(float arr[10])
{ 
	float a, sum=arr[0];
	for (int i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
		a = sum / 10;
	}
	return a;
}
int main()
{
	float arr[10];
	float a;
	printf("please input ten scores:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
	}
	a = average(arr);
	printf("%f", a);
	return 0;
}