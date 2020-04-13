#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
int n, m;
int maximum = 0;
int str = -1; 
vector <vector<int>> vvod_dannyx(int n, int m)
{
    vector < vector <int> > a(n, vector <int>(m));
    ifstream in("C:\\Courses\\Cpp\\input.txt");
    if (in.is_open()) {

    

    for (int i = 0; i < n; i++)     
        for (int j = 0; j < m; j++) 
        {
           in >> a[i][j]; 
        }
    }
    in.close();
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
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            cout << a[i][j] << ' '; 
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
    ofstream out;
    out.open("C:\\Courses\\Cpp\\output2.txt");
    if (out.is_open()){
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            out << a[i][j] << ' ';
        out << endl;
    }
    }
    out.close();
}
int main() {

    n = 4;
    m = 4;
    vyvod_resultata(raschet(vvod_dannyx(n, m)));
    return 0;
}