#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>

using namespace std;

bool isDecimal(float n){
    bool result = (n - floor(n)) != 0;
    
    if (result) 
        return true;
    else 
        return false;
}

int main(){
    float numValue;
    vector<int> notes = {100, 50, 20, 10, 5, 2};
    vector<float> coins = {1, 0.5, 0.25, 0.10, 0.05, 0.01};

    cin >> numValue;

    cout << "NOTAS:\n";
    for(int i = 0; i<notes.size(); i++){
        float possibleValue = floor(numValue / notes[i]);

        cout << possibleValue << " nota(s) de R$ " << notes[i] << ".00\n";

        if(possibleValue == 0) continue;
        numValue -= possibleValue * notes[i];
    }

    cout << "MOEDAS:\n";
    for(int i = 0; i<coins.size(); i++){
        float possibleValue = floor(numValue / coins[i]);

        if(numValue <= 0) possibleValue = 0;

        if(coins[i] == float(0.01) && numValue >= 0) possibleValue = numValue * 100;
        else if(coins[i] == float(0.05) && !isDecimal(numValue / coins[i])) possibleValue = numValue * 100;

        cout << fixed << setprecision(0) << possibleValue << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] << "\n";

        if(possibleValue == 0) continue;
        numValue -= possibleValue * coins[i];
    }

    return 0;
}