#include <iostream>   // ��� ����
#include <vector>     // ��� �������
using namespace std;  // ����� �� �������

int main()
{
    int n, m;       // �������� ���������� ���������� �� ������ �������
    cin >> n >> m;  // ���� �������� �������
    int maximum = 0;

    vector < vector <int> > a(n, vector <int>(m)); // ���������� ������� �� n ����� �� m ��������� 

    for (int i = 0; i < n; i++)     // ����, ������� ��� �� �������
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
        {
            cin >> a[i][j]; // ���������� ������� ��� ������� (� ������ ������ ����)
        }

    for (int i = 0; i < n; i++) // ����, ������� ��� �� �������
    {
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
            cout << a[i][j] << ' '; // ����� ��������� i ������ �������
        cout << endl;
    }
    for (int i = 0; i < n; i++)     // ����, ������� ��� �� �������
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
        {
            if (a[i][j] >= maximum)
            {
                maximum = a[i][j];
            };
        }
    for (int i = 0; i < n; i++)     // ����, ������� ��� �� �������
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
        {
            if (a[i][j] == maximum)
            {
                cout << "������ " << i + 1 << " �������: " << j + 1;
            } // ���������� ������� ��� ������� (� ������ ������ ����)
        }
    return 0;
}