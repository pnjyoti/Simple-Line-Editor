#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

char document[MAX_LINES][MAX_LENGTH];
int lineCount = 0;

void insertLine();
void deleteLine();
void displayDocument();

int main()
{
    insertLine();
    insertLine();
    insertLine();

    printf("\nBefore deletion:\n");
    displayDocument();

    deleteLine();

    printf("\nAfter deletion:\n");
    displayDocument();

    return 0;
}

void insertLine()
{
    int position;

    if (lineCount == MAX_LINES)
    {
        printf("Document is full.\n");
        return;
    }

    printf("Enter line number: ");
    scanf("%d", &position);

    if (position < 1 || position > lineCount + 1)
    {
        printf("Invalid line number.\n");
        return;
    }

    getchar();

    for (int i = lineCount; i >= position; i--)
    {
        strcpy(document[i], document[i - 1]);
    }

    printf("Enter text: ");
    fgets(document[position - 1], MAX_LENGTH, stdin);

    document[position - 1][strcspn(document[position - 1], "\n")] = '\0';

    lineCount++;

    printf("Line inserted successfully.\n");
}

void deleteLine()
{
    int position;

    if (lineCount == 0)
    {
        printf("Document is empty.\n");
        return;
    }

    printf("Enter line number to delete: ");
    scanf("%d", &position);

    if (position < 1 || position > lineCount)
    {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = position - 1; i < lineCount - 1; i++)
    {
        strcpy(document[i], document[i + 1]);
    }

    lineCount--;

    printf("Line deleted successfully.\n");
}

void displayDocument()
{
    if (lineCount == 0)
    {
        printf("Document is empty.\n");
        return;
    }

    printf("\n--- Document ---\n");

    for (int i = 0; i < lineCount; i++)
    {
        printf("%d. %s\n", i + 1, document[i]);
    }
}