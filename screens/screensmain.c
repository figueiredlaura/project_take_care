#include <stdio.h>
#include <stdlib.h>
#include "screensmain.h"

/// Funções

char tela_principal(void) 
{

    char opcao;
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
    printf("===                      1. Serviços                                        ===\n");
    printf("===                      2. Clientes                                        ===\n");
    printf("===                      3. Agendamentos                                    ===\n");
    printf("===                      0. Sair                                            ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    scanf("%c", &opcao);
    getchar();

    return opcao;
}

char tela_inform(void) 
{
    char opcao;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                     = = = = = Projeto = = = = =                         ===\n");
    printf("===                    Developed by @figueiredlaura                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                   = = = = = Tela principal = = = = =                    ===\n");
    printf("===                                                                         ===\n");
    printf("===                    1. Intuito                                           ===\n");
    printf("===                    2. Desenvolvedora                                    ===\n");
    printf("===                    0. Sair                                              ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Digite a opção  desejada e tecle <ENTER> para continuar a navegação...\n");
    scanf("%c", &opcao);
    getchar();

    return opcao;


}


void tela_sobre(void) {
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
void tela_dev(void) {
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


char tela_menucliente(void) 
{
    char opcao;
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
    printf("\t\t\t>>> Digite a opção  desejada e tecle <ENTER> para continuar a navegação...\n");
    scanf("%c", &opcao);
    getchar();

    return opcao;
} 


char tela_servicos(void) 
{
    char opcao;
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
    printf("\t\t\t>>> Digite a opção  desejada e tecle <ENTER> para continuar a navegação...\n");
    scanf("%c", &opcao);
    getchar();

    return opcao;
}

char tela_agendamentos(void) 
{
    char opcao;
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                   = = = = =   Agendamentos    = = = = =                 ===\n");
    printf("===                       Developed by @figueiredlaura                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                   = = = = = Cadastrar Agendamentos = = = = =            ===\n");
    printf("===                                                                         ===\n");
    printf("===                   1. Novo Agendamento                                   ===\n");
    printf("===                   2. Pesquisar Agendamentos                             ===\n");
    printf("===                   3. Alterar Agendamentos                               ===\n");
    printf("===                   4. Excluir Agendamentos                               ===\n");
    printf("===                   0. Retornar ao menu principal                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Digite a opção  desejada e tecle <ENTER> para continuar a navegação...\n");
    scanf("%c", &opcao);
    getchar();

    return opcao;
}

