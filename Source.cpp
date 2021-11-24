#include<iostream>
using namespace std;

void chuyen(int n, char banDau, char trungGian, char dich)
{
	if (n == 1)
		cout << banDau << "-->" << dich << endl;
	else
	{
		chuyen(n - 1, banDau, dich, trungGian);
		chuyen(1, banDau, trungGian, dich);
		chuyen(n - 1, trungGian, banDau, dich);

	}
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	chuyen(n, 'A', 'B', 'C');

	return 0;
}