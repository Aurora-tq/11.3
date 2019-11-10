//完成猜数字游戏

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void meum()
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int i = 0;
//	while (1)
//	{
//		printf("请输入猜的数字\n ");
//		scanf("%d", &i);
//		if (i > random_num)
//			printf("猜大了\n");
//		else if (i < random_num)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		meum();
//		printf("please choose a number:0 or 1\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("please input a valid number!\n");
//		}
//	} while (i);
//	return 0;
//}

//写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key, mid=0;
//	printf("please input a number:\n ");
//	scanf("%d", &key);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//	{
//		printf("找到了，下标为%d\n", mid);
//	}
//	if (left > right)
//	{
//		printf("-1\n");
//	}
//	return 0;
//}

//编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("please input your password:\n");
//		scanf("%s", &password);
//    	if (strcmp(password , "123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//		if (i == 3)
//		{
//			printf("三次均错，即将退出程序！\n");
//		}
//	}
//	return 0;
//}

//编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include<stdio.h>
int main()
{
	char i;
	printf("please input a char:\n");
	while (1)
	{
		scanf("%c", &i);
		if (i >= 97 && i <= 122)
		{
			printf("对应的字符为：%c\n", i - 32);
		}
		if (i >= 65 && i <= 90)
		{
			printf("对应的字符为：%c\n", i + 32);
		}
		if (i >= 48 && i <= 57)
			printf("\n");
	}
	return 0;
}