#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/// @brief function declarations
void menu(struct StudentRecord*);
void print_studentRec(struct StudentRecord*);
void add_record(struct StudentRecord*);
void show_records(struct StudentRecord*);

/// @brief A student record 
struct StudentRecord{
    int id;
    char* name;
    char avgGrade;
    int currentYear;
    struct StudentRecord* nextStudent;
};


/**
 * @brief Main Entry point for student record Program
 * 
 * @return int 
 */
int main()
{
    struct StudentRecord* records = (struct StudentRecord*)malloc(sizeof(struct StudentRecord));

    menu(records);
    free(records);

    return 0;
}

/**
 * @brief prints a single student record 
 * 
 * @param stu pointer to a student Record 
 */
void print_studentRec(struct StudentRecord *stu)
{
    printf("Name: %s; Id: %d; Year: %d; Average Grade: %c\n",  stu->name, stu->id, stu->currentYear, stu->avgGrade);
}

/**
 * @brief Show's all student records
 *
 */
void show_records(struct StudentRecord *list)
{
    printf("Record 1\n");
}

/**
 * @brief Add's a record if one does not already exist for student id. 
 * 
 */
void add_record(struct StudentRecord* record) {
    struct StudentRecord* tail = record;

    // Add new student to end of record
    while (tail->nextStudent != NULL)
       tail = tail->nextStudent; 

    struct StudentRecord* newRecord; 
    printf("Enter student name:\n");
    scanf("%s",newRecord->name);
    printf("Enter student id:\n");
    scanf("%d",&newRecord->id);

    /*if (exists(record, newRecord->id))
    {
        menu(record);
        return;
    }
    else 
    {*/
        printf("Enter Average grade:\n");
        scanf("%c",&newRecord->avgGrade);
        printf("Enter student year:\n");
        scanf("%d",&newRecord->currentYear);
    // }

    newRecord->nextStudent = NULL;
    tail->nextStudent = newRecord; 
    printf("New Student Record Added!\n");
}

/**
 * @brief Displays a Menu for managing Student Records 
 * 
 */
void menu(struct StudentRecord* record) {
    int choice;
    
    printf("%15s %s"," ","Welcome to RU Record Management System\n\n");
    printf("%8s %s", " ", "Press\n");
    printf("%8s %s", " ", "1 to create a new Student Record\n");
    printf("%8s %s", " ", "2 to view all records\n");
    printf("%8s %s", " ", "3 to Exit\n\n");

    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        add_record(record);
        break;
        case 2:
        show_records(record);
        break;
        case 3:
        exit(0);
    }
}
