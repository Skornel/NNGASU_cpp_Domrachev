#include <iostream>
#include <vector>

using namespace std;
int n, m;
int maximum = 0;
int minimum = 100;
//int str = -1; //Ïåðåìåííàÿ äëÿ çàïîìèíàíèÿ ïîçèöèè ñòðîêè
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
void raschet(vector < vector <int> > a) {
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
}
void vyvod_resultata(int max, int min) {
    cout << "Max is " << max << " Min is " << min << " difference is " << max - min;
}
int main() {

    cout << "Enter a count of string and row\n";// Ñîçäàíèå ïåðåìåííûõ îòâå÷àþùèõ çà ðàçìåð âåêòîðà
    cin >> n >> m;  // Ââîä ðàçìåðîâ âåêòîðà
    raschet(vvod_dannyx(n, m));
    vyvod_resultata(maximum, minimum);
    return 0;
}