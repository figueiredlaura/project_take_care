
#include <stdio.h>
#include <stdlib.h>


// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_menucliente(void);
void tela_cadastrar_cliente(void);
void tela_pesquisar_cliente(void);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);
void tela_servicos(void);
void tela_novoservico(void);
void tela_pesquisarservico(void);
void tela_alterarservico(void);
void tela_excluirservico(void);
void tela_agendamentos(void);
void tela_pesquisaragendamentos(void);
void tela_alteraragendamentos(void);
void tela_excluiragendamentos(void);


// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_menucliente();
    tela_cadastrar_cliente();
    tela_pesquisar_cliente();
    tela_alterar_cliente();
    tela_excluir_cliente();
    tela_servicos();
    tela_novoservico();
    tela_pesquisarservico();
    tela_alterarservico();
    tela_excluirservico();
    tela_agendamentos();
    tela_pesquisaragendamentos();
    tela_alteraragendamentos();
    tela_excluiragendamentos();
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


void tela_menucliente(void) {
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
    getchar();
} 


void tela_cadastrar_cliente(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 


void tela_pesquisar_cliente(void) {
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

void tela_alterar_cliente(void) {
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


void tela_excluir_cliente(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_servicos(void) {
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
    getchar();
}


void tela_novoservico(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                     = = = = = Serviço = = = = =                         ===\n");
    printf("===                     Developed by @figueiredlaura                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    ======  NOVO SERVIÇO  ======                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                    Descrição :                                          ===\n");
    printf("===                    Valor :                                              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações do SERVIÇO desejado!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_pesquisarservico(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                       = = = = = Serviço = = = = =                       ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                  ======  PERQUISAR SERVIÇO  ======                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===             Informe o ID do serviço que deseja pesquisar:               ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações do SERVIÇO desejado!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_alterarservico(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                       = = = = = Serviço = = = = =                       ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                  ======  ALTERAR SERVIÇO  ======                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                 1. Descrição:                                           ===\n");
    printf("===                 2. Valor:                                               ===\n");
    printf("===                 0. Sair                                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações do SERVIÇO que deseja ALTERAR!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_excluirservico(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                       = = = = = Serviço = = = = =                       ===\n");
    printf("===                      Developed by @figueiredlaura                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                     ======  EXCLUIR SERVIÇO  ======                     ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===               Informe o ID do serviço que deseja excluir :              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\t>>> Insira as informações do SERVIÇO que deseja EXCLUIR!\n");
    printf("\t\t\t>>> ATENÇÂO!!Essa operação não poderá ser desfeita.\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_agendamentos(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

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
    printf("\t\t\t>>> ATENÇÂO!!Essa operação não poderá ser desfeita.\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


