#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        cout << "Bai 037: Tinh S" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int S = 0;
        int i = 1;
        while (i <= n)
        {
                S = S + (i * i * i);
                i = i + 1;
        }

        cout << "S = " << S << endl;
        system("pause");
        return 1;
}