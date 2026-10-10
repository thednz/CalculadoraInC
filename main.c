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

    int result = (float)num01 * num02;

    printf("This Result of your Multiplication %d * %d = %d\n",
           num01, num02, result);

    return result;
}


int divide(int num01, int num02) {
	if(num02 == 0){
		printf("Invalid Result!\n");
		return 0;
	}

    int result = (float)num01 / num02;

    printf("This Result of your Division %d / %d = %.2f\n",
           num01, num02, result);

    return result;
}


int main() {
	

    int i = 0;
    int num01, num02;
    char input;


    while (i == 0) {

        printf("\n");
        printf("---------------- Calculator ----------------\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("---------------------------------------------\n");

        printf("Escolha uma opcao: ");
        scanf(" %c", &input);


        switch (input) {

            case '1': {

                clearScreen();
				printf("Digite um número: ");
                scanf("%d",&num01);
                printf("Digite outro número: ");
                scanf("%d",&num02);
                sum(num01, num02);

                break;
            }


            case '2': {

                clearScreen();
				printf("Digite um número: ");
                scanf("%d",&num01);
                printf("Digite outro número: ");
                scanf("%d",&num02);
                subs(num01, num02);

                break;
            }


            case '3': {

                clearScreen();
				printf("Digite um número: ");
                scanf("%d",&num01);
                printf("Digite outro número: ");
                scanf("%d",&num02);
				mult(num01, num02);

                break;
            }


            case '4': {

                clearScreen();
                printf("Digite um número: ");
                scanf("%d",&num01);
                printf("Digite outro número: ");
                scanf("%d",&num02);
				divide(num01, num02);

                break;
            }


            case '0': {

                printf("Saindo...\n");

                i = 1;

                break;
            }


            default: {

                printf("Opcao invalida!\n");

                break;
            }
        }
    }


    return 0;
}
