#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        cout << "Tinh tong" << endl;
        int n;
        cout << "nhap n=";
        cin >> n;
        float S = 0;
        int i = 2;
        while (i <= 2 * n)
        {
                S = S + 1.00 / i;
                i = i + 2;
        }
        cout << "Tong la S= " << S << endl;

        system("pause");
        return 1;
}