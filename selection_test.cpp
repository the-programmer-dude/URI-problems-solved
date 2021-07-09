#include <iostream>

using namespace std;

void checkForConditions(int A, int B, int C, int D) {
    if(B > C && D > A){
        if(C + D > A + B){
            if(C > 0 && D > 0){
                if(A % 2 == 0){
                    cout << "Valores aceitos\n";
                    return;
                }
            }
        }
    }

    cout << "Valores nao aceitos\n";
}

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    checkForConditions(A, B, C, D);
    return 0;
}