Simple Line Editor - Help

Available Commands

1. Insert Line

Adds a new line at the specified line number.
Example:

Enter your choice: 1
Enter line number: 1
Enter text: Hello World
Line inserted successfully.

The existing lines are shifted down when a new line is inserted.

2. Delete Line

Deletes a line from the document using its line number.

Example:

Enter your choice: 2
Enter line number to delete: 1
Line deleted successfully.

The lines below the deleted line are shifted up.

3. Display Document

Displays all current lines with their line numbers.

Example:
Enter your choice: 3

--- Document ---
1. Hello World
2. This is line two

4. Save File

Saves the current document to document.txt.

Example:


Enter your choice: 4
Document saved successfully.


5. Load File

Loads the saved document from document.txt.

Example:


Enter your choice: 5
Document loaded successfully.

 6. Help

Displays the available commands and their purpose.

Example:

Enter your choice: 6

Commands:
1 - Insert a line
2 - Delete a line
3 - Display document
4 - Save document
5 - Load document
7 - Exit editor
 
 
 7. Exit

Closes the line editor.

Example:


Enter your choice: 7
Exiting editor...

## Invalid Input Handling

The editor checks invalid line numbers.

Examples:

-Trying to insert at an invalid line number.
-Trying to delete a line that does not exist.
-Trying to delete from an empty document.

The program displays an appropriate message instead of crashing.
