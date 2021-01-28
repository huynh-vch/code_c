﻿#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int &);
void Xuat(int[], int);
int Dem(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong gia tri phan biet trong mang: " << Dem(a, n) << endl;
	return 1;
}
void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 21 - 10;
}
void Xuat(int a[], int n)
{
	cout << "\nMang ban dau: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Dem(int a[], int n)
{
	cout << "Cac gia tri phan biet co trong mang: \n";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[j] == a[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			cout << a[i] << setw(5);
			dem++;
		}
	}
	return dem;
}