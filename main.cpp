#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    map<string,int> paises_m;

    cin >> n;

    string pais,nombre,paises[n];

    for (int i=0;i<n;i++){
        cin>> pais;
        getline(cin,nombre);
        paises_m[pais]=0;
        paises[i]=pais;
    }

    for (int i=0;i<n;i++)
    {
        paises_m[paises[i]]++;
    }

    for(std::map<string,int>::iterator it = paises_m.begin();it != paises_m.end();it++)
    {

        cout << it->first << " " << it->second<< endl;
    }
    return 0;
}
