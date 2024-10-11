#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct passengerInfo   // passenger Information structure
{
    long int z[4];
    char f[80];
    long int u;
    char B[99];
};
struct passengerInfo si;
int d;
void cancelBooking(FILE*s);


int main()
{
    int x, xa, y, a, b;


    while (1)
    {
        printf("Enter your role: 1. Passenger \t 2. Ticket manager \t 3. Exit\n");
        scanf("%d", &xa);

        if (xa == 1)
        {
            char us[10]= {0},ps[10]= {0};
            printf("ENTER USERNAME: ");
            scanf("%s",&us);
            printf("\nENTER PASSWORD: ");
            scanf("%s",&ps);
            if (strcmp(us, "user") == 0 && strcmp(ps, "1234") == 0)
            {
                printf("Login successful\n");

                printf("\nChoose your operation:\n1. Ticket Booking\t2. Booking Cancellation\n");
                scanf("%d", &x);

                if (x == 1)
                {
                    printf("Choose your source:\n1. Dhaka  2. Barisal   3. Khulna    4. Rangpur\n");
                    scanf("%d", &y);

                    if (y>=1 && y<=4)
                    {
                        if(y==1)
                        {
                            si.z[1] = y;

                            printf("Choose your destination:\n1. Barisal     2. Khulna    3. Rangpur\n");
                            scanf("%d", &a);

                            if (a >= 1 && a <= 3)
                            {
                                si.z[2] = a;

                                printf("\nYour destination is %s\n", (a == 1) ? "Barisal" : (a == 2) ? "Khulna" : (a == 3) ? "Rangpur" : "Unknown");
                            }
                            else
                            {
                                printf("Invalid destination choice.\n");
                            }
                        }

                        else if (y>=2 && y<=4)
                        {
                            si.z[1] = y;
                            printf("Your destination is Dhaka\n");
                            si.z[2]=4;
                        }


                        printf("Choose your time:\n1) 9.00 am   2) 6.00 pm\n");
                        scanf("%d", &b);
                        printf("Our seat plan is here:\n\nA-B-----C-D\nE-F-----G-H\nI-J-----K-L\nM-N-----O-P\nQ-R-----S-T\nU-V-W-X-Y-Z\n\n");

                        if (y==1&&a==1&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b1.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b1[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b1[i]);
                                    si.B[i] = b1[i];
                                }

                                FILE *bus;
                                bus = fopen("b1.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b1[i]);
                                }

                                fclose(bus);

                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==1&&a==1&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b2.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b2[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b2[i]);
                                    si.B[i] = b2[i];
                                }

                                FILE *bus;
                                bus = fopen("b2.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b2[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==1&&a==2&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b3.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b3[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b3[i]);
                                    si.B[i] = b3[i];
                                }

                                FILE *bus;
                                bus = fopen("b3.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b3[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==1&&a==2&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b4.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b4[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b4[i]);
                                    si.B[i] = b4[i];
                                }

                                FILE *bus;
                                bus = fopen("b4.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b4[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==1&&a==3&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b5.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b5[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b5[i]);
                                    si.B[i] = b5[i];
                                }

                                FILE *bus;
                                bus = fopen("b5.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b5[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==1&&a==3&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b6.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b6[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b6[i]);
                                    si.B[i] = b6[i];
                                }

                                FILE *bus;
                                bus = fopen("b6.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b6[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==2&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b7.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b7[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b7[i]);
                                    si.B[i] = b7[i];
                                }

                                FILE *bus;
                                bus = fopen("b7.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b7[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==2&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b8.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b8[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b8[i]);
                                    si.B[i] = b8[i];
                                }

                                FILE *bus;
                                bus = fopen("b8.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b8[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==3&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b9.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b9[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b9[i]);
                                    si.B[i] = b9[i];
                                }

                                FILE *bus;
                                bus = fopen("b9.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b9[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==3&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b10.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c,  i;
                            char b10[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b10[i]);
                                    si.B[i] = b10[i];
                                }

                                FILE *bus;
                                bus = fopen("b10.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b10[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==4&&b==1)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b11.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b11[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b11[i]);
                                    si.B[i] = b11[i];
                                }

                                FILE *bus;
                                bus = fopen("b11.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b11[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",v);

                                printf("Ticket Booked successfully!\n");

                            }
                        }
                        if (y==4&&b==2)
                        {
                            si.z[3] = b;
                            printf("Booked seats are:\n");

                            FILE *bus = fopen("b12.txt", "r");
                            if (bus == NULL)
                            {
                                printf("Error opening seat booking file.\n");

                            }

                            char e[99];
                            while (fgets(e, sizeof e, bus) != NULL)
                            {
                                printf("%s", e);
                            }

                            fclose(bus);
                            int c, i;
                            char b12[26];

                            printf("\n\nChoose your decision:\n1. Book seats   2. Back\n");
                            scanf("%d", &c);

                            if (c == 1)
                            {
                                printf("Enter your name:");
                                scanf("%s", si.f);
                                printf("\nEnter your phone number:");
                                scanf("%ld", &si.u);
                                si.z[0] = si.u;

                                printf("\nHow many seats you want to book?\n");
                                scanf("%d", &d);

                                getchar();

                                printf("Enter your seat numbers:\n");
                                for (i = 0; i < d; i++)
                                {
                                    scanf(" %c", &b12[i]);
                                    si.B[i] = b12[i];
                                }

                                FILE *bus;
                                bus = fopen("b12.txt", "a+");
                                if (bus == NULL)
                                {
                                    printf("Error opening seat booking file.\n");
                                    return;
                                }

                                for (i = 0; i < d; i++)
                                {
                                    fprintf(bus, "%c", b12[i]);
                                }

                                fclose(bus);
                                int v;
                                printf("Now for booking you need to pay per seat 1000 BDT\n");
                                printf("PAYMENT----BKASH---- +88012111111\n");
                                printf("Enter code: ");
                                scanf("%d",&v);

                                printf("Ticket Booked successfully!\n");


                            }
                        }

                        FILE *input;
                        input=fopen("data.txt","a+");

                        fprintf(input,"%ld",si.z[0]);
                        fprintf(input,"---%s---",si.f);
                        for(int i=0; i<d; i++)
                        {
                            fprintf(input,"%c\n",si.B[i]);
                        }
                        fclose(input);


                    }
                    else
                    {
                        printf("Invalid source choice.\n");
                    }

                }

                else if(x==2)
                {
                    FILE *s = fopen("data.txt", "rb");
                    if (s == NULL)
                    {
                        printf("Error opening seat booking file.\n");
                        return;
                    }
                    else
                        cancelBooking(s);
                }
                else
                {
                    printf("Invalid operation choice . \n");
                }
            }
            else
            {
                printf("login failed \n");
            }
        }

        else if (xa==2)
        {
            int xb;
            printf("Enter the Authority passcode: \n");
            scanf("%d", &xb);

            if (xb == 22104345)
            {
                FILE *input;
                input = fopen("data.txt", "r");

                if (input == NULL)
                {
                    perror("Error opening file");
                    return 1;
                }

                struct passengerInfo read_si;

                printf("phone----name----seat\n");

                while (fscanf(input, "%ld---%99[^-]---%99s", &read_si.z[0], read_si.f, read_si.B) == 3)
                {
                    printf("%ld---%s---%s\n", read_si.z[0], read_si.f, read_si.B);
                }

                fclose(input);

            }
            else
            {
                printf("Wrong passcode, enter your role again\n");
            }
        }
        else if (xa == 3)
        {
            printf("You have exited.\n");
            break;
        }
    }
}



void cancelBooking(FILE*s)
{
    char nd[80];
    long int pn;

    printf("Enter your name for booking cancellation:");
    scanf("%s", nd);

    printf("Enter your phone number for booking cancellation:");
    scanf("%ld", &pn);



    char seat;
    long int cp = 0;
    while (fscanf(s, " %c", &seat) == 1)
    {
        fseek(s, cp, SEEK_SET);

        fread(&si, sizeof(si), 1, s);

        if (strcmp(si.f, nd) == 0 &&si.u == pn)
        {
            si.u = 0;
            si.B[cp] = ' ';

            fseek(s, cp, SEEK_SET);
            fwrite(&si, sizeof(si), 1, s);
        }

        cp += sizeof(si);
    }

    fclose(s);
    printf("Booking canceled successfully!\n");
}