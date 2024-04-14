#include "WhileClass.h"
#include <iostream>

float WhileClass::WhileClass1(float a, float b)
{
	while (a >= b) 
	{
		a -= b;
	}

	return a;
}

int WhileClass::WhileClass2(float a, float b)
{
	int num = 0;

	while (a >= b) 
	{
		a -= b;
		num++;
	}

	return num;
}

void WhileClass::WhileClass3(float n, float k)
{
	int num = 0;

	while (n >= k) 
	{
		n -= k;
		num++;
	}

	std::cout << num << std::endl;
	std::cout << n << std::endl;
}

bool WhileClass::WhileClass4(int n) 
{
	while (n % 3 == 0) 
	{
		n /= 3;
	}
	
	return n == 1;
}

int WhileClass::WhileClass5(int n)
{
	int power = 0;

	while (n % 2 == 0)
	{
		n /= 2;
		power++;
	}

	return power;
}

int WhileClass::WhileClass6(int n)
{
	int factorial = 0;
	int mult = n;

	while (mult != 1 && mult != 2)
	{
		factorial += mult;
		mult -= 2;
	}
	
	return factorial;
}

int WhileClass::WhileClass7(int n)
{
	int k = 1;

	while (k * k <= n) 
	{
		k++;
	}

	return k;
}

int WhileClass::WhileClass8(int n)
{
	int k = 1;

	while (k * k <= n) 
	{
		k++;
	}

	return k - 1;
}

int WhileClass::WhileClass9(int n)
{
	int k = 1;
	int three_in_power_k = 1;

	while (three_in_power_k < n) 
	{
		three_in_power_k *= 3;
		k++;
	}

	return k;
}

int WhileClass::WhileClass10(int n)
{
	int k = 0;
	int three_in_power_k = 1;

	while (three_in_power_k < n) 
	{
		three_in_power_k *= 3;
		k++;
	}

	return k - 1;
}

void WhileClass::WhileClass11(int n)
{
	int sum = 0;
	int k = 1;

	while (sum < n) 
	{
		sum += k;
		k++;
	}

	std::cout << k << " " << sum << std::endl;
}

void WhileClass::WhileClass12(int n)
{
	int sum = 0;
	int k = 1;

	while (!(sum + k + 1 > n)) 
	{
		++k;
		sum += k;
	}

	std::cout << k << " " << sum << std::endl;
}

void WhileClass::WhileClass14(float a)
{
	float sum = 0.0;
	int k = 1;

	while (sum <= a) 
	{
		++k;
		sum += 1 / (float)k;
	}

	std::cout << k - 1 << " " << sum - 1 << std::endl;
}

void WhileClass::WhileClass15(float p)
{
	int k = 0;
	float s = 1000.0;
	p = p / 100.0;

	while (s <= 1100.0) 
	{
		++k;
		s += s * p;
	}

	std::cout << k << " " << s << std::endl;
}

void WhileClass::WhileClass17(int n)
{
	while (n > 0) 
	{
		std::cout << n % 10 << std::endl;
		n /= 10;
	}
}

bool WhileClass::WhileClass20(int n) {
	while (n > 0) 
	{
		if (n % 10 == 2)
		{
			return true;
		}
		n /= 10;
	}

	return false;
}

bool WhileClass::WhileClass22(int n) {
	int i = 2;

	while (i * i <= n) 
	{
		if (n % i == 0) 
		{
			return false;
		}
		i++;
	}

	return true;
}

void WhileClass::WhileClass23(int a, int b) {
	while ((a != 0) && (b != 0)) 
	{
		if (a > b) 
		{
			a = a % b;
		}
		else 
		{
			b = b % a;
		}
	}
	std::cout << a + b;
}

int WhileClass::WhileClass25(int n) {
	int f = 0;
	int f1 = 1;
	int f2 = 1;

	while (f <= n) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}

	return f;
}

int WhileClass::WhileClass27(int n) {
	int f = 0;
	int f1 = 1;
	int f2 = 1;
	int count = 2;

	while (f != n) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		count++;
	}

	return count;
}

int WhileClass::WhileClass28(int e) {
	int a1 = 1;
	int a = 0;
	int count = 1;

	while (abs(a - a1) >= e) {
		a = 2 + (1 / a1);
		a1 = a;
		count++;
	}

	return count;
}

int WhileClass::WhileClass30(int a, int b, int c) {
	int count = 0;

	while (a >= c && b >= c) {
		count++;
		a -= c;
		b -= c;
	}

	return count;
}