#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fin;
	string str;
	int count=0;

	fin.open("s_end.txt", ios::in|ios::out);

	fin << "“Life shrinks or expands in proportion to one’s courage." << endl;
	fin << "Too many of us are not living our dreams because we are living our fears." << endl;

	fin.seekg(0);

	while(fin >> str)
	{
		int l = str.length() - 1;

		if(str[l] == 's')
		{
			count++;
		}
		else if(str[l] == ',')
		{
			if(str[l-1] == 's')
			{
				count++;
			}
			else
				continue;
		}
		else
			continue;
	}

	cout << "Total number of words that ends with 's' are: " << count << endl;

	return 0;
}

