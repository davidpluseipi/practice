#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	char* inputchar;
	string inputstr = "";
	inputchar = argv[1];
	for (int i = 0; i < strlen(inputchar); ++i)
	{
		inputstr = inputstr + inputchar[i];
	}
	cout << inputstr << endl;
	return 0;
}
