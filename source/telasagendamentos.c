#include <stdio.h>
#include <stdlib.h>
#include "telasagendamentos.h"



void tela_novosagendamentos(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                  = = = = = Agendamentos = = = = =                       ===\n");
    printf("===                     Developed by @figueiredlaura                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    ======  NOVO AGENDAMENTOS  ======                    ===\n");
    printf("===                                                                         ===\n");
    printf("===                    NOME :                                               ===\n");
    printf("===                    SERVIÇO :                                            ===\n");
    printf("===                    HORÁRIO :                                            ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações cadastro do novo AGENDAMENTO!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_pesquisaragendamentos(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                    = = = = = Agendamentos = = = = =                     ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                  ======  PERQUISAR AGENDAMENTOS  ======                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===               Informe o nome para pesquisar agendamentos:               ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_alteraragendamentos(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                    = = = = = Agendamentos = = = = =                     ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                  ======  ALTERAR AGENDAMENTO  ======                    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 1. Horário:                                             ===\n");
    printf("===                 0. Sair                                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações do agendamento que deseja ALTERAR!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_excluiragendamentos(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                    = = = = = Agendamentos = = = = =                     ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                     ======  EXCLUIR AGENDAMENTO  ======                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Informe o NOME que deseja excluir :                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira o nome que deseja EXCLUIR!\n");
    printf("\t\t\t>>> AVISOO!! Essa operação não poderá ser desfeita.\n");
    printf("\t\t\t    Deseja continuar? S/N .\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}