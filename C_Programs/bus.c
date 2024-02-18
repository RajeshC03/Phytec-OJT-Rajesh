#include <stdio.h>

#define MAX_SEATS 10

int seats[MAX_SEATS] = {0};

void displaySeats() {
    printf("Available seats: ");
    for (int i = 1; i <= MAX_SEATS; i++) {
        if (seats[i-1] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void bookSeat(int seatNumber) {
    if (seatNumber >= 1 && seatNumber <= MAX_SEATS) {
        if (seats[seatNumber - 1] == 0) {
            seats[seatNumber - 1] = 1;
            printf("Seat %d booked successfully.\n", seatNumber);
        } else {
            printf("Seat %d is already booked.\n", seatNumber);
        }
    } else {
        printf("Invalid seat number.\n");
    }
}

int main() {
    int choice;
    
    while (1) {
        printf("\nBus Reservation System\n");
        printf("1. Display Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                {
                    int seatNumber;
                    printf("Enter seat number to book: ");
                    scanf("%d", &seatNumber);
                    bookSeat(seatNumber);
                }
                break;
            case 3:
                printf("Thank you for using our service!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

