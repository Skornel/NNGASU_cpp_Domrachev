#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cout << "Enter a count of string and row\n";// �������� ���������� ���������� �� ������ �������
    cin >> n >> m;  // ���� �������� �������
    int maximum = 0;
    int minimum = 100;
    //int str = -1; //���������� ��� ����������� ������� ������

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
            if (a[i][j] >= maximum)
            {
                maximum = a[i][j];
               // str = i;
            };
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] <= minimum)
            {
                minimum = a[i][j];
                // str = i;
            };
        }
    cout << "Max is " << maximum << " Min is " << minimum << " difference is " << maximum - minimum;
    return 0;
}