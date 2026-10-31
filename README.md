# Student Record Management System

## Project Description

This is a menu-driven Student Record Management System C program using a singly linked list. It manages student records using dynamic memory allocation and provides operations such as adding, deleting, displaying, modifying, saving, sorting, deleting all records, and reversing the linked list.

## Objective

The objective of this project is to develop a menu-driven Student Record Management System in C using a singly linked list, dynamic memory allocation, modular programming, searching, sorting, and file handling.

Each student record contains:
- Roll number
- Name
- Percentage
- Link to the next student record

The roll number uniquely identifies each student record.

## Features

The system provides the following operations:

- **Add** — Add a new student record with an automatically assigned smallest unused positive roll number.
- **Delete** — Delete a student record by roll number or name.
- **Show** — Display all student records in tabular form.
- **Modify** — Modify a record by roll number, name, or percentage.
- **Save** — Save the complete student list to `student.dat`.
- **Load** — Restore previously saved records when the program starts.
- **Sort** — Sort records alphabetically by name or by percentage in descending order.
- **Delete All** — Delete all records and release their allocated memory.
- **Reverse** — Reverse the actual singly linked list by changing its links.
- **Exit** — Save and exit or exit without saving.

## Technologies and Concepts Used

### Programming Language
- **C** — Used to implement the complete Student Record Management System.

### Data Structure
- **Singly Linked List** — Used to store and manage student records dynamically.

### Memory Management
- **Dynamic Memory Allocation** — Each new student record is created dynamically using `malloc()`.
- **Memory Deallocation** — `free()` is used when individual records or all records are deleted and before program termination.

### Pointers
- Pointers are used to connect the nodes of the singly linked list.
- Double pointers (`SLL **`) are used in operations that need to modify the head pointer, such as adding, deleting all records, and reversing the list.

### File Handling
- File operations are used to save and restore student records using the file `student.dat`.

### Searching
- Student records can be searched using roll number, name, or percentage depending on the operation.

### Sorting
- Records can be sorted alphabetically by name or by percentage in descending order.

### Modular Programming
- The project is divided into separate `.c` files, with `student.h` containing the structure definition and function declarations.

## Project Structure
The project is divided into multiple source files according to the functionality.

Student-Record-Management-System
│
├── student.h -> Contains the student structure definition and function declarations used across the project.
├── stud_main.c -> Contains the main function, menu, program flow, and exit handling.
├── stud_add.c -> Contains the function for adding a new student record.
├── stud_del.c ->  Contains functions for deleting one student record or deleting all records.
├── stud_show.c ->  Contains the function for displaying all student records.
├── stud_mod.c ->  Contains functions for modifying student records.
├── stud_save.c ->  Contains functions for saving records to and loading records from student.dat.
├── stud_sort.c ->  Contains functions for sorting student records by name or percentage.
└── stud_reverse.c -> Contains the function for reversing the singly linked list.


## Module-wise and Function-wise Explanation

### 1. student.h

The `student.h` header file contains the common structure definition and function declarations used by all modules of the project.

#### Student Structure
typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
} SLL;

The structure contains:

| Member | Description |

| rollno | Stores the unique roll number of the student. |
| name[50] | Stores the student's name. |
| percentage | Stores the student's percentage. |
| next | Pointer to the next node in the singly linked list. |

SLL is used as a short name for "struct student".

#### Function Declarations

The header file declares the functions implemented in the different modules.

| Function | Purpose |
| addbegin() | Adds a new student record to the linked list. |
| deletenode() | Deletes a selected student record by roll number or name. |
| deleteall() | Deletes all student records and releases allocated memory. |
| printnode() | Displays all student records. |
| modifyroll() | Modifies a record selected using its roll number. |
| modifyname() | Modifies a record selected using its name. |
| modifypers() | Modifies a record selected using its percentage. |
| modify() | Provides the modification menu and calls the required modification function. |
| savefile() | Saves the complete linked list into `student.dat`. |
| loadfile() | Loads previously saved records from `student.dat`. |
| sortname() | Sorts records alphabetically by name. |
| sortpercentage() | Sorts records by percentage in descending order. |
| sort() | Provides the sorting menu and calls the selected sorting function. |
| reverse() | Reverses the linked list by changing node links. |

The header file allows all source files to share the same structure definition and function declarations.

### stud_main.c

Contains the main program flow and menu handling.

- main() — Displays the menu and calls the required operation based on the user's choice.
- exitprogram() — Handles save-and-exit or exit-without-saving.

### stud_add.c

Contains the function for adding a new student record.

- addbegin() — Dynamically creates a new node, assigns the smallest unused roll number, accepts student details, and adds the node to the list.

### stud_del.c

Handles deletion of student records.

- deletenode() — Deletes a student by roll number or name. If multiple students have the same name, their details are displayed and the required record is selected using the roll number.
- deleteall() — Deletes all nodes and releases the allocated memory.

### stud_show.c

Handles displaying student records.

- printnode() — Traverses the linked list and displays all student details in tabular form.

### stud_mod.c

Handles modification of existing student records.

- modify() — Provides the modification options.
- modifyroll() — Modifies a record using its roll number.
- modifyname() — Finds records by name and modifies the selected record.
- modifypers() — Finds records by percentage and modifies the selected record.

### stud_save.c

Handles file operations for storing and restoring student records.

- `savefile()` — Saves all student records into `student.dat`.
- `loadfile()` — Loads previously saved records from `student.dat` when the program starts.

### stud_sort.c

Handles sorting of student records.

- sort() — Provides the sorting options.
- sortname() — Sorts the records alphabetically by name.
- sortpercentage() — Sorts the records by percentage in descending order.

### stud_reverse.c

Handles reversal of the singly linked list.

- reverse() — Reverses the actual linked-list links using pointers without creating another set of nodes.


## Compilation and Execution

### Compile

Compiled all source files together using:

    gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c stud_reverse.c -o student

### Run

    ./student

The executable is created with the name student.

The program automatically loads previously saved records from student.dat if the file is available.

Records can be saved during program execution using the Save option or while exiting using Save and Exit.
