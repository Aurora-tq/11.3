//��ɲ�������Ϸ

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
//		printf("������µ�����\n ");
//		scanf("%d", &i);
//		if (i > random_num)
//			printf("�´���\n");
//		else if (i < random_num)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
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

//д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

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
//		printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//	}
//	if (left > right)
//	{
//		printf("-1\n");
//	}
//	return 0;
//}

//��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//		if (i == 3)
//		{
//			printf("���ξ��������˳�����\n");
//		}
//	}
//	return 0;
//}

//��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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
			printf("��Ӧ���ַ�Ϊ��%c\n", i - 32);
		}
		if (i >= 65 && i <= 90)
		{
			printf("��Ӧ���ַ�Ϊ��%c\n", i + 32);
		}
		if (i >= 48 && i <= 57)
			printf("\n");
	}
	return 0;
}