
#include <stdio.h>
#include <stdlib.h>


// Assinatura das funções
void telaprincipal(void);
void telasobre(void);
void teladev(void);
void telamenucliente(void);
void telacadastrar_cliente(void);
void telapesquisar_cliente(void);
void telaalterar_cliente(void);
void telaexcluir_cliente(void);
void telaservicos(void);
void telanovoservico(void);
void telapesquisarservico(void);
void telaalterarservico(void);
void telaexcluirservico(void);
void telaagendamentos(void);
void telapesquisaragendamentos(void);
void telaalteraragendamentos(void);
void telaexcluiragendamentos(void);


// Programa principal
int main(void) {
    telaprincipal();
    telasobre();
    teladev();
    telamenucliente();
    telacadastrar_cliente();
    telapesquisar_cliente();
    telaalterar_cliente();
    telaexcluir_cliente();
    telaservicos();
    telanovoservico();
    telapesquisarservico();
    telaalterarservico();
    telaexcluirservico();
    telaagendamentos();
    telapesquisaragendamentos();
    telaalteraragendamentos();
    telaexcluiragendamentos();
    return 0;
}

/// Funções

void telaprincipal(void) {
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
    getchar();
}


void telasobre(void) {
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


void telamenucliente(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void telaservicos(void) {
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


void telanovoservico(void) {
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


void telapesquisarservico(void) {
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


void telaalterarservico(void) {
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


void telaexcluirservico(void) {
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


