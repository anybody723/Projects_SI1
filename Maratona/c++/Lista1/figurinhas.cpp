#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> splitStringToInt(const string& input) {
    vector<int> result;
    istringstream ss(input);
    string token;

    while (getline(ss, token, ' ')) {
        result.push_back(stoi(token));
    }

    return result;
}

int main() {
    int N, C, M;
    cin >> N >> C >> M;

    cin.ignore(); // Ignora a quebra de linha anterior

    string carimbadasInput;
    getline(cin, carimbadasInput);
    vector<int> carimbadas = splitStringToInt(carimbadasInput);

    string compradasInput;
    getline(cin, compradasInput);
    vector<int> compradas = splitStringToInt(compradasInput);

    int faltam = C;
    for (const auto& figurinha : compradas) {
        auto it = find(carimbadas.begin(), carimbadas.end(), figurinha);
        if (it != carimbadas.end()) {
            carimbadas[0] = -1;
            faltam--;
        }
    }

    cout << faltam << endl;

    return 0;
}
