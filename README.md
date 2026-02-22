Digital Attendance System

Author: Annan Timothy
Course: EEE 227 – Digital Systems
Year: 2026

🏫 Overview

This project is a Digital Attendance System that allows lecturers to:

Register students

View and search student records

Create lecture sessions

Mark student attendance

Update attendance

View attendance reports and summaries

The project is organized week by week as part of the course capstone.

📅 Week-by-Week Features
Week 1 – Student Management

Register Student: Enter student name and index number.

View Students: Display a list of all registered students.

Search Student: Find a student by index number.

Week 2 – Session Creation

Create Lecture Session:

Input course code, date, start time, and duration.

Creates a session file to record attendance for that lecture.

Week 3 – Attendance Management

Mark Attendance:

Record student attendance as Present, Absent, or Late.

Attendance is saved in the session file.

View Attendance:

Display the attendance list for a specific session.

Attendance Summary:

Count of Present, Absent, and Late students for a session.

Week 4 – Update Attendance

Update Attendance:

Modify the attendance status of a student in a session.

Improved Report Handling:

Attendance reports now show all students with their current status.

Uses temporary files (temp.txt) to update session files safely.

⚙️ How to Run

Open the project in Dev C++ or any C++ IDE.

Compile main.cpp.

Run the program.

Follow the menu to access Student Management, Session Creation, and Attendance Features.

📝 File Structure

main.cpp – Main program containing all weeks’ functionality.

students.txt – Stores registered student records.

session_<COURSECODE>_<DATE>.txt – Stores attendance for each session.
