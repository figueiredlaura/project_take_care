#include <stdio.h>
#include <stdlib.h>
#include "telasclientes.h"

void telacadastrar_cliente(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 = = = = = Cadastrar Cliente = = = = =                   ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                      ======  CADASTRO  ======                           ===\n");
    printf("===                                                                         ===\n");
    printf("===                      Nome:                                              ===\n");
    printf("===                      Cpf:                                               ===\n");
    printf("===                      Telefone/celular:                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t      Insira as informações do CLIENTE. \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 


void telapesquisar_cliente(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 = = = = = Pesquisar Cliente = = = = =                   ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    ======  PESQUISAR CLIENTE  ======                    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 Infome o número do Cpf(apenas números):                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaalterar_cliente(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 = = = = = Alterar Cliente = = = = =                     ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    ======  ALTERAR CLIENTE  ======                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                Infome o número do Cpf(apenas números):                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t        Informe a opção que deseja modificar ou adicionar: \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void telaexcluir_cliente(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 = = = = = Excluir Cliente = = = = =                     ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    ======  EXCLUIR CLIENTE  ======                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                Infome o número do Cpf(apenas números):                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("AVISOOO!!! Essa operação não poderá ser desfeita.");
    printf("             Deseja continuar? S/N               ");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}