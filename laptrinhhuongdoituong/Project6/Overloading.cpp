#include <iostream>
using namespace std;

int abs(int a)
{
	if (a < 0)
		return -a;
	else
		return a;
}

float abs(float a)
{
	if (a < 0)
		return -a;
	else
		return a;
}

int main()
{
	int a = 6;
	char c = 'a';
	float b = -4.5;
	cout << "tri tuyet doi cua so int la: " << abs(a) << endl;
	cout << "tri tuyet doi cua so float la: " << abs(b) << endl;
	cout << "tri tuyet doi cua ky tu la: " << abs(c);
	return 0;
}
