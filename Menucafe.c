#include <stdio.h>
#include <windows.h>

int main() {
    int tam = 30; //Tamanho do Cardapio
    char menu[tam][3][50];  // Três colunas: ITEM, NOME, VALOR
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("\t|-------------------------MENU---------------------------------|\n");

    // Preenchendo a matriz com informações fictícias
    for (int i = 0; i < tam; i++) {
        sprintf(menu[i][0], "%d", i + 1);
        //Cafés
        if (i % 31 == 0) {
            sprintf(menu[i][1], "Cafe Expresso:");
            sprintf(menu[i][2], "4.50");

        } else if (i % 31 == 1) {
            sprintf(menu[i][1], "Cappuccino:");
            sprintf(menu[i][2], "5.50");

        } else if (i % 31 == 2) {
            sprintf(menu[i][1], "Macchiato:");
            sprintf(menu[i][2], "5.50");

        } else if (i % 31 == 3) {
            sprintf(menu[i][1], "Cafe com Leite:");
            sprintf(menu[i][2], "5.00");
        //Chás
        } else if (i % 31 == 4) {
            sprintf(menu[i][1], "Cha Gelado:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 5) {
            sprintf(menu[i][1], "Cha Preto:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 6) {
            sprintf(menu[i][1], "Cha Matte C/Limao:");
            sprintf(menu[i][2], "5.00");

        }//Sucos
        else if (i % 31 == 7) {
            sprintf(menu[i][1], "Suco Detox:");
            sprintf(menu[i][2], "7.00");

        } else if (i % 31 == 8) {
            sprintf(menu[i][1], "Suco D/Laranja:");
            sprintf(menu[i][2], "7.00");

        } else if (i % 31 == 9) {
            sprintf(menu[i][1], "Limonada:");
            sprintf(menu[i][2], "5.00");
        //Bolos
        } else if (i % 31 == 10) {
            sprintf(menu[i][1], "Bolo Morango:");
            sprintf(menu[i][2], "8.00");

        } else if (i % 31 == 11) {
            sprintf(menu[i][1], "Chess Cake:");
            sprintf(menu[i][2], "8.00");

        } else if (i % 31 == 12) {
            sprintf(menu[i][1], "Bolo D/Cenoura:");
            sprintf(menu[i][2], "8.00");

        } else if (i % 31 == 13) {
            sprintf(menu[i][1], "Bolo D/Chocolate:");
            sprintf(menu[i][2], "8.00");
        //Tortas
        } else if (i % 31 == 14) {
            sprintf(menu[i][1], "Torta D/Maca:");
            sprintf(menu[i][2], "8.00");

        } else if (i % 31 == 15) {
            sprintf(menu[i][1], "Torta D/Amora:");
            sprintf(menu[i][2], "8.00");

        } else if (i % 31 == 16) {
            sprintf(menu[i][1], "Torta D/Limao:");
            sprintf(menu[i][2], "8.00");
        //Salgados
        } else if (i % 31 == 17) {
            sprintf(menu[i][1], "Coxinha C/Catupiry:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 18) {
            sprintf(menu[i][1], "Enroladinho:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 19) {
            sprintf(menu[i][1], "Empada:");
            sprintf(menu[i][2], "5.00");
        //Refrigerantes
        } else if (i % 31 == 20) {
            sprintf(menu[i][1], "Coca Cola /Lata:");
            sprintf(menu[i][2], "4.50");

        } else if (i % 31 == 21) {
            sprintf(menu[i][1], "Guarana /Lata:");
            sprintf(menu[i][2], "4.50");

        } else if (i % 31 == 22) {
            sprintf(menu[i][1], "Fanta Laranja /Lata:");
            sprintf(menu[i][2], "4.50");

        } else if (i % 31 == 23) {
            sprintf(menu[i][1], "Pepsi /Lata:");
            sprintf(menu[i][2], "4.50");
        //Bebidas
        } else if (i % 31 == 24) {
            sprintf(menu[i][1], "Agua Mineral:");
            sprintf(menu[i][2], "3.00");

        } else if (i % 31 == 25) {
            sprintf(menu[i][1], "Agua C/Gas:");
            sprintf(menu[i][2], "4.00");

        } else if (i % 31 == 26) {
            sprintf(menu[i][1], "H2o:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 27) {
        //Vitaminas
            sprintf(menu[i][1], "Vitamina de Morango:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 28) {
            sprintf(menu[i][1], "Vitamina de Banana:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 29) {
            sprintf(menu[i][1], "Viatmina de Abacate:");
            sprintf(menu[i][2], "5.00");

        } else if (i % 31 == 30) {
            sprintf(menu[i][1], "Vitamina Tropical:");
            sprintf(menu[i][2], "5.00");
        }
    }

    // Exibindo
    for (int i = 0; i < tam; i++) {
        printf("\t|");
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            } else {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            }
            printf("%-20s", menu[i][j]);  // Ajuste o número para o máximo esperado de caracteres
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\|");
        }
        printf("\n");

        // Adiciona uma linha separadora após os grupos
        if ((i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i % 31 == 13) && i != tam - 1) {
            printf("\t|");
            for (int k = 0; k < 62; k++) {
                printf("-");
            }
            printf("|\n");
        }
    }

    // Pontilhado no final.
    printf("\t|--------------------------------------------------------------|\n");

    printf("\n\n");

    return 0;
}
