#include <iostream> 
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void main() {
	cout << "Enter the value:";
	int a, n, b, d;
	cin >> a;
	n = 1;
	while (n <= sqrt(a))
	{
		b = a % n;
		d = a / n;
		if (b == 0) 
			{
				cout << n <<" ";
				if (n != d) cout << d <<" ";
			}
		n++;
    }
	_getch();
}
	
