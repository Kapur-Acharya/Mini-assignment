#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    // Ask user for name and age
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // Open the file student.txt in write mode
    ofstream file("student.txt");

    if (file.is_open())
    {
        file << "Name: " << name << endl;
        file << "Age: " << age << endl;
        file.close();
        cout << "Information saved in student.txt" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
