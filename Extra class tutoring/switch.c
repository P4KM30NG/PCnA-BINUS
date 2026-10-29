#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char ticket[20];
    char usn[100];
    char pass[100];
    int i;
    printf("TICKET REGISTER\n");
    printf("1. Login\n2. Register\n3. Buy Tickets\nPlease Choose 1-3: ");
    scanf("%d", &x);
    
    //Switch case
    switch(x) {
        case 1:
        printf("Please input your ticket type (Bronze / Silver): "); scanf(" %s",ticket);
        
            if (strcmp(ticket, "Bronze") == 0) 
            {
                printf("Your ticket type is Bronze!");
                break;
            } else if (strcmp(ticket, "Silver") == 0)
            {
                printf("Your ticket type is Silver!");
                break;
            } else {
                printf("Error");
                break;
            }
            
        case 2:
        printf("Please input your username and password!\n");
        printf("Username: \n"); scanf(" %c", &usn);
        printf("Password: \n"); scanf(" %c", &pass);
        break;

        case 3:
        printf("What type of tickets do you want?\n1. Bronze\n2. Silver");
        break;

        default:
        char f;
        printf("QOTD when you choose an academically challenging degree but get academically challenged\nPress F to pay respects: ");
        scanf(" %c",&f);
            if (f == 'F'){
                printf("Respects payed");
                break;
            } else {
                printf("respects not payed :c");
                break;
            }
    }
    return 0;
}