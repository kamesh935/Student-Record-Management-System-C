# Student Record Management System (C)

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

* **Programming Language:** C
* **Data Structure:** Singly Linked List
* **File Handling:** Binary File (`.dat`)
* **Memory Management:** Dynamic Memory Allocation
* **Compiler:** GCC

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
├── student.dat
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

The program automatically assigns a unique Roll Number to each student.

The user enters:

* Student Name
* Percentage

The new student record is inserted at the end of the linked list.

---

### 2. Delete Student

Students can be deleted using:

* Roll Number
* Student Name

If multiple students have the same name, the matching records can be displayed and the user can select the required Roll Number.

---

### 3. Modify Student

Students can be searched using:

* Roll Number
* Name
* Percentage

The following details can be modified:

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
1001       Kamesh            89.50
1002       Rahul             91.20
------------------------------------------
```

---

### 5. Sort Students

The program supports sorting by:

* **Name** – Alphabetical Order
* **Percentage** – Highest to Lowest

Sorting is performed for displaying the records without permanently changing the original linked-list order.

---

### 6. Save Records

All student records can be stored in the binary file:

```text
student.dat
```

The `fwrite()` function is used to write records into the file.

---

### 7. Load Records

Previously saved records are automatically loaded when the program starts.

The `fread()` function is used to read records from:

```text
student.dat
```

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

## 🚀 Compilation

### Linux

Using Makefile:

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

### Windows / VS Code

Compile using GCC:

```bash
gcc main.c stud_add.c stud_del.c stud_mod.c stud_save.c stud_show.c stud_sort.c -o student.exe
```

Run:

```bash
student.exe
```

or:

```bash
.\student.exe
```

---

## 💾 File Handling

The application uses a binary file:

```text
student.dat
```

The following file-handling functions are used:

* `fopen()`
* `fread()`
* `fwrite()`
* `fclose()`

Binary file handling provides persistent storage, allowing student records to remain available even after the program is closed.

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
       End Program
```

---

## 💡 Concepts Used

This project demonstrates the following C programming concepts:

* C Programming
* Structures
* Pointers
* Singly Linked Lists
* Dynamic Memory Allocation
* `malloc()`
* File Handling
* Binary Files
* `fopen()`
* `fread()`
* `fwrite()`
* `fclose()`
* String Handling
* Header Files
* Functions
* Modular Programming
* Makefile

---

## 🔮 Future Enhancements

The project can be further improved by adding:

* 🔍 Search student records
* 📊 GPA / Grade calculation
* 🗑️ Delete all records
* ✅ Input validation
* 🔐 Password-protected login
* 📄 Export records to CSV
* 📈 Advanced sorting options
* 🎨 Colored terminal interface
* ⌨️ Arrow-key based menu

---

## 👨‍💻 Author

**Kamesh**

C Programming | Data Structures | Embedded Systems Enthusiast

---

## 📄 License

This project is created for **educational and learning purposes**.

You are free to use, modify, and improve this project for personal or academic purposes.

---

## ⭐ Support

If you found this project useful for learning **C Programming, Linked Lists, Pointers, or File Handling**, consider giving the repository a ⭐ on GitHub.
