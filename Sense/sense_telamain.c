#include "sense_telamain.h"
#include "../Screens/telasmenu.h"
#include "sense_menuclientes.h"
#include "sense_menuservicos.h"
#include "sense_menuagendamentos.h"
#include <stdio.h>
#include <stdlib.h>

void sense_telamain(char option)
{
    switch (option)
    {
    
    case '1':
        sense_menuclientes();/* constant-expression */
        /* code */
        break;

    case '2':
        sense_menuservicos();
        break;

    case '3':
        sense_menuagendamentos();

    case '0':
        system("clear||cls");
        printf("\t   Agradecemos sua preferência.\n");
        printf("\t   Volte sempre!! \n");
        break;

    default:
        system("clear||cls");
        printf("\t  Opção indisponível.TENTE NOVAMENTE.");

        break;
    }
}