//#include<stdio.h>
////1.	��Ŀ�������ú������������༶��
////�ֱ���35��30��ѧ��������һ��average����
////���ֱ������������ƽ���ɼ���
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
//	printf("1��ƽ����Ϊ��%.2lf\n2��ƽ����Ϊ��%.2lf\n", ave1, ave2);
//	return 0;
//}

//��Ŀ������Сָ�롿������������a,b,c,Ҫ���ɴ�С��˳������������ú���ʵ�֡�
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

//��Ŀ��������ָ�롿������a��n���������෴˳����
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
//		printf("%d��",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}

//��Ŀ��������ߡ�����������ĳ����l,w,h���������������x*y,x*z,y*z�������
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

//��Ŀ����ͶƱ����5����ѡ�ˣ�ÿ��ѡ��ֻ��ͶƱѡһ��,
//Ҫ���һ��ͳ��ѡƱ�ĳ����Ⱥ����뱸ѡ�˵����֣����������˵�Ʊ�����
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
