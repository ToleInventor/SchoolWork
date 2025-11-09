/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25
DESC.: Simple C program for a hotel management application using arrays
*/

// Simple C program for a hotel management application using arrays

#include <stdio.h> // Preprocessor directive

int main() {
    float totalrevenue = 0.0;
    float revenue[7];

    // Input revenue for each day
    printf("Enter Monday income: \n");
    scanf("%f", &revenue[0]);
    printf("Enter Tuesday income: \n");
    scanf("%f", &revenue[1]);
    printf("Enter Wednesday income: \n");
    scanf("%f", &revenue[2]);
    printf("Enter Thursday income: \n");
    scanf("%f", &revenue[3]);
    printf("Enter Friday income: \n");
    scanf("%f", &revenue[4]);
    printf("Enter Saturday income: \n");
    scanf("%f", &revenue[5]);
    printf("Enter Sunday income: \n");
    scanf("%f", &revenue[6]);

    // Calculate total revenue and print daily incomes
    for(int i = 0; i < 7; i++) {
        totalrevenue += revenue[i];
        printf("Revenue for day %d: %f\n", i + 1, revenue[i]);
    }
    printf("The total revenue for the hotel is: %f\n", totalrevenue);

    int occupancy[5][10] = {
        {0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 1, 0, 1, 1, 1}
    };

    // Calculate and print occupancy for each floor
    for(int fl = 0; fl < 5; fl++) {
        int epr = 0;
        int ocr = 0;
        for(int rm = 0; rm < 10; rm++) {
            if(occupancy[fl][rm] == 0) {
                epr++;
            } else {
                ocr++;
            }
        }
        printf("The records for floor %d are:\n", fl + 1);
        printf("Occupied rooms: %d\n", ocr);
        printf("Unoccupied rooms: %d\n", epr);
    }

    // Chain of 3 branches, each with 5 floors and 10 rooms per floor
    int chain[3][5][10] = {
        {
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0}
        },
        {
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0}
        },
        {
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 1, 1, 1, 0, 0}
        }
    };

    // Print occupancy for each branch, floor, and room
    for(int i = 0; i < 3; i++) {
        for(int fl = 0; fl < 5; fl++) {
            int ers = 0;
            int ors = 0;
            for(int rm = 0; rm < 10; rm++) {
                if(chain[i][fl][rm] == 0) {
                    ers++;
                } else {
                    ors++;
                }
            }
            printf("The record for branch %d, floor %d:\n", i + 1, fl + 1);
            printf("Empty rooms: %d\n", ers);
            printf("Occupied rooms: %d\n", ors);
        }
    }

    return 0;
}
