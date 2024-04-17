#include "./Screens/telasmenu.h"
#include "./Sense/sense_telamain.h"

int main(void)
{
    char option;
    do
    {
        option = telaprincipal();
        sense_telamain(option);

        /* code */
    } while (option != '0');
    return 0;
    

}