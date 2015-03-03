#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int stevecMesecev = 0;
    string vrstica;
    array<vector<int>, 12> vektor;
    int letnaBilanca = 0;

    while(getline(cin, vrstica))
    {   
        if (!vrstica.empty()) {
            vektor[stevecMesecev].insert(vektor[stevecMesecev].end(), stoi(vrstica));
        } else { //Za trenutni mesec preverimo zadeve, nato povecamo mesec
            int vhodnaVsota = vektor[stevecMesecev].back();
            vektor[stevecMesecev].pop_back();
            int dejanskaVsota = 0;
            while (!vektor[stevecMesecev].empty())
            {
                dejanskaVsota += vektor[stevecMesecev].back();
                vektor[stevecMesecev].pop_back();
            }
            if (dejanskaVsota == vhodnaVsota) {
                cout << "OK" << endl;
            } else {
                cout << dejanskaVsota << endl;
            }
            letnaBilanca += dejanskaVsota;
            stevecMesecev++;
        }
    }
    
    cout << letnaBilanca;

    return 0;
}