// Problema C - Vacina em C++

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
int countRepeatingSubsequences(string s1, string s2, string s3, int T) {
    unordered_set<string> subsequences;
    int count = 0;
    for (int i = 0; i <= s1.length() - T; i++) {
        string subseq = s1.substr(i, T);
        subsequences.insert(subseq);
    }
    for (int i = 0; i <= s2.length() - T; i++) {
        string subseq = s2.substr(i, T);
        if (subsequences.find(subseq) != subsequences.end()) {
            if (s3.find(subseq) != string::npos) {
                count++;
                subsequences.erase(subseq);
            }
        }
    }
    return count;
}
int main() {
    string chikungunya, dengue, zica;
    int T;
    while (cin >> chikungunya >> dengue >> zica >> T) {
        int result = countRepeatingSubsequences(chikungunya, dengue, zica, T);
        cout << result << endl;
    }
    return 0;
}
