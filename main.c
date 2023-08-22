#include <stdio.h>
#include "utils.h"

// To compile and run : gcc dataset.c utils.c main.c -o main; ./main;

/* Print the main menu */
void print_menu() {
    printf("1) General Information of the Learner Support Centre (LSC)\n2) Programmes activated in the study centre\n3) Scheduling of theory/practical sessions for BCA and MCA programme\n4) Academic Councillor's Details\n5) Schedules for Assignment submissions for various programmes\n6) Quit\n\nEnter your choice: ");
}

// entry point 
int main() {
    int choice;

    do {
        print_menu();
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayGeneralInfo();
            break;
        case 2:
            displayActivatedPrograms();
            break;
        case 3:
            displaySchedulingInfo();
            break;
        case 4:
            displayAcademicCouncillors();
            break;
        case 5:
            displayAssignmentSchedules();
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Please select a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
