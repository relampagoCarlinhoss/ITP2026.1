#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int caso = 1;
    string cartas[52], c27[27], c25[25];
    cin >> casos;

    while(casos--){

    for(int i = 0; i < 52; i++){
        cin >> cartas[i]; 
    }

    for(int i = 0; i < 27; i++){
        c27[i] = cartas[i];
    }


    for(int i = 0; i < 25; i++){
        c25[i] = cartas[i+27];
    }
    
    int pontoT = 26;
    int y = 0;
    for(int i = 0; i < 3; i++){
        string topo27 = c27[pontoT];
        int x;
        if(topo27[0] >= '2' && topo27[0] <= '9'){
            x = topo27[0] - '0';}
        else{
            x = 10;
        }
        y += x;
        pontoT -= 11 - x;
    }
    
    int k = 0;
    string res[52];

    for(int i = 0; i <= pontoT; i++){
            res[k++] = c27[i];
        }

    for(int i = 0; i < 25; i++){
            res[k++] = c25[i];
        }
    cout << "Case " << caso << ": " << res[y-1] << "\n";
    caso++;
}

return 0;
}

//SBG
