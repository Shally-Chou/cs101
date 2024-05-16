#include <iostream>

using namespace std;

void overloaded_func(int a) {
   cout << "Integer number = " << a << endl;
}

void overloaded_func(float b) {
   cout << "Float number = " << b << endl;
}

void overloaded_func(int a, float b) {
   cout << "Integer number = " << a << " and Float number = " << b << endl;
}

int main() {
   int a;
   float b;
   cin >> a >> b;
   overloaded_func(a);
   overloaded_func(b);
   overloaded_func(a, b);
   return 0;
}