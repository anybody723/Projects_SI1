#include <iostream>
#include <vector>

using namespace std;

int main() {
    int quantPredios;
    cin >> quantPredios;
    if(quantPredios < 2){
        return 0;
    }
    /*cout << "quantPredios: " << quantPredios << endl;*/

    vector<int> vetAndares(quantPredios);
    int maiorDist = 0;

    for(int i = 0; i < quantPredios; ++i) {
        cin >> vetAndares[i];
    }
    for(int i = 0; i < quantPredios; ++i) {
        /*cout << i + 1 << "a rodada!" << endl;*/
        for(int j = i; j < quantPredios; ++j) {
            int dist = vetAndares[i] + j - i + vetAndares[j];
            /*cout << "a: " << vetAndares[i] << endl;
            cout << "b: " << j - i << endl;
            cout << "c: " << vetAndares[j] << endl;
            cout << "dist: " << dist << endl;
            cout << "maiorDist: " << dist << endl;*/
            if(dist > maiorDist){
                maiorDist = dist;
            }
            /*cout << "maiorDist: " << dist << endl;*/
        }
    }

    cout << maiorDist << endl;

    return 0;
}