#include <iostream>
#include <tuple>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(string fName, string lName, int a) : firstName(fName), lastName(lName), age(a) {}

    string getFullName() {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("Akanksh", "Rakesh", 25);

    cout << "Full Name: " << person.getFullName() << endl;
    auto [fName, lName, age] = person.getDetails(); 

    cout << "First Name: " << fName << endl;
    cout << "Last Name: " << lName << endl;
    cout << "Age: " << age << endl;

    return 0;
}
