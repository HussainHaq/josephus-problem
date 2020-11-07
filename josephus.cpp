#include "josephus.h"

void init_vals(list<string>& namesList, args& in)
{
	namesList.resize(in.N);
	generate(namesList.begin(), namesList.end(), SEQ());
}

void print_list(const list < string >& circleList, const unsigned& ctr)
{
	cout << endl;
	int count = 0;
	list<string>::iterator num;

	if (ctr == 0)
	{
		cout << "Intial group of people" << endl;
		cout << "----------------------" << endl;
	}
	else 
	{
		cout << "After eliminating " << ctr << "th person" << endl;
		cout << "-----------------------------" << endl;
	}
	for (auto const& iter : circleList)
	{
		if ((count % NO_ITEMS == 0l) && (count != 0))
			cout << endl;

		cout << iter << " ";
		count++;
	}
} 
