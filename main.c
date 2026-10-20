#include <stdio.h>
#include <stdlib.h>


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int sum(int num01, int num02) {

    int result = num01 + num02;

    printf("This Result of your Sum %d + %d = %d\n",
           num01, num02, result);

    return result;
}


int subs(int num01, int num02) {

    int result = num01 - num02;

    printf("This Result of your Subtraction %d - %d = %d\n",
           num01, num02, result);

    return result;
}


int mult(int num01, int num02) {

    int result = num01 * num02;

    printf("This Result of your Multiplication %d * %d = %d\n",
           num01, num02, (float)result);

    return result;
}


int divide(int num01, int num02) {
	if(num02 == 0){
		printf("Invalid Result!\n");
		return 0;
	}

    int result = num01 / num02;

    printf("This Result of your Division %d / %d = %.2f\n",
           num01, num02, (float) result);

    return result;
}


int main() {
	

    int i = 0;
    int num01, num02;
    char input;


    while (i == 0) {

        printf("\n");
        printf("---------------- Calculator ----------------\n");
        printf("1 - Sum\n");
        printf("2 - Subs\n");
        printf("3 - Multi\n");
        printf("4 - Div\n");
        printf("0 - Exit\n");
        printf("---------------------------------------------\n");

        printf("Choose a option: ");
        scanf(" %c", &input);


        switch (input) {

            case '1': {

                clearScreen();
				printf("Write a the number: ");
                scanf("%d",&num01);
                printf("Write a the number: ");
                scanf("%d",&num02);
                sum(num01, num02);

                break;
            }


            case '2': {

                clearScreen();
				printf("Write a the number: ");
                scanf("%d",&num01);
                printf("Write a the number: ");
                scanf("%d",&num02);
                subs(num01, num02);

                break;
            }


            case '3': {

                clearScreen();
				printf("Write a the number: ");
                scanf("%d",&num01);
                printf("Write a the number: ");
                scanf("%d",&num02);
				mult(num01, num02);

                break;
            }


            case '4': {

                clearScreen();
                printf("Write a the number: ");
                scanf("%d",&num01);
                printf("Write a the number: ");
                scanf("%d",&num02);
				divide(num01, num02);

                break;
            }


            case '0': {

                printf("Exit...\n");

                i = 1;

                break;
            }


            default: {

                printf("Option Invalid!\n");

                break;
            }
        }
    }


    return 0;
}
