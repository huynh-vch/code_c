#include <iostream>
using namespace std;
float Tinh(int n);

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    float kq = Tinh(n);
    cout << "Ket qua la: " << kq << "\n";
    return 1;
}

float Tinh(int n)
{
    if (n == 0)
        return 1;
    float s = Tinh(n - 1);
    return (s * (1 + (float) 1/(n * n)));
}