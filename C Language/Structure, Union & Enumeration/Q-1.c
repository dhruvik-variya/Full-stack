#include <stdio.h>

struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {
    
    struct Student students[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("\n\n\tEnter details for student %d:\n", i + 1);
        
        printf("\n\nID: ");
        scanf("%d", &students[i].stu_id);
        printf("Name: ");
        scanf("%s", students[i].stu_name);
        printf("Age: ");
        scanf("%d", &students[i].stu_age);
        printf("Course: ");
        scanf("%s", students[i].stu_course);
        fflush(stdin);
        printf("City: ");
        scanf("%s", students[i].stu_city);
        printf("Standard: ");
        scanf("%d", &students[i].stu_standard);
        printf("School: ");
        scanf("%s", students[i].stu_school);
        printf("\n");
    }

    printf("-----------------------------------------------------------------\n");
    printf("| %s | %s | %s | %s | %s | %s | %s |\n", "ID", "Name", "Age", "Course", "City", "Standard", "School");
    printf("-----------------------------------------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("| %d | %s | %d | %s | %-s | %d | %s |\n", students[i].stu_id, students[i].stu_name, students[i].stu_age,
               students[i].stu_course, students[i].stu_city, students[i].stu_standard, students[i].stu_school);
    }
    printf("-----------------------------------------------------------------\n");

    return 0;
}


