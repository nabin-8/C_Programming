#include <stdio.h>
#include <stdlib.h>
int areaF();
int volumeF();
int mainMenu();
int main()
{
    int choice;
    printf("Enter a number according to the Operation you want to perform\n");
    printf("1: Find Area\t2: Find Volume\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        areaF();
        break;
    case 2:
        volumeF();
        break;
    
    default:
    system("cls");
        printf("Error! Input either 1 or 2!\n");
       
    }
     main();
}

int areaF(){
            int choice, height, length, breadth;
            float radius; 
            double area;
            printf("Area of:\n1: Circle\t2: Cylinder\t3: Rectangle\t4: Sphere\t5: Go to Main Menu\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the radius of the circle in cm:\n");
                scanf("%f", &radius);
                area = 3.14 * radius *radius;
                printf("The area of the circle is %f sq. cm\n", area);
                mainMenu();

                break;
            case 2:
                printf("Enter the radius of the cylinder in cm:\n");
                scanf("%f", &radius);
                printf("Enter the height of the cylinder in cm:\n");
                scanf("%d", &height);
                area = 2 * 3.14 * radius *(radius + height);
                printf("The area of the cylinder is %lf sq. cm\n", area);
                mainMenu();

                break;
            case 3:
                printf("Enter the length of the rectangle in cm:\n");
                scanf("%d", &length);
                printf("Enter the breadth of the rectangle in cm:\n");
                scanf("%d", &breadth);
                area = length * breadth;
                printf("The area of the rectangle is %lf sq. cm\n", area);
                mainMenu();

                break;
            case 4:

                printf("Enter the radius of the sphere in cm:\n");
                scanf("%f", &radius);
                area = 4 * 3.14 * radius *radius;
                printf("The area of the sphere is %lf sq. cm\n", area);
                mainMenu();
                break;
            
            case 5:
            system("cls");
                main();
            default:
            system("cls");
             printf("Error! Input either 1, 2, 3 or 4!\n");
             break;
            }
            areaF();
}

int volumeF(){
            int choice, height, length, breadth;
            float radius; 
            double volume;
            printf("Volume of\n1: Cylinder\t2: Room \t3: Sphere\t4: Go to Main Menu\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the radius of the cylinder in cm:\n");
                scanf("%f", &radius);
                printf("Enter the height of the cylinder in cm:\n");
                scanf("%d", &height);
                volume =  3.14 * radius * radius * height;
                printf("The Volume of the cylinder is %lf sq. cm\n", volume);
                mainMenu();
                break;
            case 2:
                printf("Enter the length of the room in cm:\n");
                scanf("%d", &length);
                printf("Enter the breadth of the room in cm:\n");
                scanf("%d", &breadth);
                printf("Enter the height of the room in cm:\n");
                scanf("%d", &height);
                volume = length * breadth * height;
                printf("The Volume of the room is %lf sq. cm\n", volume);
                mainMenu();
                break;
            case 3:

                printf("Enter the radius of the sphere in cm:\n");
                scanf("%f", &radius);
                volume = 4/3 * 3.14 * radius *radius *radius;
                printf("The Volume of the sphere is %lf sq. cm\n", volume);
                mainMenu();
                break;

            case 4:
            system("cls");
                main();
            
            default:
                system("cls");
                printf("Error! Input either 1, 2, or 3!\n");

             break;
            }
            volumeF();
}

int mainMenu(){
    char placeholder;
    printf("\n\nPress X and hit Enter to go to the Main Menu...");
    scanf(" %c", &placeholder);
    switch (placeholder)
    {
        case 'x':
        system("cls");
        main();
    default:
        system("cls");
        main();
    }
}