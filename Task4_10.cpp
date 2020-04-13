#include <iostream>
#define N 80
using namespace std;

char* strRevesre(char* str)
{
	char temp;
	int len = 0;
	while (str[len]!='\0')
	{
		len++;
	}
	for (int i = 0; i < len-1; i++, len--)
	{
		temp = str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
	}
	return str;
}
int main() {
	int i = 0;
	char test[N] = "Its a very big test";
	strRevesre(test)[N];
	while (test[i] != '\0')
	{
		cout << test[i];
		i++;
	}
	
}