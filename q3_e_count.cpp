#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fin;
	string str;
	int count=0;

	fin.open("e_word.txt", ios::in|ios::out);

	fin << "Life is a beautiful journey that is meant to be embraced to the fullest every day." << endl;
	fin << "elate,enjoy,einfochips " << endl;

	fin.seekg(0);

	while(fin >> str)
	{
		if(str[0] == 'e')
		{
			count++;
		}
		else
			continue;
	}

	cout << "Total number of words that start with 'e' are: " << count << endl;

	return 0;
}

