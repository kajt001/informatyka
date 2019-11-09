#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string x ="12";
	ofstream file("settings.txt");
	file<<x;
	file.close();
}
