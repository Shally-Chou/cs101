#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class myString {
    private:
        string m_str;
    public:
        myString(string s) {
            m_str = s;
        }
};

class ReadClass {
    private:
        int Count = 0;
        string name[100];
    public:
        void showClass() {
            ifstream in;
            string line;
            in.open("main.cpp");

            while (getline(in, line)) {
                if (line.find("class") == 0){
                    name[Count++] = line;
                }
            }
            in.close();
            
            if (Count) {
                cout << Count << " class" << " in main.cpp" << endl;
                for (int i=0; i<Count; i++) {
                    stringstream str(name[i]);
                    for (int j=0; j<Count; j++) {
                        getline(str, line, ' ');
                        cout << line << " ";
                    }
                    cout << endl;
                }
            }
        }
};

int main() {
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
