#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream f;
	int count=0;
	string str;

	f.open("the.txt", ios::in|ios::out);

	cout << "Writing in the file" << endl;
	f << "The number of the present in this the file is" << endl;

	f.seekg(0);

	while(f >> str)
	{
		if(str == "the")
			count++;
		else
			continue;

	}

	cout << "Number of times the present in the file : " << count << endl;

	return 0;
}
