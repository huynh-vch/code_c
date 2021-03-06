﻿#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int &);
void Xuat(float[], int);
float Kt(float[], int);
void Xuly(float[], int, int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nNhap x: ";
	int x;
	cin >> x;
	cout << "\n\nMang a sau khi xoa cac gia tri " << x << " : \n";
	Xuly(a, n, x);
	return 1;
}
void Nhap(float a[], int &n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 21 - 10;
	}
}
void Xuat(float a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float Kt(float a[], int n)
{
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
void Xuly(float a[], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
		{
			//cout << "\nMax: " << max;
			n--;
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
		}
	}
	Xuat(a, n);
}