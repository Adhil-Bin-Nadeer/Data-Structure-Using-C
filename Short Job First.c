#include<stdio.h>

//Creating array of structure 
struct Short_Job_First {
        int Process_Id;
        int Turn_Around_Time;
        int Burst_Time;
        int Waiting_Time;
        int Completion_Time;
};

// Main Function
int main() {
        int temp, sum = 0;
        float Total_Turn_Around_Time = 0, Total_Waiting_Time = 0;
        int processes;

        // Read the number of processes
        printf("\nEnter the no of processes  : \n");
        scanf("%d", & processes);

        //int Completion_Time[processes] , Waiting_Time[processes];

        //Struct Decalaration
        struct Short_Job_First sjf[processes];

        //Assigning the process value to array
        for (int i = 0; i < processes; i++) {
                sjf[i].Process_Id = i;
        }

        //Assigning the burst time into the array
        for (int i = 0; i < processes; i++) {
                printf("P%d : ", i);
                scanf("%d", & sjf[i].Burst_Time);
        }

        //Sorting the array using bubble sort
        for (int i = 0; i < processes - 1; i++) {
                for (int j = 0; j < processes - i - 1; j++) {
                        if (sjf[j + 1].Burst_Time < sjf[j].Burst_Time) {
                                temp = sjf[j + 1].Burst_Time;
                                sjf[j + 1].Burst_Time = sjf[j].Burst_Time;
                                sjf[j].Burst_Time = temp;

                                temp = sjf[j + 1].Process_Id;
                                sjf[j + 1].Process_Id = sjf[j].Process_Id;
                                sjf[j].Process_Id = temp;
                        }
                }
        }

        //Calculating the Completion time
        for (int i = 0; i < processes; i++) {
                sum = sum + sjf[i].Burst_Time;
                sjf[i].Completion_Time = sum;
                Total_Turn_Around_Time = Total_Turn_Around_Time + sjf[i].Completion_Time;
        }

        //Calculating the waiting time 
        for (int i = 0; i < processes; i++) {
                sjf[i].Waiting_Time = sjf[i].Completion_Time - sjf[i].Burst_Time;
                Total_Waiting_Time = Total_Waiting_Time + sjf[i].Waiting_Time;
        }

        //Displaying the GANTT Chart
        printf("\n GANTT chart of Short-Job-First Algorthm\n\n");
        for (int i = 0; i < processes; i++) {
                printf("|\tP%d\t|", sjf[i].Process_Id);
        }
        printf("\n");
        for (int i = 0; i < processes; i++) {
                printf(".................");
        }
        printf("\n0");
        for (int i = 0; i < processes; i++) {
                printf("\t\t%d", sjf[i].Completion_Time);
        }

        //Displaying the process in a table format
        printf("\n\nProcess ID\tBurst-Time\tTurn-Around-Time\tWaiting-Time");
        for (int i = 0; i < processes; i++) {
                printf("\n    P%d\t\t     %d\t\t\t%d\t\t\t%d", sjf[i].Process_Id,
                        sjf[i].Burst_Time, sjf[i].Completion_Time, sjf[i].Waiting_Time);
        }

        int TTAT = Total_Turn_Around_Time, TWT = Total_Waiting_Time;

        //Displaying the Total Turn-Around-Time and Waiting-Time
        printf("\n\n Total turn around time : %d ", TTAT);
        printf("\n Total Waiting time : %d ", TWT);

        //Displaying the Average Turn-Around-Time and Waiting-Time
        printf("\n\nAverage turn around time : %f", Total_Turn_Around_Time / processes);
        printf("\nAverage waiting time : %f\n ", Total_Waiting_Time / processes);

        return 0;
}
