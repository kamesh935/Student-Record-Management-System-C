# 🎓 Student Record Management System (C)

## 📌 Project Overview

The **Student Record Management System** is a console-based application developed in **C** to manage student records efficiently. The project uses a **Singly Linked List** for dynamic memory management and **Binary File Handling** to permanently store student information.

The application allows users to add, delete, modify, display, sort, save, and load student records through a menu-driven interface.

---

## ✨ Features

* ➕ Add new student records
* 🗑️ Delete records using Roll Number or Name
* 📝 Modify student Name or Percentage
* 📋 Display all student records
* 🔄 Sort records by:

  * Student Name (Ascending)
  * Percentage (Descending)
* 💾 Save records to a binary file
* 📂 Automatically load records when the program starts
* 🔢 Automatically generates unique Roll Numbers starting from **1001**
* 📌 Dynamic memory allocation using linked lists

---

## 🛠 Technologies Used

* Programming Language: **C**
* Data Structure: **Singly Linked List**
* File Handling: **Binary File (.dat)**
* Compiler:

  * GCC (Linux)
  * MinGW GCC (Windows / VS Code)

---

## 📁 Project Structure

```text
Student_Record_Management_System/
│
├── main.c
├── student.h
├── stud_add.c
├── stud_del.c
├── stud_mod.c
├── stud_show.c
├── stud_sort.c
├── stud_save.c
├── Makefile
├── student.dat      (Generated automatically)
└── README.md
```

---

## 📚 Data Structure

```c
struct node
{
    int roll;
    char name[50];
    float percentage;
    struct node *next;
};
```

Each node stores:

* Roll Number
* Student Name
* Percentage
* Pointer to the next student

---

## ⚙️ Functionalities

### 1. Add Student

* Automatically assigns a unique Roll Number.
* Accepts:

  * Student Name
  * Percentage
* Inserts the record at the end of the linked list.

---

### 2. Delete Student

Delete using:

* Roll Number
* Student Name

If multiple students have the same name, the matching records are displayed, and the user selects the Roll Number to delete.

---

### 3. Modify Student

Search by:

* Roll Number
* Name
* Percentage

Modify:

* Student Name
* Student Percentage

---

### 4. Display Students

Displays all available student records in a formatted table.

Example:

```text
------------------------------------------
Roll No    Name              Percentage
------------------------------------------
1001       Madhan            89.50
1002       Rahul             91.20
------------------------------------------
```

---

### 5. Sort Students

Supports sorting by:

* Name (Alphabetical Order)
* Percentage (Highest to Lowest)

Sorting only affects the displayed output and does not change the linked list order.

---

### 6. Save Records

All records are stored in the binary file:

```text
student.dat
```

using `fwrite()`.

---

### 7. Load Records

When the application starts, previously saved records are automatically loaded from `student.dat` using `fread()`.

---

## ▶️ Menu

```text
=====================================
   STUDENT RECORD MANAGEMENT SYSTEM
=====================================

A/a : Add Student
D/d : Delete Student
S/s : Show Students
M/m : Modify Student
T/t : Sort Students
V/v : Save Records
E/e : Exit
```

---

# 🚀 Compilation

## Linux (Using Makefile)

Compile:

```bash
make
```

Run:

```bash
./student
```

Clean:

```bash
make clean
```

---

## Windows / VS Code (Without Makefile)

Compile:

```bash
gcc main.c stud_add.c stud_del.c stud_mod.c stud_save.c stud_show.c stud_sort.c -o student.exe
```

Run:

```bash
student.exe
```

or

```bash
.\student.exe
```

---

## 💾 File Handling

The application stores all records in:

```text
student.dat
```

Binary storage is used to provide:

* Faster read/write operations
* Compact storage
* Persistent data between executions

---

## 🔄 Program Flow

```text
Start
   │
   ▼
Load Existing Records
   │
   ▼
Display Main Menu
   │
   ▼
User Selects Operation
   │
   ├── Add
   ├── Delete
   ├── Modify
   ├── Show
   ├── Sort
   ├── Save
   └── Exit
            │
            ▼
     Save Before Exit (Optional)
            │
            ▼
          End
```

---

## 💡 Concepts Used

* C Programming
* Structures
* Singly Linked List
* Dynamic Memory Allocation (`malloc`)
* Pointers
* File Handling (`fopen`, `fread`, `fwrite`, `fclose`)
* String Handling
* Header Files
* Modular Programming
* Makefile (Linux)

---

## 🔮 Future Enhancements

* Search student records
* Update roll number
* Delete all records
* Sorting using linked list instead of an array
* GPA/Grade calculation
* Input validation
* Password-protected login
* Export records to CSV or Excel
* Menu using arrow keys
* Colored terminal interface

---

## 👨‍💻 Author

**Madhanraj B**



---

## 📄 License

This project is intended for educational and learning purposes. You are free to use and modify it for personal or academic use.

---

## ⭐ If you found this project useful

If this project helped you learn C programming, linked lists, or file handling, consider giving it a ⭐ on GitHub!
