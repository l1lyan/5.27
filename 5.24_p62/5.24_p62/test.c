#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�ǵݹ�ʵ���ַ�����
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

////�ݹ�ʵ���ַ�����
void reverse(char* str)
{
	int tmp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s", arr);
	return 0;
}

//�ݹ�ʵ�֣�����һ������ÿλ֮��
//int DigitSum(unsigned int n)//123       12   1
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;//12   1    
//	}
//	else
//		return n;      //3 
//}
//
//int main()
//{
//	unsigned int n = 0;//�޷�����
//	scanf("%d", &n);
//	int s = DigitSum(n);
//	printf("%d\n", s);
//	return 0;
//}

////�ݹ�ʵ�֣�n��k�η�
//double cifang(int n, int k)
//{
//	if (k > 0)
//		return n * cifang(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else//����k<0�����
//		//return (1.0 / n)* cifang(n, k + 1);
//		return 1.0 / cifang(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double s = cifang(n, k);
//	printf("%lf\n", s);
//	return 0;
//}