#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Print()
//{
//	printf("******************\n");
//	printf("  How do you do!\n");
//	printf("******************\n");
//}
//int main()
//{
//	Print();
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	printf("max is %d\n", Max(a, b));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int Sum(int, int);
//	int Sum(int x, int y);
//
//	int a, b, sum;
//	scanf("%d%d", &a, &b);
//	sum = Sum(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Sum(int x, int y)
//{
//	return x + y;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("max is %d\n", max(max(max(a, b), c), d));
//	return 0;
//}

//#include<stdio.h>
//int age(int n)
//{
//	if (n == 1)
//		return 10;
//	else
//		return age(n - 1) + 2;
//}
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("%d ", age(i));
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int f(int n);
//	int x;
//	scanf("%d", &x);
//	printf("%d! = %d\n", x, f(x));
//	return 0;
//}
//int f(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return f(n - 1) * n;
//}

//#include<stdio.h>
//int main()
//{
//	void hanoi(int n, char one, char two, char three);
//	int m;
//	printf("input the number of diskes:");
//	scanf("%d", &m);
//	printf("The step to move %d diskes:\n", m);
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//		move(one, three);
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c -> %c\n", x, y);
//}

//#include<stdio.h>
//int Max(int* arr, int* pindex,int size)
//{
//	int max = arr[0];
//	*pindex = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			*pindex = i;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 19,2,3,18,7,6,4,9,81,1 };
//	int max, index;
//	max = Max(arr, &index, sizeof(arr) / sizeof(arr[0]));
//	printf("max is %d,index is %d\n", max, index);
//	return 0;
//}

//#include<stdio.h>
//float average(float* score, int n)
//{
//	float sum = score[0],avg;
//	for (int i = 1; i < n; i++)
//	{
//		sum += score[i];
//	}
//	avg = sum / n;
//	return avg;
//}
//int main()
//{
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("The average of class A is %6.2f\n", average(score1, 5));
//	printf("The average of class B is %6.2f\n", average(score2, 10));
//	return 0;
//}

#include<stdio.h>
int main()
{
	//int arr[3][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
	int arr[][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
	int max = arr[0][0];
	for(int i = 0;i<3;i++)
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	printf("max is %d\n", max);
	return 0;
}