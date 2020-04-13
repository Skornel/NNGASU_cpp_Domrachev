#include <iostream>
#include <map>
#include <fstream>

using namespace std;

void getSlovar(string inputFileDir, string outputFileDir) {
	map<int, string> myMap;
	int key = 0;
	string value;
	ifstream in(inputFileDir);
	if (in.is_open())
	{
		while (in >> key >> value)
			myMap[key] = value;
	}
	in.close();
	cout << "Enter a new key: ";
	cin >> key;
	cout << "Enter a new value: ";
	cin >> value;
	myMap.insert(pair<int, string>(key, value));
	ofstream out;
	out.open(outputFileDir);
	if (out.is_open()) {
		for (auto it = myMap.begin(); it != myMap.end(); it++)
		{
			out << it->first << ' ' << it->second << '\n';
		}
	}
}

int main()
{
	getSlovar("C:\\Courses\\Cpp\\slovar.txt", "C:\\Courses\\Cpp\\slovar2.txt");
	return 0;
}