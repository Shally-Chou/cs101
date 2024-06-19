#include <iostream>
#include <string>

using namespace std;

class Clock{
protected:
    int hour, min , sec ;
    string ampm;
public:
    Clock(int h, int m , int s, string ap){
        hour = h;
        min = m;
        sec = s;
        ampm = ap;
    }
    
    virtual void display(){
        cout << "Clock = " << hour << ":" << min << ":" << sec << " " << ampm << endl;
    }
};

class CGUClock : public Clock{
public:
    CGUClock(int h, int m, int s, string ap) : Clock(h, m, s, ap) {
        if (ap == "PM" && h != 12)
            hour += 12;
        else if (ap == "AM" && h == 12)
            hour = 0;
    }

    void display() {
        cout << "CGUlock = " << hour << "時:" << min << "分:" << sec << "秒" << endl;
    }
};

int main()
{
    Clock cc(10,25,43,"AM");
    CGUClock cguc(10,25,43,"PM");
    cc.display();
    cguc.display();
    return 0;
}
