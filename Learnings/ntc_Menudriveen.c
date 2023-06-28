#include <stdio.h>
#include <conio.h>

int main(){

    char opt,opt1,opt2;
    while(1)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Send Instruction(MAIN MENU)\n\n");
        printf("1)SPRING\n");
        printf("2)Prepaid Packs\n");
        printf("3)Unlimited Night Data\n");
        printf("4)Voice\n");
        printf("5)4G\n");
        printf("6)GB/Day\n");
        printf("7)INT-SERVICES\n");
        printf("8)UNLIMITED\n");
        printf("9)Day Packs\n");
        printf("10)StayConnected\n");
        printf("11)Exit\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:\n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        while(1)
        {
            printf("\n---------------------------\n");
            printf("Send Instruction\n");
            printf("SPRING\n\n");
            printf("1)All Time\n");
            printf("2)Night Data(11pm-6am)\n");
            printf("3)Night Voice\n");
            printf("4)SMS\n");
            printf("5)Eco Voice\n");
            printf("6)Recurring Data\n");
            printf("7)Unlimited FB/YouTube\n");
            printf("8)Back\n");
            printf("9)Exit\n");
            printf("\n---------------------------:\n");
            scanf("%d",&opt1);
            printf("^^^(You Chose\n)");
            switch(opt1)
            {
                case 2:
                    printf("Hellow b");
                    getch();

                    break;
                case 3:
                    printf("Nothing");
                    break;
                case 9:
                    exit(0);
                case 8:
                    main();
                    break;
                default:
                    printf("Hello default");
            }
        }
        break;
    case 2:
        while(1)
        {
            printf("\n---------------------------\n");
            printf("Send Instruction\n");
            printf("Prepaid Packs\n\n");
            printf("1)Sasto Combo\n");
            printf("2)Sajilo Prepaid\n");
            printf("3)Sajilo Combo\n");
            printf("4)Back\n");
            printf("5)Exit\n");
            printf("\n---------------------------:\n");
            scanf("%d",&opt1);
            printf("^^^(You Chose)\n");
            switch(opt1)
            {
                case 2:
                    printf("Hellow b");
                    break;
                case 3:
                    printf("Nothing");
                    break;
                case 5:
                    exit(0);
                case 4:
                    main();
                    break;
                default:
                    printf("Hello default");
            }
        }
        break;
    case 3:
        while(1)
        {
            printf("\n---------------------------\n");
            printf("Send Instruction\n");
            printf("NIGHT DATA UNLIMITED(11pm-6am)\n\n");
            printf("1)Night@Rs20\n");
            printf("2)Back\n");
            printf("3)Exit\n");
            printf("\n---------------------------:\n");
            scanf("%d",&opt1);
            printf("^^^(You Chose)\n");
            switch(opt1)
            {
                case 1:
                    printf("Hellow b");
                    break;
                case 3:
                    exit(0);
                case 2:
                    main();
                    break;
                default:
                    printf("Hello default");
            }
        }
        break;
    case 4:
         while(1)
        {
            printf("\n---------------------------\n");
            printf("Send Instruction\n");
            printf("Voice\n\n");
            printf("1)NT-NT-Network\n");
            printf("2)All-Network\n");
            printf("3)Back\n");
            printf("4)Exit\n");
            printf("---------------------------:\n");
            scanf("%d",&opt1);
            printf("^^^(You Chose)\n");
            switch(opt1)
            {
                case 1:
                    printf("Hellow b");
                    break;
                case 4:
                    exit(0);
                case 3:
                    main();
                    break;
                default:
                    printf("Hello default");
            }
        }
        break;

    case 11:
        exit(0);
    default:
        printf("\nHello default");
    } //End of switch
    } //End of while loop



return 0;
}
