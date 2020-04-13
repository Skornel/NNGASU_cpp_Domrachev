#include <iostream>
#include <fstream>
#include <map>

using namespace std;

map <int, int> slovar(string fileDir) {
	map<int, int> myMap;
	int key = 0;
	int value = 0;
	ifstream in(fileDir);
	if (in.is_open())
	{
		while (in >> key >> value)
			myMap[key] = value;
	}
	in.close();
	return myMap;
}
int main()
{
	map<int, int>out = slovar("C:\\Courses\\Cpp\\slovar.txt");
	for (auto it = out.begin(); it != out.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}
}


