#include <stdio.h>

int main()
 {
    int totalSeats = 50;
    int bookedSeats;

    printf("Total Seats Available: %d", totalSeats);

    printf("Enter number of seats to book  ");
   
    scanf("%d", &bookedSeats);

    if (bookedSeats <= totalSeats)
     {
        totalSeats = totalSeats - bookedSeats;

        printf("\nTicket Booked Successfully!\n");
       
        printf("Booked Seats: %d", bookedSeats);
      
        printf("Remaining Seats: %d", totalSeats);
    } 
    else 
    {
        printf("Seats not available!");
    }

    return 0;
}