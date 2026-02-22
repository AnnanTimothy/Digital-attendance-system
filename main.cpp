#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* =========================
   WEEK 1 – STUDENT
   ========================= */

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

    cout << "\nRegistered Students:\n";

    while (getline(file, name, ',') && getline(file, index)) {
        cout << name << " - " << index << endl;
    }

    file.close();
}

/* =========================
   WEEK 2 – SESSION
   ========================= */

void createSession() {
    string courseCode, date;

    cout << "Enter course code: ";
    cin >> courseCode;

    cout << "Enter date (YYYY_MM_DD): ";
    cin >> date;

    string filename = "session_" + courseCode + "_" + date + ".txt";

    ofstream file(filename.c_str());

    file << "Attendance List\n";
    file.close();

    cout << "Session created successfully!" << endl;
}

/* =========================
   WEEK 3 – ATTENDANCE
   ========================= */

void markAttendance() {
    string courseCode, date;
    string index;
    char status;

    cout << "Enter course code: ";
    cin >> courseCode;

    cout << "Enter date (YYYY_MM_DD): ";
    cin >> date;

    string filename = "session_" + courseCode + "_" + date + ".txt";

    ofstream file(filename.c_str(), ios::app);

    if (!file) {
        cout << "Session not found. Create session first.\n";
        return;
    }

    cout << "Enter student index: ";
    cin >> index;

    cout << "Present or Absent? (P/A): ";
    cin >> status;

    file << index << " - " << status << endl;
    file.close();

    cout << "Attendance marked successfully!" << endl;
}

/* =========================
   MAIN MENU
   ========================= */

int main() {

    int choice;

    do {
        cout << "\n===== WEEK 3 SYSTEM =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Create Session\n";
        cout << "4. Mark Attendance\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch(choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: createSession(); break;
            case 4: markAttendance(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while(choice != 5);

    return 0;
}
