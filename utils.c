#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "utils.h"


// dataset
extern struct LearnerSupportCentre lsc_dataset[];
extern struct CounsellingSchedule councelling_schedule_BCA_dataset[];
extern struct CounsellingSchedule councelling_schedule_MCA_dataset[];
extern struct Councillor councillors_dataset[];
extern struct AssignmentSubmissionSchedule assignment_submission_schedule[];

// constants
extern int SIZE_OF_LSC_DATASET;
extern int SIZE_OF_COUNSELLING_SCHEDULE_BCA_DATASET;
extern int SIZE_OF_COUNSELLING_SCHEDULE_MCA_DATASET;
extern int SIZE_OF_COUNSELLORS_DATASET;
extern int SIZE_OF_ASSIGNMENT_SUBMISSION_SCHEDULE_DATASET;


// functions

/* Show details of selected LSC */
void printLSCDetails(struct LearnerSupportCentre lsc) {
    printf("========================================\n");
    printf("Id : %d\nLSC Code : %s\nLSC Name : %s\nLSC Address : %s\nEmail : %s\nPhone : %s\nCoordinator Name : %s\nTiming : %s\nTotal Academic Staff : %d\nTotal Non-Academic Staff : %d\nStatus : %s\n", lsc._id, lsc.code, lsc.name, lsc.address, lsc.email, lsc.phone, lsc.coordinator, lsc.timing, lsc.staff_academic, lsc.staff_non_academic, lsc.status);
    printf("Programme(s) Activated in this LSC : \n");
    for (int i = 0; i < lsc.programmes_total; i++) {
        printf("%s", lsc.programmes[i]);
        if (i != lsc.programmes_total - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("========================================\n\n");
}

/* Function to display general information */
void displayGeneralInfo() {
    char scCode[10] = "\0";
    printf("Enter LSC Code\n");
    printf("You can press * to see all LSCs information\n");
    scanf("%s", scCode);

    if (!strcmp(scCode, "*")) {
        for (int i = 0; i < SIZE_OF_LSC_DATASET; i++) {
            printLSCDetails(lsc_dataset[i]);
        }
    } else {
        for (int i = 0; i < SIZE_OF_LSC_DATASET; i++) {
            if (!strcmp(lsc_dataset[i].code, scCode)) {
                printLSCDetails(lsc_dataset[i]);
                return;
            }
        }
        printf("No LSC found by this code.\n\n");
    }
}

/* Function to display activated programs */
void displayActivatedPrograms() {
    char scCode[10] = "\0";
    printf("Enter LSC Code : ");
    scanf("%s", scCode);

    for (int i = 0; i < SIZE_OF_LSC_DATASET; i++) {
        if (!strcmp(lsc_dataset[i].code, scCode)) {
            printf("Programme(s) available at %s : \n", lsc_dataset[i].name);
            for (int j = 0; j < lsc_dataset[i].programmes_total; j++) {
                printf("%s", lsc_dataset[i].programmes[j]);
                if (j != lsc_dataset[i].programmes_total - 1) {
                    printf(", ");
                }
            }
            printf("\n\n");
            return;
        }
    }
    printf("No LSC found by this code.\n\n");
}

/* Show details of Counselling Schedule */
void printCounsellingShedule(struct CounsellingSchedule schedule) {
    printf("========================================\n");
    printf("Programme : %s\nSemester : %d\nCourse Code : %s\n\n", schedule.programme, schedule.semester, schedule.course_code);
    printf("Session Timing and Venue : \n");
    for (int i = 0; i < schedule.total_sessions; i++) {
        printf("Session Timing : %s\nCounseller : %s\nVenue : %s\n\n", schedule.session_timing[i], schedule.councillor, schedule.venue);
    }
    printf("========================================\n\n");
}

/* Function to display scheduling information */
void displaySchedulingInfo() {
    printf("Councelling schedule for BCA and MCA of RC Delhi 3\n");
    for (int i = 0; i < SIZE_OF_COUNSELLING_SCHEDULE_BCA_DATASET; i++) {
        printCounsellingShedule(councelling_schedule_BCA_dataset[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE_OF_COUNSELLING_SCHEDULE_MCA_DATASET; i++) {
        printCounsellingShedule(councelling_schedule_MCA_dataset[i]);
    }
    printf("\n");
}

/* print details of councillor */
void printCouncellors(struct Councillor councillor) {
    printf("========================================\n");
    printf("Councillor Name : %s\nProgramme : %s\nContace : %s\n", councillor.name, councillor.programme, councillor.phone);
    printf("========================================\n\n");
}

/* Function to display academic counselor details */
void displayAcademicCouncillors() {
    for (int i = 0; i < SIZE_OF_COUNSELLORS_DATASET; i++) {
        printCouncellors(councillors_dataset[i]);
    }
    printf("\n");
}

void printAssignmentSubmissionInfo(struct AssignmentSubmissionSchedule schedule) {
    printf("===========================================================\n");
    printf("Programme Name : %s\nLast data of Assignment Submission : %s\nSubmit Here : %s\nNote : %s\n", schedule.programme, schedule.submission_date, schedule.link, schedule.note);
    printf("===========================================================\n\n");
}

/* Function to display assignment submission schedules */
void displayAssignmentSchedules() {
    for (int i = 0; i < SIZE_OF_ASSIGNMENT_SUBMISSION_SCHEDULE_DATASET; i++) {
        printAssignmentSubmissionInfo(assignment_submission_schedule[i]);
    }
    printf("\n");
}
