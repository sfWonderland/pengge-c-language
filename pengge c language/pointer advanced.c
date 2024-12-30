#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 字符串旋转结果

// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 
// 例如：给定s1 = AABCD和s2 = BCDAA，返回1
// 
// 给定s1 = abcd和s2 = ACBD，返回0.
// 
// AABCD左旋一个字符得到ABCDA
// 
// AABCD左旋两个字符得到BCDAA
// 
// AABCD右旋一个字符得到DAABC

//int findRound(const char* src, char* find)
//{
//    char tmp[256] = { 0 }; // 用一个辅助空间将原字符串做成两倍原字符串
//    strcpy(tmp, src); // 先拷贝一遍
//    // char *strcat( char *strDestination, const char *strSource );
//    // 即strcat需要两个参数，一个字符串目的地地址（前）和一个欲连接的字符串的地址（后），返回的是一个字符型指针。﻿
//    ﻿﻿// Each of these functions returns the destination string (strDestination). No return value is reserved to indicate an error.
//    //﻿ 该类函数的返回值为字符串目的地地址。没有返回值说明出错了。
//    strcat(tmp, src); // 再连接一遍
//    // char *strstr( const char *string, const char *strCharSet );﻿
//    // 即strstr需要两个参数，一个完整字符串地址（前）和一个比较的字符串地址（后），返回的是一个字符型指针。﻿
//    // Each of these functions returns a pointer to the first occurrence of strCharSet in string, or NULL if strCharSet does not appear in string. 
//    // 返回值为第一次出现﻿后者字符串的指针。如果找不到返回NULL；
//    // If strCharSet points to a string of zero length, the function returns string.（from msdn）
//    // 如果比较的字符串指针指向一个没有大小的字符串，则会返回string。
//    return strstr(tmp, find) != NULL; // 看看找不找得到
//}

// 字符串左旋
//
// 实现一个函数，可以左旋字符串中的k个字符。
//
// 例如：
//
// ABCD左旋一个字符得到BCDA
//
// ABCD左旋两个字符得到CDAB

//char* LeftRound(char* src, int n)
//{
//    char tmp[256] = { 0 }; // 用一个辅助空间将原字符串做成两倍原字符串
//    strcpy(tmp, src); // 先拷贝一遍
//    strcat(tmp, src); // 再连接一遍
//    int len = strlen(src);
//    n %= len;
//    for (int i = 0; i < len; i++)
//    {
//        *(src + i) = *(tmp + len - n + i);//错位拷贝
//    }
//    return src;//返回原地址
//}
//
//int main()
//{
//    char src[] = "ABCD";
//    int n = 0;
//    scanf("%d", &n);//输入左旋位数
//    printf("%s\n", LeftRound(src, n));
//}

//void ReverseChar(char* str, int start, int end)
//{
//	int i = 0;
//	int j = 0;
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		char tmp = '\0';
//		tmp = *(str + i);
//		*(str + i) = *(str + j);
//		*(str + j) = tmp;
//	}
//}
//
//char* LeftRound(char* src, int n)
//{
//	int len = strlen(src);
//    n %= len;
//	ReverseChar(src, 0, n - 1);
//	ReverseChar(src, n, len - 1);
//	ReverseChar(src, 0, len - 1);
//	return src;
//}
//
//int main()
//{
//	char src[256] = { 0 };
//	scanf("%s", src);
//    int n = 0;
//    scanf("%d", &n);//输入左旋位数
//    printf("%s\n", LeftRound(src, n));
//}

//qsort模拟实现

//模仿qsort的功能实现一个通用的冒泡排序
//struct stu
//{
//	int age;
//	char name[20];
//	char gender[7];
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	//降序
//	return (*(int*)(e1)-*(int*)(e2));
//	//return strcmp((char*)e1, (char*)e2);
//}
//
//int cmp_char(const void* e1, const void* e2)
//{
//	//降序
//	//return (*(int*)(e1)-*(int*)(e2));
//	return strcmp((char*)e2, (char*)e1);
//}
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void CommonBubble(void* base, int num, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int flag = 0;
//	char* p = (char*)base;
//	char tmp[80] = { 0 };
//	for (int i = 0; i < num - 1; i++)
//	{
//		if (cmp(p + width * i, p + width * (i + 1)) < 0)
//		{
//			flag = 1;
//			memcpy(tmp, p + width * i, width);
//			memcpy(p + width * i, p + width * (i + 1), width);
//			memcpy(p + width * (i + 1), tmp, width);
//		}
//	}
//	if (flag)
//		CommonBubble(base, num - 1, width, cmp);
//}
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int width = sizeof(arr[0]);
////	CommonBubble(arr, sz, width, cmp_int);
////	for (int i = 0; i < sz; i++)
////	{
////		printf("arr[%d] = %d\n", i, arr[i]);
////	}
////	putchar("\n");
////	char ch[] = "abghjcd";
////	int num = sizeof(ch) / sizeof(ch[0]);
////	int w = 1;
////	CommonBubble(ch, num, w, cmp_char);
////	for (int i = 0; i < num ; i++)
////	{
////		printf("ch[%d] = %c\n", i, ch[i]);
////	}
////	putchar("\n");
////	struct stu s[] = { {18, "lihua", "male"}, {58, "zhaosi", "secret"}, {22, "liuying", "female"} };
////	int size = sizeof(s) / sizeof(s[0]);
////	int width1 = sizeof(s[0]);
////	CommonBubble(s, size, width1, cmp_by_name);
////	for (int i = 0; i < size; i++)
////	{
////		printf("struct stu s[%d] = {%d, %s, %s}\n", i, s[i].age, s[i].name, s[i].gender);
////	}
////}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	qsort(arr, sz, width, cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	putchar("\n");
//	char ch[] = "abghfjcd";
//	int num = sizeof(ch) / sizeof(ch[0]);
//	int w = sizeof(ch[0]);
//	qsort(ch, num, w, cmp_char);
//	for (int i = 0; i < num ; i++)
//	{
//		printf("ch[%d] = %c\n", i, ch[i]);
//	}
//	putchar("\n");
//	struct stu s[] = { {18, "lihua", "male"}, {58, "zhaosi", "secret"}, {22, "liuying", "female"} };
//	int size = sizeof(s) / sizeof(s[0]);
//	int width1 = sizeof(s[0]);
//	qsort(s, size, width1, cmp_by_name);
//	for (int i = 0; i < size; i++)
//	{
//		printf("struct stu s[%d] = {%d, %s, %s}\n", i, s[i].age, s[i].name, s[i].gender);
//	}
//}