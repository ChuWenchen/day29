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
//	char arr[100] = { 0 };  //  不超过100
//	gets(arr);              //   读取一行
//	reverse(arr,arr+strlen(arr)-1);  //调用函数
//	printf("%s\n", arr);             // 打印结果，检查函数是否正确再继续往下，最后删掉
//	char* start = arr;               // 定义一个左下标 
//	while (*start != ' ' && *start != '\0')
//	{
//		char* end = start;            // 定义一个下标，从左下标开始，让这个end往后走，去找每个单词的结尾
//		for(end=start;;end++)
//		{
//			if (*end == ' '|| *end == '\0')   //  如果end等于' '(空格)，'\0'，则说明找到一个单词的结尾
//			{
//				reverse(start, end - 1);      // 调用函数倒置这个单词
//				break;                       // 跳出本次循环
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


//输入一个数，（1000-9999）  倒置输出

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


// 多组输入，每一行输入一个大写字母，下一行输出一个小写字母

int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		printf("%c\n", ch + 32);
		getchar();//处理\n
	}

	return 0;
}