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

//int checkData(int* p)
//{
//	char tmp = 0;
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		tmp |= 1 << p[i];
//		//tmp每次或上一位1，p[i]如果是1~5都有，则1<<1到1<<5都或上的结果将会是00111110，如果有并列，则一定会至少却其中一个1，结果就不会是00111110，所以可以判断tmp最终的结果是不是这个数字来判断有没有重复。
//	}
//	return tmp == 0x3E;
//}
//
//void diveRank(int* p, int n)
//{
//	if (n >= 5) //此时的n是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
//			checkData(p)) //查重
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	for (p[n] = 1; p[n] <= 5; p[n]++)
//	{
//		diveRank(p, n + 1); //通过递归模拟多层循环，每进一次递归相当于进了一层新的循环。
//	}
//}
//
//int main()
//{
//	int p[5];
//
//	diveRank(p, 0);
//
//	return 0;
//}


//#include <stdio.h>
//
//void swapArgs(int* a, int* b) //交换函数
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void diveRank(int* p, int n)
//{
//	if (n >= 5) //此时的n也是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
//			//由于此时是执行的全排列，所以查重也省了。
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("p[%d] = %d\n", i, p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	int i;
//	for (i = n; i < 5; i++) //这个递归方式就完成了对1~5的全排列，方法是从后向前不停的执行交换。可以参考改进二和原代码，将这个递归程序写回成循环后，可以更好的理解。
//	{
//		swapArgs(p + i, p + n);
//		diveRank(p, n + 1);
//		swapArgs(p + i, p + n);
//	}
//}
//
//int main()
//{
//	int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。
//
//	diveRank(p, 0);
//
//	int i = 0;
//
//	return 0;
//}


//合并字符串

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	int r = 0;
//	while ((i < m) && (j < n))
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[r++] = arr1[i];
//			i++;
//		}
//		else
//		{
//			arr3[r++] = arr2[j];
//			j++;
//		}
//	}
//	if (i < m)
//	{
//		for (; i < m; i++)
//		{
//			arr3[r++] = arr1[i];
//		}
//	}
//	else
//	{
//		for (; j < n; j++)
//		{
//			arr3[r++] = arr2[j];
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	printf("\n");
//	return 0;
//}