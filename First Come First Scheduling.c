#include<stdio.h>

int main() {
        int p, sum = 0;
        float total_WT = 0, total_TAT = 0;
        printf("Enter the no of processess : ");
        scanf("%d", & p);
        int P[p], ct[p], wt[p];
        printf("Enter the burst time\n");
        for (int i = 0; i < p; i++) {
                printf("P%d : ", i);
                scanf("%d", & P[i]);
        }
        for (int i = 0; i < p; i++) {
                sum = sum + P[i];
                ct[i] = sum;
                total_TAT = total_TAT + ct[i];
        }
        printf("\nGANTT Chart\n");
        for (int i = 0; i < p; i++) {
                printf("|\tP%d\t|", i);
        }
        printf("\n");
        for (int i = 0; i < p; i++) {
                printf(".................");
        }
        printf("\n0");
        for (int i = 0; i < p; i++) {
                printf("\t\t%d", ct[i]);
        }
        printf("\n\nProcess ID\tBT\tTAT\tWT");
        for (int i = 0; i < p; i++) {
                wt[i] = ct[i] - P[i];
                total_WT = total_WT + wt[i];

        }
        for (int i = 0; i < p; i++) {
                printf("\n P%d\t\t%d\t%d\t%d", i, P[i], ct[i], wt[i]);
        }
        int TTAT = total_TAT, TWT = total_WT;
        printf("\n\n Total turn around time : %d ", TTAT);
        printf("\n Total Waiting time : %d ", TWT);
        printf("\n\nAverage turn around time : %f", total_TAT / p);
        printf("\nAverage waiting time : %f\n ", total_WT / p);
        return 0;
}
