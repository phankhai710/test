#include<iostream>
#include<cmath>
using namespace std;

bool sNT(long n);
bool tongLaSNT(long n);
bool dayKoTang(long n);

int main()
{
	for (size_t i = 100000000; i < 999999999; i++)
	{
		if (dayKoTang(i) && tongLaSNT(i) && sNT(i))
			cout << i << " ";
	}

	return 0;
}

bool sNT(long n)
{
	if (n < 2)
		return false;
	else
	{
		for (size_t i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}

bool tongLaSNT(long n)
{
	while (n > 0)
	{
		int sum = 0;
		int tmp = n % 10;
		n /= 10;
		if (sNT(sum += tmp))
			return true;
	}
	return false;
}

bool dayKoTang(long n)
{
	while(n > 10)
	{
		char a, b;
		b = n % 10;// chia de so sanh tu phai qua trai tung so
		n /= 10;
		a = n % 10;
		if (a < b)
			return false;
	}
	return true;
}