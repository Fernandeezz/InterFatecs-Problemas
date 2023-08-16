// Problema E - Prefeito Tecnológico

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Improvement {
    int cost;
    int votes;
};
bool compareImprovements(const Improvement& a, const Improvement& b) {
    if (a.votes == b.votes) {
        return a.cost < b.cost;
    }
    return a.votes > b.votes;
}
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int T, L;
        cin >> T >> L;
        vector<Improvement> improvements(L);
        for (int j = 0; j < L; j++) {
            cin >> improvements[j].cost >> improvements[j].votes;
        }
        sort(improvements.begin(), improvements.end(), compareImprovements);
        int totalVotes = 0;
        int totalCost = 0;
        for (int j = 0; j < L; j++) {
            if (totalCost + improvements[j].cost <= T) {
                totalVotes += improvements[j].votes;
                totalCost += improvements[j].cost;
            } else {
                break;
            }
        }
        if (totalVotes == 0) {
            cout << "NO FUNDS" << endl;
        } else {
            cout << totalVotes << " " << T - totalCost << endl;
        }
    }
    return 0;
}
