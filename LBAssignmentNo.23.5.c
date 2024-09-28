//Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A, B, C, D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.

#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A')
    {
        printf("Exam is at 7 AM\n");
    }
    else if (chDiv == 'B')
    {
        printf("Exam is at 8.30 AM\n");
    }
    else if (chDiv == 'C')
    {
        printf("Exam is at 9.20 AM\n");
    }
    else if (chDiv == 'D')
    {
        printf("Exam is at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division entered\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
