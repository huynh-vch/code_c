#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    float S = 0;
    float T = 1;
    float M = 0;
    int i = 1;
    while (i <= n)
    {
        T = T * x;
        M = M + i;
        S = S + (float)(T / M);
        i = i + 1;
    }
    cout << "Tong la: " << S << endl;
    
    system("pause");
    return 1;
}