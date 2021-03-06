﻿#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int &);
void Xuat(float[], int);
float Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri am dau tien trong mang: " << Xuly(a, n) << endl;
	return 1;
}
void Nhap(float a[], int &n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float Xuly(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			return a[i];
			break;
		}
	}
	return 0;
}
