# Simple Line Editor in C

-- Team Members

Member 1:Jyothi N
Member 2:K Deepthi
Member 3:Karishma N


- Features

This project is a simple command-line line editor developed in C.

The editor supports:

1. Insert a line
2. Delete a line
3. Display the document
4. Save the document to a text file
5. Load the document from a text file
6. Help menu
7. Exit

- Data Structure

The document is stored using a '2D character array'.

char document[MAX_LINES][MAX_LENGTH];

This allows the editor to store multiple lines of text in memory.

- Why an array?

An array is simple to implement and provides direct access to a line using its index. For a small document with a fixed maximum number of lines, it is easy to understand and suitable for this project.

- How to Compile

Open the terminal in the project folder and run:


gcc main.c -o main


- How to Run

On Windows:
.\main.exe
*Commands

The editor displays a menu:


1. Insert Line
2. Delete Line
3. Display Document
4. Save File
5. Load File
6. Help
7. Exit


Enter the corresponding number to perform an operation.

-File Storage

The document is saved in:document.txt

The saved file can be loaded again using the 'Load File' option.
