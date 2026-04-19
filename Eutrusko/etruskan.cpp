#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    long long tropa;
    long long res = 0;
    int cont1 = 0;
    int cont2 = 0;

    cin >> casos;

     int row[casos];

    while(cont1 < casos){
       std :: cin >> tropa;
        res= (-1 + sqrt(1 + 8*tropa))/2;
        row[cont2] = res;
        cont2++;
        cont1++;
    }
    for(int i = 0; i < casos; i++){
        cout << row[i]<< "\n";
    }
    
    return 0;
}
//SBG