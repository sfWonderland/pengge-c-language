#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//杨辉三角
//在屏幕上打印杨辉三角。
//void YHtriangle(int n, int arr[30][30])
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if ((0 == j) || (i == j))
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//}
//
//int main()
//{
//	int arr[30][30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	YHtriangle(n, arr);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if(arr[i][j])
//				printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜凶手

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。

//以下为4个嫌疑犯的供词:

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//	char murder = 0;
//	int flag = 0;
//	for(murder = 65; murder <= 68; murder++)
//	{
//		flag = 0;
//		//A说：不是我。
//		if (murder != 65)
//			flag++;
//		//B说：是C。
//		if (murder == 67)
//			flag++;
//		//C说：是D。
//		if (murder == 68)
//			flag++;
//		//D说：C在胡说
//		if (!(murder == 68))
//			flag++;
//		//已知3个人说了真话
//		if (flag == 3)
//			break;
//	}
//	//全部走一遍也没有答案
//	if (69 == murder)
//		printf("没有凶手\n");
//	//满足条件的是凶手
//	else
//		printf("%c是凶手\n", murder);
//}

//猜名次

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：

//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；

//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	char arr[5] = { 0 };
	if()
}