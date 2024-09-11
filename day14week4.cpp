#include <iostream>
using namespace std;

class Car {
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string bName, string mdl, string eng, int seats) {
        brandName = bName;
        model = mdl;
        engine = eng;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }

    void displayDimensions() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", "V6", 5);
    cout << "Car Information:" << endl;
    car1.displayInfo();

    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;
    cout << "\nRectangle 1 Dimensions: ";
    rect1.displayDimensions();

    cout << "Rectangle 2 (Copied) Dimensions: ";
    rect2.displayDimensions();

    return 0;
}
