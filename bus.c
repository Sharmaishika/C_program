#include <stdio.h>
#include <stdlib.h>

#define TOTAL_SEATS 15

// Function declaration

void displaySeats(char seats[]);
void reserveSeat(char seats[]);
void cancelReservation(char seats[]);
void purchaseTicket(char seats[]); 

int main() {
    
    char seats[TOTAL_SEATS] = {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E','E','E','E','E','E'};
                               //E is empty seats
    int choice;          

    do { // Display menu
    
        printf("\nBus Reservation System\n");
        
        printf("1. Display available seats\n");
        
        printf("2. Reserve a seat\n");
        
        printf("3. Cancel reservation\n");
        
        printf("4. Purchase a ticket\n"); 
        
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        switch (choice) {   //using switchcase for displaying choices
            case 1:
                displaySeats(seats);
                break;
            case 2:
                reserveSeat(seats);
                break;
            case 3:
                cancelReservation(seats);
                break;
            case 4:
                purchaseTicket(seats); 
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

void displaySeats(char seats[]) {
    
    printf("\nAvailable seats:\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        printf("Seat %d: %c\n", i + 1, seats[i]);
    }
}

void reserveSeat(char seats[]) {
    
    int seatNumber;
    printf("Enter the seat number you want to reserve (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number. Please enter a valid seat number.\n");
        return;
    }

    if (seats[seatNumber - 1] == 'E') {
        seats[seatNumber - 1] = 'R'; //R is reserved seats
        
        printf("Seat %d reserved successfully.\n", seatNumber);
        
    } else {
        
        printf("Seat %d is already reserved. Please choose another seat.\n", seatNumber);
    }
}

void cancelReservation(char seats[]) {
    int seatNumber;
    
    printf("Enter the seat number you want to cancel reservation for (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        
        printf("Invalid seat number. Please enter a valid seat number.\n");
        return;
    }

    if (seats[seatNumber - 1] == 'R') {
        seats[seatNumber - 1] = 'E';
        
        printf("Reservation for seat %d canceled successfully.\n", seatNumber);
     } 
         else {
        
        printf("Seat %d is not reserved. Cannot cancel reservation.\n", seatNumber);
    }
}

void purchaseTicket(char seats[]) {
    int seatNumber;
    
    printf("Enter the seat number you want to purchase a ticket for (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number. Please enter a valid seat number.\n");
        return;
    }

    if (seats[seatNumber - 1] == 'R') {
        seats[seatNumber - 1] = 'P';
        
        printf("Ticket purchased successfully for seat %d.\n", seatNumber);
       }
        else {
            
        printf("Seat %d is not reserved. Cannot purchase a ticket.\n", seatNumber);
    }
}


