#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, row;
    cout << "Enter a count of string and row\n";// �������� ���������� ���������� �� ������ �������
    cin >> n >> m;  // ���� �������� �������
    //int str = -1; //���������� ��� ����������� ������� ������

    vector < vector <int> > a(n, vector <int>(m));// ���������� ������� �� n ����� �� m ��������� 
    for (int i = 0; i < n; i++)     // ����, ������� ��� �� �������
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
        {
            cout << "Enter a " << i + 1 << " string and " << j + 1 << " row\n";
            cin >> a[i][j]; // ���������� ������� ��� ������� (� ������ ������ ����)
        }
    vector <int> b(4);
    cout << "\n Enter a new vector with 4 elems" << endl;
    for (int i = 0; i < b.size(); i++) {
        cin >> b[i];
    }
    cout << "Source vector: \n";
    for (int i = 0; i < n; i++) // ����, ������� ��� �� �������
    {
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
            cout << a[i][j] << ' '; // ����� ��������� i ������ �������
        cout << endl;
    }
    cout << "\nOK! Enter a number of row which we shall replace\n ";
    cin >> row;
  /*  for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; i < m; j++)
            if (i == row - 1)  ������-�� ������� ������� =�
            {
                a[i][j] = b[j];
            }
        }
        */
    for (int i = 0; i < 4; i++)
    {
        a[row - 1][i] = b[i];
    }
    cout << "Done!\n RESULT:\n";
    for (int i = 0; i < n; i++) // ����, ������� ��� �� �������
    {
        for (int j = 0; j < m; j++) // ����, ������� ��� �� ���������
            cout << a[i][j] << ' '; // ����� ��������� i ������ �������
        cout << endl;
    }

    return 0;
}