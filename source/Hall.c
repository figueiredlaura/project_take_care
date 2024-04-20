#include "./telasmenu.h"
#include "./sense_telamain.h"

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