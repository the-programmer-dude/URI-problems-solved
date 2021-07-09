#include <bits/stdc++.h>

using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    double delta = pow(B, 2) - 4 * A * C;

    if(delta < 0){
        cout << "Impossivel calcular\n";
        return 0;
    }

    double root1 = (-B + sqrt(delta)) / (2 * A); 
    double root2 = (-B - sqrt(delta)) / (2 * A); 

    if(isnan(root1) || isnan(root2)){
        cout << "Impossivel calcular\n";
        return 0;   
    }

    cout << fixed << setprecision(5) << "R1 = " << root1 << "\n";
    cout << fixed << setprecision(5) << "R2 = " << root2 << "\n";

    return 0;
}