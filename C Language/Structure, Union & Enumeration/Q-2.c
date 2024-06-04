#include <stdio.h>

struct Employee {
    int  emp_id;
    char emp_name[50];
    int  emp_age;
    char emp_role[50];
    char emp_city[50];
    int  emp_experience;
    char emp_company_name[50];
};

int main() {
    int num_employees;
    int i;
    
    printf("\n\n\tEnter the number of employees: ");
    scanf("%d", &num_employees);

    struct Employee employees[num_employees];
    
    for (i = 0; i < num_employees; i++) {
        printf("\n\tEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Age: ");
        scanf("%d", &employees[i].emp_age);
        printf("Role: ");
        scanf("%s", employees[i].emp_role);
        printf("City: ");
        scanf("%s", employees[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &employees[i].emp_experience);
        printf("Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    printf("\n-----------------------------------------------------------------------------\n");
    printf("| %s | %s | %s | %s | %s | %s | %s |\n", "ID", "Name", "Age", "Role", "City", "Experience", "Company Name");
    printf("-----------------------------------------------------------------------------\n");
    for (i = 0; i < num_employees; i++) {
        printf("| %d | %s | %d | %s | %s | %d | %s |\n", employees[i].emp_id, employees[i].emp_name, employees[i].emp_age,
               employees[i].emp_role, employees[i].emp_city, employees[i].emp_experience, employees[i].emp_company_name);
    }
    printf("-----------------------------------------------------------------------------\n");

    return 0;
}



