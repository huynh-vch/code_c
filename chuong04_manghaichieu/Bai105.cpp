//Bai105KyThuatCoHieu
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
bool MaTranToanDuong(float[][100], int, int);

int main()
{
    int k;
    int l;
    float b[100][100];
    Nhap(b, k, l);
    cout << "\nMa tram ban dau la: \n";
    Xuat(b, k, l);

    if (MaTranToanDuong(b, k, l) == true)
    {
        cout << "\nMang toan so duong.";
    }
    else
    {
        cout << "\nMang khong toan so duong.";
    }
    return 0;
}

void Nhap(float a[][100], int &m, int &n)
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
            a[i][j] = -100 + rand() / ((RAND_MAX) / 200.0);
        }
    }
}

void Xuat(float a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(10) << fixed << setprecision(2) << a[i][j];
        }
        cout << endl;
    }
}

bool MaTranToanDuong(float a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
            {
                return false;
            }
        }
    }
    return true;
}
