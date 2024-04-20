/// Esse projeto está sendo produzido utilizando como fontes de desenvolvimento 
//o material do Professor Flavius Gorgônios, disponibilizado em @FlaviusGorgonio 
//https://github.com/FlaviusGorgonio/LinguaSolta.git .


#include <stdio.h>
#include <stdlib.h>
#include "telasmenu.h"


//Funcion
char telaprincipal(void){

    char option;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===             Universidade Federal do Rio Grande do Norte                 ===\n");
    printf("===                Centro de Ensino Superior do Seridó                      ===\n");
    printf("===               Departamento de Computação e Tecnologia                   ===\n");
    printf("===                  Disciplina DCT1106 -- Programação                      ===\n");
    printf("===                  Projeto Sistema de Gestão Salão de Beleza              ===\n");
    printf("===             Developed by @figueiredlaura -- since Mar, 2024             ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===            = = = = = Sistema de Gestão de Salão de Beleza = = = = =     ===\n");
    printf("===                                                                         ===\n");
    printf("===                      1. Clientes                                        ===\n");
    printf("===                      2. Serviços                                        ===\n");
    printf("===                      3. Agendamentos                                    ===\n");
    printf("===                      0. Sair                                            ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    scanf("%c", &option);
    getchar();

    return option;
}


void telasobre(void)
{
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                = = = = = FUNCIONALIDADE = = = = =                       ===\n");
    printf("===                    Developed by @figueiredlaura                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===      ESTE PROGRAMA NÃO FOI FEITO PARA USO COMERCIAL.Programa utilizado  ===\n");
    printf("===    na Disciplina DCT1106 - Programação, para fins de avaliação.         ===\n");
    printf("===    O programa contém os principais módulos e funcionalidades            ===\n");
    printf("===    exigidos no desenvolvimento do projeto. Serve de guia de consulta e  ===\n");
    printf("===    referência para o desenvolvimento de futuros projetos.               ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();


}
void teladev(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                     = = = = = CONTATO = = = = =                         ===\n");
    printf("===                     Developed by @figueiredlaura                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===              - Aluna: Laura Dantas G. de Figueiredo                     ===\n");
    printf("===              - E-mail: figueiredlaura5@gmail.com                        ===\n");
    printf("===              - Redes sociais: @lauredantas                              ===\n");
    printf("===              - Git: https://github.com/figueiredlaura/project_take_care ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 

char telamenucliente(void) 
{
    char option;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                     = = = = = Menu Cliente = = = = =                    ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                        1. Cadastrar Cliente                             ===\n");
    printf("===                        2. Pesquisar Cliente                             ===\n");
    printf("===                        3. Alterar Cliente                               ===\n");
    printf("===                        4. Excluir Cliente                               ===\n");
    printf("===                        0. Voltar ao menu principal                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                        Escolha a opção desejada:                        ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    scanf("%c", &option);
    getchar();
    
    return option;
} 

void telaservicos(void) 
{
    char option;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                    = = = = =   Serviços    = = = = =                    ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                   = = = = = Cadastrar Serviços = = = = =                ===\n");
    printf("===                                                                         ===\n");
    printf("===                   1. Novo Serviço                                       ===\n");
    printf("===                   2. Pesquisar Serviço                                  ===\n");
    printf("===                   3. Alterar Serviço                                    ===\n");
    printf("===                   4. Excluir Serviço                                    ===\n");
    printf("===                   0. Retornar ao menu principal                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    scanf("%c", &option);
    getchar();

    return option;
}


void tela_agendamentos(void) 
{
    char option;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 = = = = =   AGENDAMENTOS    = = = = =                   ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                   = = = = = Agendamentos = = = = =                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                   1. Novo Agendamento                                   ===\n");
    printf("===                   2. Pesquisar Agendamentos                             ===\n");
    printf("===                   3. Alterar Agendamento                                ===\n");
    printf("===                   4. Excluir Agendamentos                               ===\n");
    printf("===                   0. Retornar ao menu principal                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    scanf("%c", &option);
    getchar();

    return option;
}