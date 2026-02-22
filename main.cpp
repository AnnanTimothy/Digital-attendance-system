#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerStudent() {
    ofstream file("students.txt", ios::app);

    string name, index;

    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter index number: ";
    getline(cin, index);

    file << name << "," << index << endl;
    file.close();

    cout << "Student registered successfully!" << endl;
}

void viewStudents() {
    ifstream file("students.txt");
    string name, index;

    cout << "\n--- Registered Students ---" << endl;

    while (getline(file, name, ',') && getline(file, index)) {
        cout << "Name: " << name << " | Index: " << index << endl;
    }

    file.close();
}

void searchStudent() {
    ifstream file("students.txt");
    string name, index, searchIndex;
    bool found = false;

    cout << "Enter index number: ";
    cin >> searchIndex;

    while (getline(file, name, ',') && getline(file, index)) {
        if (index == searchIndex) {
            cout << "Student Found: " << name << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student not found." << endl;

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n===== WEEK 1 SYSTEM =====" << endl;
        cout << "1. Register Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
        }

    } while(choice != 4);

    return 0;
}
