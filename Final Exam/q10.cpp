#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Bin2Decimal {
private:
    string num;
    
public:
    Bin2Decimal(string s) : num(s) {}
    
    int to_decimal() {
        return to_decimal(num);
    }
    
    int to_decimal(string binary) {
        int result = 0;
        for (int i = 0; i < 4; i++) {
            if (binary[i] == '1') {
                result += pow(2, 3 - i);
            }
        }
        return result;
    }
};

int main() {
    Bin2Decimal d("1000");
    cout << d.to_decimal() << endl;
    cout << d.to_decimal("1111") << endl;
    return 0;
}
