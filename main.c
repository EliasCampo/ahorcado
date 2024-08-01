#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

char nombre[30], palabra_actual[16];

void main_Menu(int inicio_juego_auto)
{
    if(inicio_juego_auto == 0)
    {
        int opcion;

        printf("*********************MENU PRINCIPAL*****************************************\n");
        printf("*  1- Ingresar/Modificar jugador.                                           *\n");
        printf("*  2- Iniciar juego                                                         *\n");
        printf("*  3- Mostrar ranking                                                       *\n");
        printf("*  4- Salir                                                                 *\n");
        printf("****************************************************************************\n");


        scanf("%d", &opcion);
        fflush(stdin);

        switch (opcion)
        {
            case 1:
                menu_opcionUno();

                system("cls");
                printf("BIENVENIDO %s AL AHORCADO \n", nombre);
                main_Menu(0);
                break;

            case 2:
                if (strlen(nombre)==0)
                {
                    printf("Ingrese un usuario\n");
                    main_Menu(0);
                }

                menu_opcionDos();
                break;

            case 3:
                system("cls");
                printf("OPCION NO DISPONIBLE \n");
                main_Menu(0);
                break;

            case 4:
                system("cls");
                printf("MUCHAS GRACIAS POR JUGAR AL AHORCADO 2.0 \n");
                exit(1);
                break;
        }
    }
    else //gano la partida anterior, y eligio continuar con la siguiente palabra
        menu_opcionDos();


}

void menu_opcionUno()
{
    printf("Ingrese un nombre: \n");
    scanf("%s", &nombre);
    fflush(stdin);
}

int validarLetra(char letra)
{
    int valida = 0;

    if (letra >= 65 && letra <= 90 )
        valida = 1;

    return valida;
}

void menu_opcionDos()
{
    //memset(palabra_actual, 0, 16);

    char palabra_aux[16];
    FILE *archivo;
    archivo = fopen("palabras.txt", "r");

    srand(time(0));
    int random = rand() % 50 + 0;
    for (int i=0; i < random; i++ )
    {
        fgets(palabra_aux, 15, archivo);// lee linea del archivo de texto
    }


    char rdo_final[16];
    int cont_real = 0;

    for(int i=0; i<strlen(palabra_aux); i++)
    {
        if (validarLetra(palabra_aux[i]) == 1)
        {
            rdo_final[cont_real] = palabra_aux[i];
            cont_real++;
        }
    }

    strcpy (palabra_actual, rdo_final);

    fclose(archivo);
}

int errores_Dibujos(int intentos_restantes)
{
    intentos_restantes = 10-intentos_restantes;

    switch (intentos_restantes)
    {
        case 0:


                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
              break;

        case 1:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O       \n");
                printf("   *       |         \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 2:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 3:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *       |        \n");
                printf("   *       |        \n");
                printf("   *       |        \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 4:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / |         \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 5:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / | \\       \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *                \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 6:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / | \\        \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *      /          \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 7:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / | \\        \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *      / \\        \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 8:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / | \\        \n");
                printf("   *       |        \n");
                printf("   *       |          \n");
                printf("   *      / \\_         \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;

        case 9:

                printf("   *********        \n");
                printf("   *       *        \n");
                printf("   *       O        \n");
                printf("   *     / | \\          \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *     _/ \\_        \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;
        case 10:

                printf("   AHORCADO*        \n");
                printf("   *       *        \n");
                printf("   *       X        \n");
                printf("   *     / | \\          \n");
                printf("   *       |         \n");
                printf("   *       |         \n");
                printf("   *     _/ \\_        \n");
                printf("   *                \n");
                printf("   *                \n");
              printf(" *******              \n\n");
               break;
    }
 }

int main()
{

    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);

    int siguiente_palabra = 0;

    while(1)
    {
        printf("                     AHORCADO 2.0                                           \n");



        main_Menu(siguiente_palabra);

        siguiente_palabra = 0;

        system("cls");
        printf("Que comience el juego %s \n\n", nombre);

        char caux;

        char guiones[16] = "_______________";
        int intentos_restantes = 10;
        int contador_aciertos = 0;
        int contador_aciertos_aux;

        do
        {
            printf("intentos restantes: %d \n", intentos_restantes);
            errores_Dibujos(intentos_restantes);

            for (int i =0 ; i < strlen(palabra_actual); i++)
            {
                printf("%c ",guiones[i]);
            }
            printf("\n Ingrese una letra: \n" );
            scanf("%c", &caux);
            fflush(stdin);

            while(validarLetra(caux) == 0)
            {
                printf("\n La letra ingresada es invalida, ingrese otra: \n" );
                scanf("%c", &caux);
                fflush(stdin);
            }

            contador_aciertos_aux=contador_aciertos;

            for (int i =0 ; i < strlen(palabra_actual); i++)
            {

                if  (palabra_actual[i]==caux && guiones[i] != palabra_actual[i])
                 {
                     guiones[i]= palabra_actual[i];
                     contador_aciertos++;
                 }
            }
            if  (contador_aciertos == contador_aciertos_aux && caux!=palabra_actual[0] && caux!=palabra_actual[1] && caux!=palabra_actual[2] && caux!=palabra_actual[3] && caux!=palabra_actual[4] && caux!=palabra_actual[5] && caux!=palabra_actual[6] && caux!=palabra_actual[7] && caux!=palabra_actual[8] && caux!=palabra_actual[9] && caux!=palabra_actual[10] && caux!=palabra_actual[11] && caux!=palabra_actual[12] && caux!=palabra_actual[13] && caux!=palabra_actual[14]) // si contador aux es igual a cont aciertos es porque no hubo aciertos entonces resta
                intentos_restantes--;


            system("cls");
        }
        while (intentos_restantes > 0 && contador_aciertos < strlen(palabra_actual));

        system("cls");

        if (contador_aciertos == strlen(palabra_actual))
            printf("HAS GANADO \n");
        else
            printf ("HAS PERDIDO \n");


        printf("La palabra era: ");
        for (int i =0 ; i < strlen(palabra_actual); i++)
        {
            printf("%c ",palabra_actual[i]);
        }


        if (contador_aciertos == strlen(palabra_actual)) //solo si gano, ofrezco seguir con otra palabra
        {
            int opciones;
            printf("\nIngrese 1 para continuar con otra palabra, 2 para volver al menu\n");
            scanf("%d", &opciones);
            fflush(stdin);

            if (opciones == 1)
                siguiente_palabra = 1;
        }
        else
            getchar();

        strcpy(guiones, "_______________");
        system("cls");
    }
}
