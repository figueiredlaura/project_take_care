///                  Sistema de Gestão de Salão de Beleza                    ////
///                      Developed by @figueiredlaura                       ////
///////////////////////////////////////////////////////////////////////////////
//                                                   -- since Mar, 2024 --   //                  
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_menucliente(void);
void tela_cadastrar_cliente(void);
void tela_pesquisar_cliente(void);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);

/////
// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_menucliente();
    tela_cadastrar_cliente();
    tela_pesquisar_cliente();
    tela_excluir_cliente();

    return 0;
}

/// Funções

void tela_principal(void) {
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
    printf("===                      1. Módulo Clientes                                 ===\n");
    printf("===                      2. Módulo Serviços                                 ===\n");
    printf("===                      3. Módulo Agendamentos                             ===\n");
    printf("===                      4. Módulo Pagamentos                               ===\n");
    printf("===                      0. Sair                                            ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("===      Programa utilizado na Disciplina DCT1106 - Programação, para fins  ===\n");
    printf("=== de avaliação. O programa contém os principais módulos e funcionalidades ===\n");
    printf("=== exigidos no desenvolvimento do projeto. Serve de guia de consulta e     ===\n");
    printf("=== referência para o desenvolvimento de futuros projetos.                  ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();


}
void tela_equipe(void) {
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





