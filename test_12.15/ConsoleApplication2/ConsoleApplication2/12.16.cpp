#include<stdio.h>
//求最大值、最小值、平均值
//float average(int arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	aver = sum / 10.0;
//	return aver;
//}
//int Max(int arr[10])
//{
//	int max_1 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (max_1 <= arr[i])
//		{
//			max_1 = arr[i];
//		}
//	}
//	return max_1;
//}
//int Min(int arr[10])
//{
//	int min_1 = 10000;
//	for (int i = 0; i < 10; i++)
//	{
//		if (min_1>=arr[i])
//		min_1 = arr[i];
//	}
//	return min_1;
//}
//int main()
//{
//	int i, max, min;
//	float aver;
//	int arr[10] = { 67, 78, 98, 67, 90, 88, 87, 76, 86, 65 };
//	aver = average(arr);
//	max = Max(arr);
//	min = Min(arr);
//	printf("The average is=%5.2f\n", aver);
//	printf("The max is=%d\n", max);
//	printf("The min is=%d\n", min);
//	return 0;
//}
//使用冒泡法将输入的20的整数从小到大排序。
//int main()
//{
//	int i, j;
//	printf("please input 20 numbers:\n");
//	int arr[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for ( j = 0; j < 19; j++)
//	{
//		for ( i = 0; i < 19- j; i++)
//		{
//			if (arr[i]>arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
#include<stdio.h>
#include<string.h>
struct Person
{
	char name[20];
	int count;
}leader[5] = { "1", 0, "2", 0, "3", 0, "4", 0, "5", 0 };
int main()
{
	char name[20];
	int i = 0;
	printf("please input the num:\n");
	for (i = 1; i <=30; i++)
	{
		scanf("%s", name);
		for (int j = 0; j < 5; j++)
		{
			if (strcmp(name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}
	printf("1=\"wang\",2=\"pang\",3=\"zheng\",4=\"yan\",5=\"ju\"\n");
	printf("\nThe result:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
