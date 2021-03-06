#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
void XuatGiaTriChanTrenMotCot(int[][100], int, int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	int y;
	cout << "Nhap cot muon xuat: ";
	cin >> y;
	cout << "\nCac gia tri chan tren cot: \n";
	XuatGiaTriChanTrenMotCot(b, k, l, y);
	return 0;
}

void Nhap(int a[][100], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 200 - 100);
		}
	}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << a[i][j];
		}
		cout << endl;
	}
}

void XuatGiaTriChanTrenMotCot(int a[][100], int m, int n, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i][y] % 2 == 0)
		{
			cout << setw(7) << a[i][y];
		}
	}
}
