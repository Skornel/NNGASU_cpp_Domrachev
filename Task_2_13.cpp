#include <iostream>   // ��� ����
#include <vector>     // ��� �������
using namespace std;  // ����� �� �������

int main()
{
    int n, m;  
    cout << "Enter a count of string and row\n";// �������� ���������� ���������� �� ������ �������
    cin >> n >> m;  // ���� �������� �������
    int maximum = 0;
    int str=-1; //���������� ��� ����������� ������� ������

    vector < vector <int> > a(n, vector <int>(m));// ���������� ������� �� n ����� �� m ��������� 

    for (int i = 0; i < n; i++)     // ����, ������� ��� �� �������
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
        {
            cout << "Enter a " << i + 1 << " string and " << j + 1 << " row\n";
            cin >> a[i][j]; // ���������� ������� ��� ������� (� ������ ������ ����)
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][0] >= maximum)
            {
                maximum = a[i][0];
                str = i;
            };
        }
    for (int i = 0; i < n; i++) // ����, ������� ��� �� �������
    {
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
            cout << a[i][j] << ' '; // ����� ��������� i ������ �������
        cout << endl;
    }
    cout << "Max elem on 1 row: " << maximum << endl<<"He's locating on "<<str+1<<" string\n";
    for (int i = 0; i < n; i++)
    {
        int temp = a[str][i];
        a[str][i] = a[0][i];
        a[0][i] = temp;
    }
    for (int i = 0; i < n; i++) // ����, ������� ��� �� �������
    {
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
            cout << a[i][j] << ' '; // ����� ��������� i ������ �������
        cout << endl;
    }
    return 0;
}