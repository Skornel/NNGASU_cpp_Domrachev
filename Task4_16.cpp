#include <iostream>
#define N 80

using namespace std;
bool thereIs(char* str1, char* str2)
{
	int len1 = 0;
	int len2 = 0;
	while (str1[len1]!= '\0')
	{
		len1++;
	}
	while (str2[len2]!= '\0')
	{
		len2++;
	}
	int check = 0;
	bool bCheck = false;
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++) {
			if (str1[i] == str2[j]) {
				check++;
				i++;
			
			if (check == len2) bCheck = true;
			}
			else
			{
				check = 0;
			}
			
			
		}
	}
	return bCheck;
}
int main()
{
	char str1[N] = "it's a very big test";
	char str2[N] = "test";
	thereIs(str1, str2) ? cout << "There is" : cout << "There is not";
}