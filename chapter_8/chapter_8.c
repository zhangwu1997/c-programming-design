#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	float b = 0;
//	//int* pa;
//	//float* pb;
//	//pa = &a;
//	//pb = &b;
//	int* pa = &a;
//	float* pb = &b;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = &arr[0];
//	int* p2 = arr;
//	printf("%d", (p1 + 5) - p2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (; i < 10; i++)
//		printf("%-2d", arr[i]);
//	printf("\n----------------------------\n");
//	for (i = 0; i < 10; i++)
//		printf("%-2d", *(arr + i));
//	printf("\n----------------------------\n");
//	for (int* p = arr; p < arr + 10; p++)
//		printf("%-2d", *p);
//
//	return 0;
//}

////��������
//#include<stdio.h>
//int main()
//{
//	void Reverse_Array(int* arr, int size);
//	void Print_Array(int* arr, int size);
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Reverse_Array(arr, size);
//	Print_Array(arr, size);
//	return 0;
//}
//void Reverse_Array(int* arr, int size)
//{
//	int begin = 0;
//	int end = size - 1;
//	while (begin < end)
//	{
//		//int temp = arr[begin];
//		//arr[begin++] = arr[end];
//		//arr[end--] = temp;
//		int temp = *(arr + begin);
//		*(arr + begin++) = *(arr + end);
//		*(arr + end--) = temp;
//	}
//}
//void Print_Array(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%2d", *(arr + i));
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int* p;
//	for (p = arr[0]; p < arr[0] + 12; p++)
//	{
//		if ((p - arr[0]) % 4 == 0)
//			printf("\n");
//		printf("%4d", *p);
//	}
//	printf("\n");
//	p = arr[0];
//	for (p = arr[0]; p < arr[0] + 12; p++)
//	{
//		if ((p - arr[0]) % 4 == 0)
//			printf("\n");
//		printf("%10p", p);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int(*p)[4] = &arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%10p", p++);
//	}
//	printf("\n");
//	p = &arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%3d", p[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%10p", &p[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[] = "I love China!";
//	printf("%c\n", str[7]);
//	for (int i = 0; i < (sizeof(str)/sizeof(str[0])); i++)
//	{
//		if (i == 7)
//			printf("%c\n", str[i]);
//	}
//	printf("%c\n", *(str + 7));
//	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++)
//	{
//		if (i == 7)
//			printf("%c\n", *(str + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* str = "I love China!\n";
//	printf("%s", str);
//	printf("%c", str[0]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str1[] = "I am a student.";
//	char str2[30];
//	char* p1 = str1, *p2 = str2;
//	while (*p1 != '\0')
//	{
//		*(p2++) = *(p1++);
//	}
//	*p2 = *p1;
//	printf("%s", str2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[] = "I am a boy.", b[20];
//	char* p1 = a, * p2 = b;
//	for (int i = 0; *(p1) != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//	printf("%s", b);
//	return 0;
//}