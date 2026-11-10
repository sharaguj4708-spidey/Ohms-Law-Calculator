#include <stdio.h>

int main()
{
    int choice;
    float I, V, R, P;

    printf("[1] Find Voltage(V)\n");
    printf("[2] Find Resistance(R)\n");
    printf("[3] Find Current (I)\n");
    printf("[4] Find Power(P)\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Current and Resistance: ");
            scanf("%f %f", &I, &R);
            V = I * R;
            printf("\n____________________\n");
            printf("Voltage is :%f volts", V);
            printf("\n____________________\n");
            break;

        case 2:
            printf("Enter Current and Voltage: ");
            scanf("%f %f", &I, &V);
            R = V / I;
            printf("\n____________________\n");
            printf("Resistance is :%f ohms", R);
            printf("\n____________________\n");
            break;

        case 3:
            printf("Enter Voltage and Resistance: ");
            scanf("%f %f", &V, &R);
            I = V / R;
            printf("\n____________________\n");
            printf("Current is :%f amps", I);
            printf("\n____________________\n");
            break;

        case 4:
            printf("Enter Voltage and Current: ");
            scanf("%f %f", &V, &I);
            P = V * I;
            printf("\n____________________\n");
            printf("Power is :%f watts", P);
            printf("\n____________________\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
