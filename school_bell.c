
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include <unistd.h> // For sleep function

void setAlarm(int hour, int minute) {
    time_t currentTime;
    struct tm *localTime;

    // Infinite loop to check the time
    while (1) {
        // Get the current time
        time(&currentTime);
        localTime = localtime(&currentTime);

        // Check if current time matches the alarm time
        if (localTime->tm_hour == hour && localTime->tm_min == minute) {
            printf("Alarm! Started  %02d:%02d\n", hour, minute);
          Beep (465,5000);
          
        
           printf("first period completed");
           printf("\n______________________________\n");
            break; // Exit the loop after the alarm rings
        }

        // Sleep for 30 seconds before checking again
        //sleep(30);
    }
}

void setAlarm1(int hour1, int minute1) {
    time_t currentTime;
    struct tm *localTime;

    // Infinite loop to check the time
    while (1) {
        // Get the current time
        time(&currentTime);
        localTime = localtime(&currentTime);

        // Check if current time matches the alarm time
        if (localTime->tm_hour == hour1 && localTime->tm_min== minute1) {
            printf("Alarm! Started %02d:%02d\n", hour1, minute1);
             Beep (465,5000);
               printf("second period completed");
           printf("\n______________________________\n");
            break; // Exit the loop after the alarm rings
        }
    }
}
     void setAlarm2(int hour2, int minute2) {
	                                         
    time_t currentTime;
    struct tm *localTime;

    // Infinite loop to check the time
    while (1) {
        // Get the current time
        time(&currentTime);
        localTime = localtime(&currentTime);

        // Check if current time matches the alarm time
        if (localTime->tm_hour == hour2 && localTime->tm_min== minute2) {
            printf("Alarm! Started %02d:%02d\n", hour2, minute2);
               Beep (465,5000);
               printf("third period completed");
           printf("\n______________________________\n");
            break; // Exit the loop after the alarm rings
        }

        // Sleep for 30 seconds before checking again
       // sleep(30);
    }
}
int main() {
    int hour,minute,hour1,minute1,hour2,minute2;
    
printf("enter first period time (hh mm): ");
scanf("%d %d",&hour,&minute);

printf("enter second period time (hh mm): ");
scanf("%d %d",&hour1,&minute1);

printf("enter third period time (hh mm): ");
scanf("%d %d",&hour2,&minute2);
    

    
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || hour1 < 0 || hour1 > 23 
    || minute1 < 0 || minute1 > 59  || hour2 < 0 || hour2 > 23 || minute2 < 0 || minute2 > 59) {
        printf("Invalid time! Please enter hour (0-23) and minute (0-59).\n");
        return 1;
    }
    printf("\t SET ALARM LIST\n");
    printf("\t_____________________\n\n");
    printf("Alarm set for 1st period %02d:%02d\n", hour, minute);
    printf("Alarm set for 2nd period %02d:%02d\n", hour1, minute1);
    printf("Alarm set for 3rd period %02d:%02d\n", hour2, minute2);
    printf("\n______________________________________\n");
    setAlarm(hour, minute);
    setAlarm1(hour1, minute1);
    setAlarm2(hour2, minute2);

    return 0;
    
}
