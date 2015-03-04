/*
 * Putka Naloge - Kronogram
 *
 *
 *       ___           ___           ___                 
 *      /\__\         /\__\         /\  \                
 *     /:/ _/_       /:/ _/_       /::\  \       ___     
 *    /:/ /\__\     /:/ /\__\     /:/\:\__\     /\__\    
 *   /:/ /:/  /    /:/ /:/ _/_   /:/ /:/  /    /:/__/    
 *  /:/_/:/  /    /:/_/:/ /\__\ /:/_/:/__/___ /::\  \    
 *  \:\/:/  /     \:\/:/ /:/  / \:\/:::::/  / \/\:\  \__ 
 *   \::/__/       \::/_/:/  /   \::/~~/~~~~   ~~\:\/\__\
 *    \:\  \        \:\/:/  /     \:\~~\          \::/  /
 *     \:\__\        \::/  /       \:\__\         /:/  / 
 *      \/__/         \/__/         \/__/         \/__/  
 * 
 *
 * 
 * Copyright (C) 2015 Jakob Murko
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string vrstica;

    //Nastavimo si mapiranje crk
    map<char,int> crke;
    map<char,int>::iterator iteratorCrke;
    crke['I'] = 1;
    crke['V'] = 5;
    crke['X'] = 10;
    crke['L'] = 50;
    crke['C'] = 100;
    crke['D'] = 500;
    crke['M'] = 1000;

    //Zavrzemo prvo vrstico
    getline(cin, vrstica);

    while(getline(cin, vrstica))
    {   
        int vsota = 0;
        if (!vrstica.empty()) {
            for (int i = 0; i < vrstica.size(); ++i) {
                iteratorCrke = crke.find(vrstica[i]);
                if (iteratorCrke != crke.end()) {
                    vsota += iteratorCrke->second;
                }
            }
            cout << vsota << endl;
        }
    }

    return 0;
}