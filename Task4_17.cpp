#include <iostream>
#define N 80

using namespace std;
int thereIs(char* str1, char* str2)
{
	int len1 = 0;
	int len2 = 0;
	while (str1[len1] != '\0')
	{
		len1++;
	}
	while (str2[len2] != '\0')
	{
		len2++;
	}
	int check = 0;
	bool bCheck = false;
	int count = 0;
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++) {
			if (str1[i] == str2[j]) {
				check++;
				i++;

				if (check == len2) bCheck = true;
				if (bCheck) {
					count++;
					bCheck = false;
				}
			}
			else
			{
				check = 0;
			}


		}
	}
	return count;
}
int main()
{
	char str1[N] = "it's a test very big test";
	char str2[N] = "test";
	cout<<thereIs(str1, str2);
}