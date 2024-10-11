#include <iostream>
#include <string>
using namespace std;

class V {
protected:
    string m;
    int y;
    float f;

public:
    V(string mk, int yr, float fl) : m(mk), y(yr), f(fl) {}

    void refuel(float amt) {
        f += amt;
    }

    virtual void display() {
        cout << "Make: " << m << ", Year: " << y << ", Fuel: " << f << endl;
    }
};

class C : public V {
private:
    int d;

public:
    C(string mk, int yr, float fl, int dr) : V(mk, yr, fl), d(dr) {}

    void display() override {
        cout << "Make: " << m << ", Year: " << y << ", Fuel: " << f << ", Doors: " << d << endl;
    }

    void openDoors() {
        cout << "Doors are opened" << endl;
    }
};

class B : public V {
private:
    bool c;

public:
    B(string mk, int yr, float fl, bool cr) : V(mk, yr, fl), c(cr) {}

    void display() override {
        cout << "Make: " << m << ", Year: " << y << ", Fuel: " << f << ", Has carrier: " << (c ? "Yes" : "No") << endl;
    }

    void kickStart() {
        cout << "Bike kick-started" << endl;
    }
};

int main() {
    C car("Toyota", 2020, 10.5, 4);
    B bike("Yamaha", 2018, 5.0, true);

    car.refuel(5.0);
    bike.refuel(2.0);

    car.display();
    bike.display();

    car.openDoors();
    bike.kickStart();

    return 0;
}
