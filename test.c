#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char mid = *left;
//		*left = *right;
//		*right = mid;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[100] = { 0 };  //  ������100
//	gets(arr);              //   ��ȡһ��
//	reverse(arr,arr+strlen(arr)-1);  //���ú���
//	printf("%s\n", arr);             // ��ӡ�������麯���Ƿ���ȷ�ټ������£����ɾ��
//	char* start = arr;               // ����һ�����±� 
//	while (*start != ' ' && *start != '\0')
//	{
//		char* end = start;            // ����һ���±꣬�����±꿪ʼ�������end�����ߣ�ȥ��ÿ�����ʵĽ�β
//		for(end=start;;end++)
//		{
//			if (*end == ' '|| *end == '\0')   //  ���end����' '(�ո�)��'\0'����˵���ҵ�һ�����ʵĽ�β
//			{
//				reverse(start, end - 1);      // ���ú��������������
//				break;                       // ��������ѭ��
//			}
//		}
//	/*	if (*end == ' ')*/             
//			start = end + 1;
//		//else
//		//	start = end;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//    char arr[3] = { 0 };
//    gets(arr);
//    printf("%d\n", arr[1]);
//    return 0;
//}


//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%d\n", a);
//
//    return 0;
//}

//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	int d = a;
//	if (a >= 0)
//	{
//		if (d + 1 >= a + 0.5)
//			printf("%d\n", d);
//		else
//			printf("%d\n", d + 1);
//	}
//	else
//	{
//		if (d - 1 >= a - 0.5)
//			printf("%d\n", d - 1);
//		else
//			printf("%d\n", d);
//
//	}
//	return 0;
//}


//����һ��������1000-9999��  �������

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while(a != 0)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}


//int main()
//{
//    int id = 0;
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    scanf("%d;%lf,%lf,%lf ", &id, &a, &b, &c);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, a, b, c);
//    return 0;
//}


// �������룬ÿһ������һ����д��ĸ����һ�����һ��Сд��ĸ

int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		printf("%c\n", ch + 32);
		getchar();//����\n
	}

	return 0;
}