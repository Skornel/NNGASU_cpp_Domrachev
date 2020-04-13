#include <iostream>
#include <map>
#include <fstream>

using namespace std;

map <int, string> getSlovar(string fileDir) {
	map<int, string> myMap;
	int key = 0;
	string value;
	ifstream in(fileDir);
	if (in.is_open())
	{
		while (in >> key >> value)
			myMap[key] = value;
	}
	in.close();
	return myMap;
}
void selectSlovar(map<int, string> a, string str) {
	for (auto it = a.begin(); it!=a.end(); it++)
	{
		if (str == "\0") cout << it->first << " " << it->second<<'\n';
		else
		{
		if (it->second == str)cout << it->first << " " << it->second<<'\n';
		}
	}
}
int main()
{
	cout << "Enter a string: ";
	string str;
	cin >> str;
	selectSlovar(getSlovar("C:\\Courses\\Cpp\\slovar.txt"), str);
}