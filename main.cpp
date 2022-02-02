#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	system("color 2");

	fstream input;
	string read;
	char not_exist[] = {'a','n','e','h'};
	int num;
	bool best;

	input.open("input.txt" , ios :: in);
	
	while(!input.eof())
	{
		best = true;
		getline(input,read,',');
		for(int j=1 ; j<=5 ; j++)
			for(num=0 ; num<=4 ; num++)
				if(read[j] == not_exist[num] || read[2] != 'o' || read[3] != 'i' || read[4] != 's' || read[5] != 't')
					best = false;
		if(best == true)
			cout<<read<<endl;
	}
	return 0;
}