#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string br;
    string mo;
    int yr;
    int sp;

public:
    Car(string b, string m, int y) : br(b), mo(m), yr(y), sp(0) {}

    string getBrand() { return br; }
    string getModel() { return mo; }
    int getYear() { return yr; }
    int getSpeed() { return sp; }

    void setSpeed(int s) {
        if (s >= 0) {
            sp = s;
        }
    }

    void increaseSpeed(int amt) {
        sp += amt;
    }

    void decreaseSpeed(int amt) {
        sp -= amt;
        if (sp < 0) {
            sp = 0;
        }
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);

    cout << "Initial speed: " << myCar.getSpeed() << " km/h" << endl;

    myCar.increaseSpeed(50);
    cout << "Speed after acceleration: " << myCar.getSpeed() << " km/h" << endl;

    myCar.decreaseSpeed(20);
    cout << "Speed after deceleration: " << myCar.getSpeed() << " km/h" << endl;

    myCar.decreaseSpeed(40);
    cout << "Speed after deceleration: " << myCar.getSpeed() << " km/h" << endl;

    return 0;
}
