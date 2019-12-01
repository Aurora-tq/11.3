#include<stdio.h>
int my_sqrt(int x)
{
	int i=x;
	for (; i > 0; i--)
	{
		if (x == i*i)
		{
			return i;
		}
	}
}
int main()
{
	int a;
	int b;
	printf("please input an int numbers:\n");
	scanf("%d", &a);
	b = my_sqrt(a);
	printf("%d开平方后为：%d\n", a, b);
	return 0;
}



//#include<stdio.h>
//
//int main()
//{
//	int a[10], i, max;
//	printf("please input ten numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i]>a[i + 1])
//		{
//			max = a[i];
//		}
//		else
//		{
//			max = a[i + 1];
//		}
//	}
//	printf("The max is:");
//	printf("%d", max);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int square(int x)
//{
//	int i = 0;
//	i=x*x;
//	return i;
//}
//
//int fact(int y)
//{
//	int c = 1, j, i;
//	for (j = 1; j <= y; j++)
//		c = c*j;
//	return c;
//}
//
//int main()
//{
//	int s, m, n, x, y;
//	printf("please input two numbers:\n");
//	scanf("%d%d", &m, &n);
//	x = square(m); y = square(n);
//	s = fact(x) + fact(y);
//	printf("s=%d\n", s);
//	return 0;
//
//}

//#include<stdio.h>
//float average(float arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	aver = sum / 10;
//	return aver;
//}
//int main()
//{
//	int i;
//	float aver;
//	float arr[10] = { 0 };
//	printf("please input 10 scores:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	aver = average(arr);
//	printf("The average is=%5.2f\n", aver);
//	return 0;
//}