//bai030.cpp
#include <iostream>
using namespace std;
float Tong(float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float Kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
float Tong(float k)
{
	float S = 0;
	for (int i = 1; i <= k; i++)
	{
		S = S + 1.0 / (2 * i);
	}
	return S;
}