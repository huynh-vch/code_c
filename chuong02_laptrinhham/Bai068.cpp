//bai068.cpp
#include <iostream>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
int Tong(int k)
{
	int S = 0;
	int T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = S + T;
	}
	return S;
}
