#include <iostream>
using namespace std;

class student {
int rn;
char n[50];
float avg;
public:
student() {
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the roll no.: ";
    cin >> rn;
    cout << "Enter the average: ";
    cin >> avg;
}

void display() {
    cout << endl;
    cout << "Name: " << n << endl;
    cout << "Roll No: " << rn << endl;
    cout << "Average: " << avg << "%" << endl;
}
};

int main() {
student s1;
s1.display();
return 0;
}