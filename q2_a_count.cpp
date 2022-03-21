#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream f;
	int count=0;
	string str;

	f.open("a_count.txt", ios::in|ios::out);
	f << "Life is a beautiful journey that is meant to be embraced to the fullest every day."<<endl;
	//f << "the purpose of our lives is to be happy."<< endl;

	f.seekg(0);

	while(f >> str)
	{
		if(str == "a")
			count++;
		else
			continue;

	}

	cout << "Number of times 'a' present in the file : " << count << endl;

	return 0;
}
