#include <iostream>
#include <string>
using namespace std;

class I {
public:
    virtual void playSound() = 0;
    virtual void display() {
        cout << "This is an instrument." << endl;
    }
};

class P : public I {
public:
    void playSound() override {
        cout << "Playing a melodious piano tune." << endl;
    }

    void display() override {
        cout << "This is a Piano." << endl;
    }
};

class V : public I {
public:
    void playSound() override {
        cout << "Playing a classical violin tune." << endl;
    }

    void display() override {
        cout << "This is a Violin." << endl;
    }
};

int main() {
    I* inst[2];
    inst[0] = new P();
    inst[1] = new V();

    for (int i = 0; i < 2; i++) {
        inst[i]->display();
        inst[i]->playSound();
    }

    for (int i = 0; i < 2; i++) {
        delete inst[i];
    }

    return 0;
}
