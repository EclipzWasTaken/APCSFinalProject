#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore(); 

    vector<int> results;

    for (int i = 0; i < testCases; ++i) {
        string message;
        getline(cin, message);

    
        int freq[26] = {0};

        for (char ch : message) {
            if (ch != ' ') {
                freq[ch - 'A']++;
            }
        }

        int maxFreq = *max_element(freq, freq + 26);

        results.push_back(maxFreq);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
