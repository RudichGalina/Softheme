#include <iostream> 
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
	int max = 0, count = 0, i = 0;
	string line;
	ifstream myfile("INPUT.txt");
	getline(myfile, line);
	while (i <= line.length())
	{
		count = 0;
		while (line[i] == '1') {
			count++;
			i++;
		}
		if (count > max) max = count;
		i++;
	}
	ofstream myfile1;
	myfile1.open("OUTPUT.txt");
	myfile1 << max;
	myfile1.close();
	return 0;
}


