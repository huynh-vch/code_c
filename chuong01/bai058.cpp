#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Nhap n: ";
        cin >> n;

        int S = 0;
        int t = n;
        while (t != 0)
        {
                int dv = t % 10;
                S = S + dv;
                t = t / 10;
        }
        cout << "Tong la: " << S;

        system("pause");
        return 1;
}