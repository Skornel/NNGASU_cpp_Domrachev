#include <iostream>
#include <vector>

using namespace std;
int n, m;
int maximum = 0;
int str = -1; //Ïåðåìåííàÿ äëÿ çàïîìèíàíèÿ ïîçèöèè ñòðîêè
vector <vector<int>> vvod_dannyx(int n, int m)
{
    vector < vector <int> > a(n, vector <int>(m));// Îáúÿâëåíèå âåêòîðà íà n ñòðîê ïî m ýëåìåíòîâ 

    for (int i = 0; i < n; i++)     // Öèêë, êîòîðûé èä¸ò ïî ñòðîêàì
        for (int j = 0; j < m; j++) // Öèêë, êîòîðûé èä¸ò ïî ýëåìåíòàì
        {
            cout << "Enter a " << i + 1 << " string and " << j + 1 << " row\n";
            cin >> a[i][j]; // Çàïîëíåíèå âåêòîðà èëè ìàññèâà (â äàííîì ñëó÷àå ââîä)
        }
    return a;
}
vector <vector<int>> raschet(vector < vector <int> > a) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][0] >= maximum)
            {
                maximum = a[i][0];
                str = i;
            };
        }
    for (int i = 0; i < n; i++) // Öèêë, êîòîðûé èä¸ò ïî ñòðîêàì
    {
        for (int j = 0; j < m; j++) // Öèêë, êîòîðûé èä¸ò ïî ýëåìåíòàì
            cout << a[i][j] << ' '; // Âûâîä ýëåìåíòîâ i ñòðîêè âåêòîðà
        cout << endl;
    }
    cout << "Max elem on 1 row: " << maximum << endl << "He's locating on " << str + 1 << " string\n";
    for (int i = 0; i < n; i++)
    {
        int temp = a[str][i];
        a[str][i] = a[0][i];
        a[0][i] = temp;
    }
    return a;
}
void vyvod_resultata(vector < vector <int> > a) {
    for (int i = 0; i < n; i++) // Öèêë, êîòîðûé èä¸ò ïî ñòðîêàì
    {
        for (int j = 0; j < m; j++) // Öèêë, êîòîðûé èä¸ò ïî ýëåìåíòàì
            cout << a[i][j] << ' '; // Âûâîä ýëåìåíòîâ i ñòðîêè âåêòîðà
        cout << endl;
    }
}
int main() {
   
    cout << "Enter a count of string and row\n";// Ñîçäàíèå ïåðåìåííûõ îòâå÷àþùèõ çà ðàçìåð âåêòîðà
    cin >> n >> m;  // Ââîä ðàçìåðîâ âåêòîðà
    vyvod_resultata(raschet(vvod_dannyx(n, m)));
    return 0;
}