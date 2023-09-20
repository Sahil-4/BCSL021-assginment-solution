#ifndef UTILS_H
#define UTILS_H

// Structure to hold information about a learner support center
struct LearnerSupportCentre {
    int _id;
    char code[10];
    char name[100];
    char address[200];
    char coordinator[100];
    char phone[20];
    char email[100];
    char timing[30];
    char programmes[40][40];
    int programmes_total;
    int staff_academic;
    int staff_non_academic;
    char status[20];
};

// Structure to hold information about a counseling schedule
struct CounsellingSchedule {
    char programme[4];
    int semester;
    char course_code[15];
    char councilor[26];
    char session_timing[10][24];
    int total_sessions;
    int session_duration;
    char venue[48];
};

// Structure to hold information about a counselor
struct Councillor {
    char programme[8];
    char name[26];
    char phone[12];
};

// Structure to hold information about a counselor
struct AssignmentSubmissionSchedule {
    char programme[12];
    char submission_date[15];
    char link[50];
    char note[100];
};


// Function to display general information
void displayGeneralInfo();

// Function to display activated programs
void displayActivatedPrograms();

// Function to display scheduling information
void displaySchedulingInfo();

// Function to display academic counselor details
void displayAcademicCouncillors();

// Function to display assignment submission schedules
void displayAssignmentSchedules();

#endif
