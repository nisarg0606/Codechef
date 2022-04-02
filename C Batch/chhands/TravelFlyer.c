#include <stdio.h>

int main()
{
    int choice;
    printf("\n1 ---- North India");
    printf("\n2 ---- South India");
    printf("\n3 ---- East India");
    printf("\n4 ---- West India");
    printf("\nEnter where you want to visit: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You selected North India");
        printf("\n1 ---- Manali");
        printf("\n2 ---- Smila, Himachal Pradesh");
        printf("\n3 ---- Sikkim");
        printf("\n4 ---- Leh ladakh");
        printf("\n5 ---- Kullu");
        printf("\nEnter where you want to visit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("you selected Manali");
            break;
        case 2:
            printf("you selected Shimla, Himachal Pradesh");
            break;
        case 3:
            printf("you selected Sikkim");
            break;
        case 4:
            printf("you selected Leh Ladakh");
            break;
        case 5:
            printf("you selected Kullu");
            break;
        default:
            printf("Please enter a valid choice");
            break;
        }
        break;
    case 2:
        printf("You selected South India");
        printf("\n1 ---- Goa");
        printf("\n2 ---- Maharashtra");
        printf("\n3 ---- Kerala");
        printf("\n4 ---- Tamil Nadu");
        printf("\n5 ---- Andhra Pradesh");
        printf("\nEnter where you want to visit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("you selected Goa");
            break;
        case 2:
            printf("you selected Maharashtra");
            break;
        case 3:
            printf("you selected Kerala");
            break;
        case 4:
            printf("you selected Tamil Nadu");
            break;
        case 5:
            printf("you selected Andhra Pradesh");
            break;
        default:
            printf("Please enter a valid choice");
            break;
        }
        break;
    case 3:
        printf("You selected East India");
        printf("\n1 ---- Gangtok");
        printf("\n2 ---- Kaziranga");
        printf("\n3 ---- Majuli");
        printf("\n4 ---- Darjeeling");
        printf("\n5 ---- Shillong");
        printf("\nEnter where you want to visit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("you selected Gangtok");
            break;
        case 2:
            printf("you selected Kaziranga");
            break;
        case 3:
            printf("you selected Majuli");
            break;
        case 4:
            printf("you selected Darjeeling");
            break;
        case 5:
            printf("you selected Shillong");
            break;
        default:
            printf("Please enter a valid choice");
            break;
        }
        break;
    case 4:
        printf("You selected West India");
        printf("\n1 ---- Kumbhalgarh");
        printf("\n2 ---- Jaisalmer");
        printf("\n3 ---- Udaipur");
        printf("\n4 ---- Ajmer");
        printf("\n5 ---- Jodhpur");
        printf("\nEnter where you want to visit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("you selected Kumbhalgarh");
            break;
        case 2:
            printf("you selected Jaisalmer");
            break;
        case 3:
            printf("you selected Udaipur");
            break;
        case 4:
            printf("you selected Ajmer");
            break;
        case 5:
            printf("you selected Jodhpur");
            break;
        default:
            printf("Please enter a valid choice");
            break;
        }
        break;
    default:
        printf("Please enter a valid choice");
        break;
    }
    return 0;
}