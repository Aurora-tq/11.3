//#include<stdio.h>
////1.	题目：【调用函数】有两个班级，
////分别有35和30名学生，调用一个average函数
////，分别求这两个班的平均成绩。
//double average1(int arr1[35])
//{
//	int sum1 = 0;
//	for (int i = 0; i < 35; i++)
//	{
//		sum1 = sum1 + arr1[i];
//	}
//	double ave1 = sum1 / 35.0;
//	return ave1;
//}
//double average2(int arr2[30])
//{
//	int  sum2 = 0;
//	for (int j = 0; j < 30; j++)
//	{
//		sum2 = sum2 + arr2[j];
//	}
//	double ave2 = sum2 / 30.0;
//	return ave2;
//}
//int main()
//{
//	int arr1[35] = {78,67,58,80,89,68,58,79,90,98,67,78,56,55,76,
//		87,45,66,76,89,78,67,56,76,86,90,76,86,86,87,98,65,64,61,87};
//	int arr2[30] = { 89,78,67,56,76,86,90,78,67,58,80,89,68,90,56,
//		36,45,76,86,97,65,76,85,76,75,97,87,65,76,54};
//	double ave1=average1(arr1);
//	double ave2 = average2(arr2);
//	printf("1班平均分为：%.2lf\n2班平均分为：%.2lf\n", ave1, ave2);
//	return 0;
//}

//题目：【大小指针】输入三个整数a,b,c,要求按由大到小的顺序将它们输出。用函数实现。
//#include<stdio.h>
//void swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void exchange(int *a, int *b, int *c)
//{
//	if (*a < *b) swap(a, b);
//	if (*a < *c) swap(a, c);
//	if (*b < *c) swap(b, c);
//
//}
//int main()
//{
//	int a, b, c, *p1, *p2,*p3;
//	printf("please input three nums:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	exchange(p1,p2,p3);
//	printf("The sorted is:%d %d %d\n", a, b,c);
//	return 0;
//}

//题目：【数组指针】将数组a中n个整数按相反顺序存放
//#include<stdio.h>
//void inverse(int *x, int n)
//{
//	int *p, temp, *i, *j, m = (n - 1) / 2;
//	i = x;
//	j = x + n - 1;
//	p = x + m;
//	for (; i <= p; i++, j--)
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
//}
//int main()
//{
//	int arr[6] = { 1, 3, 6, 9, 4, 5 };
//	int *p = arr;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("The contrary sort is:\n");
//	inverse(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d、",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}

//题目：【长宽高】输入正方体的长宽高l,w,h。求体积及三个面x*y,x*z,y*z的面积。
//#include<stdio.h>
//int main()
//{
//	int l, w, h;
//	printf("please input length: width : hight:\n");
//	scanf("%d%d%d", &l, &w, &h);
//	int vol = l*w*h;
//	int squ1 = l*w;
//	int squ2 = l*h;
//	int squ3 = w*h;
//	printf("The volume=%d\nThe x*y=%d\nThe x*z=%d\nThe y*z=%d\n", vol, squ1, squ2, squ3);
//	return 0;
//}

//题目：【投票】有5个候选人，每个选民只能投票选一人,
//要求编一个统计选票的程序，先后输入备选人的名字，最后输出个人得票结果。
//#include<stdio.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	int count;
//}leader[5] = { "1", 0, "2", 0, "3", 0, "4", 0, "5", 0 };
//int main()
//{
//	char name[20];
//	int i;
//	for ( i = 1; i <=10; i++)
//	{
//		scanf("%s", name);
//		for (int j = 0; i < 5; j++)
//		{
//			if (strcmp(name, leader[j].name) == 0)
//			{
//				leader[j].count++;
//			}	
//		}
//	}
//	printf("1=\"wang\",2=\"pang\",3=\"zheng\",4=\"yan\",5=\"ju\"\n");
//	printf("\nThe result:\n");
//	for ( i = 0; i < 5; i++)
//	{
//		printf("5%s:%d\n", leader[i].name, leader[i].count);
//	}
//	return 0;
//}
