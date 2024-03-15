#include <iostream>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    cin.ignore();

    int posicoes[N];
    for (int i = 0; i < N; i++) {
        cin >> posicoes[i];
    }

    int deslizes[M];
    for (int i = 0; i < M; i++) {
        cin >> deslizes[i];
        deslizes[i] = deslizes[i] - 1;
    }

    int quantVezes[10];
    /*for (int i = 0; i < 10; i++) {
        quantVezes[i] = 0;
    }*///suggestion
    for (int &quantVez: quantVezes) {
        quantVez = 0;
    }

    for(int i = 1; i < M; i++){
        int anterior;
        if(i == 0){
            anterior = 1;
        }
        for (int j = anterior; j != deslizes[i]; (deslizes[i] < anterior) ? j-- : j++) {
            quantVezes[posicoes[j]]++;
        }
        anterior = deslizes[i];
    }

    /*for (int i = 0; i < M; i++) {
        cout << "For: " << i << endl;
        if (i == 0) {
            for (int j = deslizes[i] - 1; j != deslizes[i + 1] - 1 + 1; j++) {
                quantVezes[posicoes[j]]++;
                cout << "For1: " << posicoes[j] << endl;
                for (int i = 0; i < 10; ++i) {
                    cout << "quantVezes[" << i << "] = " << quantVezes[i] << endl;
                }
            }
        } else if (i != 3 && deslizes[i - 1] < deslizes[i + 1] + 1) {
            for (int j = deslizes[i]; j != deslizes[i + 1] - 1; j++) {
                quantVezes[posicoes[j]]++;
                cout << "For2: " << posicoes[j] << endl;
            }
        } else {
            for (int j = deslizes[i - 1]; j != deslizes[i - 1] - 1; j--) {
                quantVezes[posicoes[j]]++;
                cout << "For3: " << posicoes[j] << endl;
            }
        }
    }*/

    for (int i = 0; i < 10; ++i) {
        cout << "quantVezes[" << i << "] = " << quantVezes[i] << endl;
    }
    /*5 4
5 8 0 5 1
1 4 2 5
*/
    return 0;
}
