#include "Main.h"
#include "Array.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;
Main::Main()
{
	this->y = 0;
}


Main::~Main()
{
}

void Main::printCharPyramid()
{
	printf("Hello world\n");
	int i = 0;
	int j = 0;
	int num = 0;
	char caractere = '\0';
	printf("Insira um caractere!\n");
	scanf_s("%c", &caractere);
	printf("Insira a quantidade de linhas!\n");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c ", caractere);
		}
		printf("\n");
	}
}

void recursive(int n)
{
	if (n > 0)
	{
		printf("calling\n");
		printf("%d\n", n);
		recursive(n - 1);
		printf("returning\n");
	}
}

int factorial(int num)
{
	int res;
	if (num <= 0)
	{
		return 1;
	}
	else
	{
		res = num * factorial(num - 1);
		return res;
	}
	
}

int ageCoin(int coin)
{
	int age = 0;
	int incr = 0;
	while (incr < coin)
	{
		age++;
		incr += age;
	}
	return age;
}

void plusMinus(int arr[], int num) 
{
	float negatives = 0;
	float positives = 0;
	float zeroes = 0;
	float negRatios = 0;
	float posRatios = 0;
	float zerRatios = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] > 0)
		{
			positives++;
		}
		else if (arr[i] < 0)
		{
			negatives++;
		}
		else
		{
			zeroes++;
		}
	}

	if (positives > 0)
	{
		posRatios = positives / num;
		printf("%0.6f\n", posRatios);
	}
	if (negatives > 0)
	{
		negRatios = negatives / num;
		printf("%0.6f\n", negRatios);
	}
	if (zeroes > 0)
	{
		zerRatios = zeroes / num;
		printf("%0.6f\n", zerRatios);
	}
}

void printReversePyramid(int num)
{
	for (int i = 1; i < num + 1; i++)
	{
		for (int k = 1; k <= num - i; k++)
		{
			printf(" ");
		}
		for (int l = i; l > 0; l--)
		{
			printf("#");
		}
		printf("\n");
	}
}

void miniMaxSum(long arr[5]) 
{
	unsigned long minRes = 0;
	unsigned long maxRes = 0;
	unsigned long totalSum = 0;
	unsigned long lower = arr[0];
	unsigned long higher = arr[0];

	for (int i = 0; i < 5; i++)
	{

		if (arr[i] >= higher)
		{
			higher = arr[i];
		}

		if (arr[i] <= lower)
		{
			lower = arr[i];
		}
		totalSum += arr[i];
	}

	maxRes = totalSum - lower;
	minRes = totalSum - higher;

	printf("%lu %lu %lu", minRes, maxRes, totalSum);
}

void fun(int num)
{
	if (num > 0)
	{

		fun(num - 1);
		printf("%d ", num);
	}
}

int getCharSize(const char* inStr)
{
	int count = 0;
	char strToCount[4096] = { 0 };
	sprintf(strToCount, "%s", inStr);

	while (strToCount[count] != '\0')
	{
		count++;
	}
	return count;
}

void convertTime(const char* date, char* hourStr)
{
	char strToFormat[12] = { 0 };
	char auxFormattedStr[10] = { 0 };

	if (date[8] == 'P')
	{
		sprintf(strToFormat, "%c%c", date[0], date[1]);
		int hour = 0;
		hour = atoi(strToFormat);
		hour = hour + 12;
		memset(strToFormat, '\0', sizeof(strToFormat));
		strncpy(auxFormattedStr, date + 2, strlen(date + 2));
		strncpy(strToFormat, auxFormattedStr, strlen(auxFormattedStr) - 2);
		sprintf(hourStr, "%d%s", hour, strToFormat);
	}
}

string timeConversion(string s) 
{
	string convertedHour;
	if (s[8] == 'P')
	{
		int hour = 0;
		char hourStr[3] = { 0 };
		sprintf(hourStr, "%c%c", s[0], s[1]);
		hour = atoi(hourStr) + 12;
		if (hour != 24)
		{
			sprintf(hourStr, "%d", hour);
			convertedHour.append(hourStr);
			convertedHour.append(s, 2);
		}
		else
		{
			convertedHour.append(s);
		}

	}
	else
	{
		convertedHour.append(s);
		if (convertedHour.at(0) == '1' && convertedHour.at(1) == '2')
		{
			convertedHour.at(0) = '0';
			convertedHour.at(1) = '0';
		}
	}

	convertedHour.replace(convertedHour.begin() + 8, convertedHour.end(), "");
	return convertedHour;
	/*string hourConverted =
	timeConversion("12:45:54PM");
	printf("\n%s", hourConverted);*/
}

void treeRec(int num)
{
	if (num > 0)
	{
		printf("%d ", num);

		treeRec(num - 1);
		treeRec(num - 1);
	}
}
void funA(int n);
void funB(int n)
{
	if (n > 1)
	{
		printf("%d ", n);
		funA(n / 2);
	}
}

void funA(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		funB(n - 1);
	}
}

int Main::fun2(int n)
{
	// static int x = 0;
	if (n > 0)
	{
		y++;
		return fun2(n - 1) + y;
	}
	return 0;
}

int sumFast(int n)
{
	return n * (n + 1) / 2;
}

int sumLoop(int n)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int sumRecursive(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return sumRecursive(n - 1) + n;
	}
}

int factorialFor(int n)
{
	int i = 1;
	int result = 1;
	for (i; i <= n; i++)
	{
		result = i * result;
	}
	return result;
}

int power(int n, int b)
{
	int i = 1;
	int res = 1;
	for (i; i <= n; i++)
	{
		res = b * res;
	}
	return res;
}

int powerRec(int m, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return powerRec(m, n - 1) * m;
	}
}

int recFib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return recFib(n - 2) + recFib(n - 1);
	}
}

int fib(int n)
{
	int t0 = 0;
	int t1 = 1;
	int s = 0;
	int i = 0;

	if (n <= 1)
	{
		return n;
	}

	for (i = 2; i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
		printf("\nindex[%d] value[%d]", i, s);
	}
	return s;
}

int* createArray(int n)
{
	int* arr = new int[n];

	return arr;
}
int main(void)
{
	system("pause");
	return 0;
 }
