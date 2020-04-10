#include <iostream>
#define N 80
using namespace std;


char* SummStr(char* str, char* str2, int number)
{
    int len1 = 0, len2 = 0;

    while (str[len1] != '\0')
        ++len1;

    while (str2[len2] != '\0')
        ++len2;

    char* output = new char[len1 + len2 + 1];

    for (int i = 0; i < number; i++)
        output[i] = str[i];

    for (int i = number; i < len2 + number; i++)
        output[i] = str2[i - number];

    for (int i = len2 + number; i < len1 + len2; i++)
        output[i] = str[i - len2];

    output[len1 + len2] = '\0';
    return output;
}

int main(void)
{
    char s1[N] = "This is a very big test   ";
    char s2[N] = "TEST";
    //char s3[N];
    int place = 0;
    cout << "Enter a number for summ both string on a first string: ";
    cin >> place;
    int i = 0;
    //CopyStr(s1, s2);
    while (SummStr(s1, s2, place)[i]!='\0')
    {
        cout << SummStr(s1, s2, place)[i];
        i++;
    }

    return 0;
}
