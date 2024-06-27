#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Decoder {
private:
    string encoded;
    
public:
    Decoder(string s) : encoded(s) {}
    
    string get_decode() {
        string result;
        vector<pair<char, int>> letterCounts;
        
        for (char c : encoded) {
            if (isalpha(c)) {
                if (letterCounts.empty() || letterCounts.back().first != c) {
                    letterCounts.push_back(make_pair(c, 1));
                } else {
                    letterCounts.back().second++;
                }
            }
        }
        
        int numberIndex = 0;
        for (const auto& letterCount : letterCounts) {
            char letter = letterCount.first;
            int count = letterCount.second;
            int multiplier = 1;
            while (numberIndex < encoded.length() && !isdigit(encoded[numberIndex])) {
                numberIndex++;
            }
            if (numberIndex < encoded.length()) {
                multiplier = encoded[numberIndex] - '0';
                numberIndex++;
            }
            result.append(count * multiplier, letter);
        }
        
        return result;
    }
};

int main() {
    Decoder d("A3BB2CCC2");
    cout << d.get_decode();
    return 0;
}
