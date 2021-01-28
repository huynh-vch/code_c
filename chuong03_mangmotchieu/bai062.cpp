﻿#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int &);
void Xuat(float[], int);
int lietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong gia tri Cuc tri trong mang ban dau: \n"
		 << lietKe(a, n) << endl;
	return 1;
}
void Nhap(float a[], int &n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int lietKe(float a[], int n)
{
	cout << "\nCac cuc tri trong mang ban dau: \n";
	int dem = 0;
	if (a[0] != a[1])
	{
		cout << a[0] << setw(10);
		dem++;
	}
	for (int i = 1; i <= n - 2; i++)
	{
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
		{
			cout << a[i] << setw(10);
			dem++;
		}
	}
	if (a[n - 1] != a[n - 2])
	{
		cout << a[n - 1] << setw(10);
		dem++;
	}
	return dem;
}
