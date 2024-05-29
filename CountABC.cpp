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
        getline(cin, message); // Get each word in the message

    
        int freq[26] = {0};

        for (char ch : message) {
            if (ch != ' ') {
                freq[ch - 'A']++; // Increment the frequency of the character
            }
        }

        int maxFreq = *max_element(freq, freq + 26); // Get the maximum frequency of a character

        results.push_back(maxFreq);
    }

    for (int result : results) {
        cout << result << endl; // Output the result
    }

    return 0;
}
