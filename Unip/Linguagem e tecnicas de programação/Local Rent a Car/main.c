#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //para usar strcpy(destino, dado);
#include <time.h>

/* SISTEMA DESENVOLVIDO PARA SER ENTREGUE À UNIP EAD COMO PARTE DO PROJETO INTEGRADO MULTIDISCIPLINAR*/


//**********Empregados**********
struct empregados{

    char nome[25];
    char cargo[25];
    float salario;
};

struct empregados cria_funcionario(){

    system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("DADOS CADASTRAIS - NOVO FUNCIONÁRIO\n");

    struct empregados novo_funcionario;
    printf("\nNome: "); fflush(stdin);
    gets(novo_funcionario.nome);
    printf("\nCargo: ");fflush(stdin);
    gets(novo_funcionario.cargo);
    printf("\nSalário: ");
    scanf("%f", &novo_funcionario.salario);
    system("cls");
    printf("Funcionário cadastrado com sucesso!\n\n");
    system("pause");

    return novo_funcionario;
}

void add_funcionario(struct empregados lista[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){

        if(lista[i].salario == 0){

            struct empregados novo;
            novo = cria_funcionario();
            lista[i] = novo;
            break;
        }
    }
}

void del_funcionario(struct empregados lista[], int quantidade, int alvo){

    int i;

    for(i = alvo; i < quantidade; i++){

        lista[i] = lista[i+1];
    }lista[quantidade-1].salario = 0;

    system("cls");
    printf("Funcionário removido com sucesso\n");
    system("pause");
}

struct empregados clone_edita(struct empregados lista[], int quantidade, int alvo){

    int opcao;

    printf("\n<1> Alterar nome");
    printf("\n<2> Alterar cargo");
    printf("\n<3> Alterar salário\n");
    scanf("%d", &opcao);

    struct empregados clone;
    clone = lista[alvo];

    switch (opcao){

        case 1:
            printf("Digite o novo nome: "); fflush(stdin);
            gets(clone.nome);
            break;

        case 2:
            printf("Digite o novo cargo: "); fflush(stdin);
            gets(clone.cargo);
            break;

        case 3:
            printf("Digite o novo salário: "); fflush(stdin);
            scanf("%f", &clone.salario);
            break;

    } system("cls"); printf("Dados alterados com sucesso\n"); system("pause");

    return clone;

};

void edita_funcionario (struct empregados lista[], int quantidade, int alvo){

    lista[alvo] = clone_edita(lista, quantidade, alvo);
}

//**********Veículos**********
struct veiculos{

    char modelo[25];
    char placa[25];
    int ano;
    int alugado;
};

struct veiculos cria_carro(){

    system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("DADOS CADASTRAIS - NOVO VEÍCULO\n");

    struct veiculos novo_carro;
    printf("\nModelo: "); fflush(stdin);
    gets(novo_carro.modelo);
    printf("\nPlaca: ");fflush(stdin);
    gets(novo_carro.placa);
    printf("\nAno: ");
    scanf("%d", &novo_carro.ano);
    system("cls");
    printf("Veículo cadastrado com sucesso!\n\n");
    system("pause");

    return novo_carro;
}

void add_carro(struct veiculos lista[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){

        if(lista[i].ano == 0){

            struct veiculos novo;
            novo = cria_carro();
            lista[i] = novo;
            break;
        }
    }
}

void del_carro(struct veiculos lista[], int quantidade, int alvo){

    int i;

    for(i = alvo; i < quantidade; i++){

        lista[i] = lista[i+1];
    }lista[quantidade-1].ano = 0;

    system("cls");
    printf("Veículo removido com sucesso\n");
    system("pause");
}

struct veiculos clone_edita_carro(struct veiculos lista[], int quantidade, int alvo){

    int opcao;

    printf("\n<1> Alterar Modelo");
    printf("\n<2> Alterar Placa");
    printf("\n<3> Alterar Ano\n");
    scanf("%d", &opcao);

    struct veiculos clone;
    clone = lista[alvo];

    switch (opcao){

        case 1:
            printf("Digite o novo modelo: "); fflush(stdin);
            gets(clone.modelo);
            break;

        case 2:
            printf("Digite a nova placa: "); fflush(stdin);
            gets(clone.placa);
            break;

        case 3:
            printf("Digite o novo ano: "); fflush(stdin);
            scanf("%d", &clone.ano);
            break;

    } system("cls"); printf("Dados alterados com sucesso\n"); system("pause");

    return clone;

};

void edita_carro (struct veiculos lista[], int quantidade, int alvo){

    lista[alvo] = clone_edita_carro(lista, quantidade, alvo);
}

//**********Clientes**********
struct cliente{

    char nome[25];
    char cpf[20];
    int idade;
    int parceiro;
};

struct cliente cria_cliente(){

    system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("DADOS CADASTRAIS - CLIENTE\n");

    struct cliente novo_consumidor;
    printf("\nNome: "); fflush(stdin);
    gets(novo_consumidor.nome);
    printf("\nCPF/CNPJ: ");fflush(stdin);
    gets(novo_consumidor.cpf);
    printf("\nIdade (caso seja CNPJ digite 1): ");fflush(stdin);
    scanf("%d", &novo_consumidor.idade);
    printf("\nO cliente, caso CNPJ, é nosso parceiro? Digite 1 para sim ou 0 para não\n");fflush(stdin);
    scanf("%d", &novo_consumidor.parceiro);
    system("cls");
    printf("Cliente cadastrado com sucesso!\n\n");
    system("pause");

    return novo_consumidor;
}

void add_cliente(struct cliente lista[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){

        if(lista[i].idade == 0){

            struct cliente novo;
            novo = cria_cliente();
            lista[i] = novo;
            break;
        }
    }
}

void del_cliente(struct cliente lista[], int quantidade, int alvo){

    int i;

    for(i = alvo; i < quantidade; i++){

        lista[i] = lista[i+1];
    }lista[quantidade-1].idade = 0;

    system("cls");
    printf("Cliente removido com sucesso\n");
    system("pause");
}

struct cliente clone_edita_cliente(struct cliente lista[], int quantidade, int alvo){

    int opcao;

    printf("\n<1> Alterar nome");
    printf("\n<2> Alterar CPF");
    printf("\n<3> Alterar idade\n");
    scanf("%d", &opcao);

    struct cliente clone;
    clone = lista[alvo];

    switch (opcao){

        case 1:
            printf("Digite o novo nome: "); fflush(stdin);
            gets(clone.nome);
            break;

        case 2:
            printf("Digite o novo CPF: "); fflush(stdin);
            gets(clone.cpf);
            break;

        case 3:
            printf("Digite a nova idade: "); fflush(stdin);
            scanf("%d", &clone.idade);
            break;

    } system("cls"); printf("Dados alterados com sucesso\n"); system("pause");

    return clone;

};

void edita_cliente (struct cliente lista[], int quantidade, int alvo){

    lista[alvo] = clone_edita_cliente(lista, quantidade, alvo);
}

//**********Tickets**********
struct ticket{

    struct veiculos carro_loc;
    struct cliente cliente_loc;
    int dia_loc, mes_loc, ano_loc;
    int dia_dev, mes_dev, ano_dev;
    int hora_loc, min_loc, sec_loc;
};

struct ticket cria_ticket(struct cliente consumidores[], struct veiculos carros[], int num_clientes, int num_carros){

  time_t timer;
  struct tm *horarioLocal;
  time(&timer);
  horarioLocal = localtime(&timer);

  int dia = horarioLocal->tm_mday;
  int mes = horarioLocal->tm_mon + 1;
  int ano = horarioLocal->tm_year + 1900;

  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;

  int i;
  int consu_escolhido;
  int veic_escolhido;
  int periodo;
  struct ticket recibo;

  //Definindo o cliente
  printf("Indique o cliente\n");

  escolhe_c:
  for(i = 0; i < num_clientes; i++){

    if (consumidores[i].idade != 0){
        printf("<%d> %s\n", i, consumidores[i].nome);
    }
  }
  scanf("%d", &consu_escolhido);

  if(consumidores[consu_escolhido].idade == 0){
    system("cls");
    printf("ESCOLHA UM CLIENTE VÁLIDO\n\n");
    system("pause");
    goto escolhe_c;
  }
  recibo.cliente_loc = consumidores[consu_escolhido];

  //Definindo o veículo
  printf("Indique o veículo\n");

  escolhe_v:
  for(i = 0; i < num_carros; i++){

    if(carros[i].ano != 0 && carros[i].alugado != 1){
        printf("<%d> %s\n", i, carros[i].modelo);
    }
}scanf("%d", &veic_escolhido);

if(carros[veic_escolhido].ano == 0){
    system("cls");
    printf("ESCOLHA UM VEÍCULO VÁLIDO\n\n");
    system("pause");
    goto escolhe_v;
  }
  recibo.carro_loc = carros[veic_escolhido];
  carros[veic_escolhido].alugado = 1;

  //definindo a quantidade de dias
  printf("Quantidade de dias: \n");
  scanf("%d", &periodo);

            recibo.dia_loc = dia; recibo.dia_dev = dia + periodo;
            recibo.mes_loc = mes; recibo.mes_dev = mes;
            recibo.ano_loc = ano; recibo.ano_dev = ano;
            recibo.hora_loc = hora;
            recibo.min_loc = min;
            recibo.sec_loc = sec;

  return recibo;
}

void ticket_emissao(struct cliente locador[], struct veiculos automovel[], struct ticket recibo[], int num_clientes, int num_carros, int num_recibos){

  int i;
  struct ticket novo = cria_ticket(locador, automovel, num_clientes, num_carros);

  for(i = 0; i < num_recibos; i++){

        if(recibo[i].ano_dev == 0){
            recibo[i] = novo;
            break;
        }
  }
  system("cls");
  printf("Cadastrado com sucesso\n\n");

  printf("____________________________________________________________\n");
  printf("CLIENTE: %s\n", novo.cliente_loc.nome);
  printf("____________________________________________________________\n");
  printf("VEÍCULO: %s\n", novo.carro_loc.modelo);
  printf("____________________________________________________________\n");
  printf("DATA DA LOCAÇÃO: %d:%d:%d\n", novo.dia_loc, novo.mes_loc, novo.ano_loc);
  printf("____________________________________________________________\n");
  printf("DATA DA DEVOLUÇÃO: %d:%d:%d\n", novo.dia_dev, novo.mes_dev, novo.ano_dev);
  printf("____________________________________________________________\n");
  printf("HORA DA LOCAÇÃO: %d:%d:%d\n", novo.hora_loc, novo.min_loc, novo.sec_loc);
  printf("____________________________________________________________\n");
  system("pause");
}

void lista(struct ticket recibos[], int num_recibos){

    int i;
    time_t timer;
    struct tm *horarioLocal;
    time(&timer);
    horarioLocal = localtime(&timer);

    int dia = horarioLocal->tm_mday;
    int mes = horarioLocal->tm_mon + 1;

    system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-AGENDA DO DIAS-\n\n");
    printf("-Veículos com devolução programada para hoje\n");

    for (i = 0; i < num_recibos; i++){

        if(recibos[i].dia_dev == dia && recibos[i].mes_dev == mes){

            printf("____________________________________________________________\n");
            printf("CLIENTE: %s\n", recibos[i].cliente_loc.nome);
            printf("____________________________________________________________\n");
            printf("VEÍCULO: %s\n", recibos[i].carro_loc.modelo);
            printf("____________________________________________________________\n");
            printf("DATA DA LOCAÇÃO: %d:%d:%d\n", recibos[i].dia_loc, recibos[i].mes_loc, recibos[i].ano_loc);
            printf("____________________________________________________________\n");

        }
    }
    system("pause");

}

//**********Baixas**********
void pagamento (struct veiculos carros[], struct ticket recibos[], int num_carros, int num_recibos){

    time_t timer;
  struct tm *horarioLocal;
  time(&timer);
  horarioLocal = localtime(&timer);

  int dia = horarioLocal->tm_mday;
  int hora = horarioLocal->tm_hour;


    int i, recibo_escolha, hora_atraso_parcial, pago, qtd_dias;
    float total;

    system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-PAGAMENTOS E BAIXAS-\n\n");

    for(i = 0; i < num_recibos; i++){
            if(recibos[i].ano_loc != 0){

    printf("Digite o número da locação a ser quitada\n");


    for(i = 0; i < num_recibos; i++){

        if(recibos[i].ano_loc != 0){

            printf("____________________________________________________________\n");
            printf("<%d> RECIBO\nCLIENTE: %s\n", i, recibos[i].cliente_loc.nome);
            printf("____________________________________________________________\n");
            printf("VEÍCULO: %s\n", recibos[i].carro_loc.modelo);
            printf("____________________________________________________________\n");
            printf("DATA DA LOCAÇÃO: %d:%d:%d\n", recibos[i].dia_loc, recibos[i].mes_loc, recibos[i].ano_loc);
            printf("____________________________________________________________\n");
            printf("DATA DA DEVOLUÇÃO: %d:%d:%d\n", recibos[i].dia_dev, recibos[i].mes_loc, recibos[i].ano_loc);
            printf("____________________________________________________________\n");
        }
    }scanf("%d", &recibo_escolha);

    break;
            }//if
        else{
            printf("Não há tickets cadastrados\n");
            system("pause");
            goto fim;
            break;
        }

}//for

    //calculo
    if(dia == recibos[recibo_escolha].dia_loc){
        qtd_dias = 0;
    }else{
        qtd_dias = recibos[recibo_escolha].dia_dev - recibos[recibo_escolha].dia_loc;
    }

    int dias_atraso = dia - recibos[recibo_escolha].dia_dev;

    if(hora - recibos[recibo_escolha].hora_loc < 0){
        hora_atraso_parcial = recibos[recibo_escolha].hora_loc - hora;
    }else {
        hora_atraso_parcial = hora - recibos[recibo_escolha].hora_loc;
    }
    int atraso_total = (dias_atraso * 24) + hora_atraso_parcial;

    if(atraso_total < 0){

        printf("\nO Veículo está sendo entregue antes da data prevista, iremos cobrar o valor de uma diária\n");
    }

    if(atraso_total >= 0){
          total = (qtd_dias * 24) + atraso_total;
    }else if( qtd_dias <= 0){
        total = 24;
    }else if (dias_atraso > 0){
        total = (qtd_dias * 24) + atraso_total;
    }
    else{
          total = qtd_dias * 24;
    }

    printf("\nValor\n");
    printf("Valor da diária: R$ 24,00\nValor da multa por hora: R$ 1,00\n");
    printf("Dias alugados: %d ", qtd_dias);
    if(atraso_total >= 0){
     printf("+ Horas de atraso: %d", atraso_total);
    }
    printf("\nTotal: %7.2f\n", total);

    printf("Pagamento efetuado?\n");
    printf("<0> SIM\n");
    printf("<1> NÃO\n");
    scanf("%d", &pago);

    switch(pago){

    case 0:
        for(i = 0; i < num_carros; i++){

            if(strcmp(recibos[i].carro_loc.placa, carros[i].placa) == 0){

                carros[i].alugado = 0;
                break;
            }
        }

        recibos[recibo_escolha].dia_loc = 0; recibos[recibo_escolha].dia_dev = 0; recibos[recibo_escolha].hora_loc = 0;
        recibos[recibo_escolha].mes_loc = 0; recibos[recibo_escolha].dia_dev = 0; recibos[recibo_escolha].min_loc = 0;
        recibos[recibo_escolha].ano_loc = 0; recibos[recibo_escolha].dia_dev = 0; recibos[recibo_escolha].sec_loc = 0;
        system("cls");
        printf("PAGAMENTO EFETUADO COM SUCESSO!");
        system("pause");
        goto fim;

    case 1:
        system("cls");
        printf("PAGAMENTO NÃO EFETUADO, O VEÍCULO CONTINUA EM POSSE DO LOCATÁRIO!");
        system("pause");
        goto fim;
    }
    fim:system("cls");
}


int main()
{
    //Declaração de variáveis
    setlocale(LC_ALL, "");
    int i;
    int num_funcionarios = 20;
    int num_carros = 20;
    int num_clientes = 20;
    int num_tickets = 20;
    //Declaração de vetores de estruturas
    struct empregados funcionarios[num_funcionarios];
    struct veiculos carros[num_carros];
    struct cliente consumidores[num_clientes];
    struct ticket recibos[num_tickets];
    //Definindo o campo salário de todas as estruturas tipo empregados como 0
    for(i = 0; i < num_funcionarios; i++){
    funcionarios[i].salario = 0;
    }
    //Definindo o campo ano de todas as estruturas tipo veiculos como 0
    for(i = 0; i < num_carros; i++){
    carros[i].ano = 0;
    }
    //Definindo o campo idade de todas as estruturas tipo cliente como 0
    for(i = 0; i < num_clientes; i++){
    consumidores[i].idade = 0;
    }
    //Definindo o campo ano_loc de todas as estruturas tipo ticket como 0
    for(i = 0; i < num_tickets; i++){
    recibos[i].ano_loc = 0;
    }



    //Setando alguns funcionário que já estarão no sistema
    strcpy(funcionarios[0].nome,"Amanda"); strcpy(funcionarios[0].cargo,"Vendedora"); funcionarios[0].salario = 2145.96;
    strcpy(funcionarios[1].nome,"Beatriz"); strcpy(funcionarios[1].cargo,"Secretaria"); funcionarios[1].salario = 1864.20;
    strcpy(funcionarios[2].nome,"Carlos"); strcpy(funcionarios[2].cargo,"Vendedor"); funcionarios[2].salario = 2145.96;
    strcpy(funcionarios[3].nome,"Danilo"); strcpy(funcionarios[3].cargo,"Fiscal"); funcionarios[3].salario = 3021.30;
    strcpy(funcionarios[4].nome,"Emily"); strcpy(funcionarios[4].cargo,"Gerente de TI"); funcionarios[4].salario = 4861.65;
    //Setando alguns carros que já estarão no sistema
    strcpy(carros[0].modelo,"Celta"); strcpy(carros[0].placa,"MPX - 1547"); carros[0].ano = 2016;
    strcpy(carros[1].modelo,"Cherokee"); strcpy(carros[1].placa,"KSU-9865"); carros[1].ano = 2015;
    strcpy(carros[2].modelo,"Palio Adventure"); strcpy(carros[2].placa,"LCU-0235"); carros[2].ano = 2017;
    strcpy(carros[3].modelo,"Vectra"); strcpy(carros[3].placa,"BCG-3652"); carros[3].ano = 2016;
    strcpy(carros[4].modelo,"Novo Uno"); strcpy(carros[4].placa,"MDH-1568"); carros[4].ano = 2016;
    //Setando alguns clientes que já estarão no sistema
    strcpy(consumidores[0].nome,"Pedro"); strcpy(consumidores[0].cpf,"124.853.041-59"); consumidores[0].idade = 20;
    strcpy(consumidores[1].nome,"Matheus"); strcpy(consumidores[1].cpf,"958.342.105-48"); consumidores[1].idade = 36;
    strcpy(consumidores[2].nome,"Jéssica"); strcpy(consumidores[2].cpf,"025.864.914-32"); consumidores[2].idade = 40;
    strcpy(consumidores[3].nome,"Sara"); strcpy(consumidores[3].cpf,"974.312.123-47"); consumidores[3].idade = 70;
    strcpy(consumidores[4].nome,"Victor"); strcpy(consumidores[4].cpf,"741.357.159-73"); consumidores[4].idade = 18;

    //Configurando o menu principal
    inicio:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-MENU PRINCIPAL-\n");
    printf("<1> Efetuar locação\n");
    printf("<2> Controle de funcionário\n");
    printf("<3> Controle de veículos\n");
    printf("<4> Controle de agendamento de locação\n");
    printf("<5> Sair\n");
    //Recebendo a opção escolhida
    int opcao_mp;
    scanf("%d", &opcao_mp);
    //Redirecionando
    switch (opcao_mp){

        case 1:
            goto efetuar_locacao;
            break;

        case 2:
            goto ctrl_funcionario;
            break;

        case 3:
            goto ctrl_veiculos;
            break;

        case 4:
            goto ctrl_agenda;
            break;

        case 5:
            goto fim;

        default:
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto inicio;
    }

    //Configurando o menu de controle de funcionários
    ctrl_funcionario:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-CONTROLE DE FUNCIONÁRIOS-\n");
    printf("<1> Adicionar funcionário\n");
    printf("<2> Editar dados do funcionário\n");
    printf("<3> Excluir um registro de funcionário\n");
    printf("<4> Quadro de funcionários\n");
    printf("<5> voltar\n");
    //Recebendo a opção escolhida
    int opcao_ctrl_funcionario;
    scanf("%d", &opcao_ctrl_funcionario);
    //Direcionando
    switch (opcao_ctrl_funcionario){


        case 1://Adiciona funcionário
            add_funcionario(funcionarios, num_funcionarios);
            goto ctrl_funcionario;

        case 2://Edita funcionário
            system("cls");
            int alvo_editF;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EDIÇÃO DE DADOS DO FUNCIONÁRIO-\n\n");
            for(i = 0; i < num_funcionarios; i++){
                //funcionários com valor nulo não são exibidos
                if(funcionarios[i].salario != 0){
                    printf("<%d> %s\n", i, funcionarios[i].nome);
                }
            }printf("\nDigíte o número do funcionário que deseja editar\n");
            scanf("%d", &alvo_editF);
            edita_funcionario(funcionarios, num_funcionarios, alvo_editF);
            goto ctrl_funcionario;
            break;

        case 3://Deleta funcionário
            system("cls");
            int alvo_delF;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EXCLUSÃO DE FUNCIONÁRIO-\n\n");
            for(i = 0; i < num_funcionarios; i++){
                //funcionários com valor nulo não são exibidos
                if(funcionarios[i].salario != 0){
                    printf("<%d> %s\n", i, funcionarios[i].nome);
                }
            }printf("\nDigíte o número do funcionário que deseja excluir\n");
            scanf("%d", &alvo_delF);
            del_funcionario(funcionarios, num_funcionarios, alvo_delF);
            goto ctrl_funcionario;
            break;

        case 4://Exibe quadro de funcionários
            system("cls");
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-QUADRO DE FUNCIONÁRIOS-\n\n");
            for(i = 0; i < num_funcionarios; i++){
                //funcionários com valor nulo não são exibidos
                if(funcionarios[i].salario != 0){
                    printf("<%d> %s\n", i, funcionarios[i].nome);
                    printf("%s\n", funcionarios[i].cargo);
                    printf("R$%8.2f\n", funcionarios[i].salario);
                    printf("________________________________\n");
                }
            }
            system("pause");
            goto ctrl_funcionario;

        case 5://Volta ao menu principal
            goto inicio;
            break;

        default://Exibe o mesmo menu até recebeu uma opção válida
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto ctrl_funcionario;
    }

    //Configurando o menu de controle de veículos
    ctrl_veiculos:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-CONTROLE DE VEÍCULOS-\n");
    printf("<1> Adicionar veículo\n");
    printf("<2> Editar dados do veículo\n");
    printf("<3> Excluir um registro de veículo\n");
    printf("<4> Quadro de veículos\n");
    printf("<5> voltar\n");
    //Recebendo a opção escolhida
    int opcao_ctrl_veiculos;
    scanf("%d", &opcao_ctrl_veiculos);
    //Direcionando
    switch (opcao_ctrl_veiculos){

        case 1://Adiciona veículo
            add_carro(carros, num_carros);
            goto ctrl_veiculos;

        case 2://Edita veículo
            system("cls");
            int alvo_editC;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EDIÇÃO DE DADOS DO VEÍCULO-\n\n");
            for(i = 0; i < num_carros; i++){
                //carros com valor nulo não são exibidos
                if(carros[i].ano != 0){
                    printf("<%d> %s\n", i, carros[i].modelo);
                }
            }printf("\nDigíte o número do veículo que deseja editar\n");
            scanf("%d", &alvo_editC);
            edita_carro(carros, num_carros, alvo_editC);
            goto ctrl_veiculos;
            break;

        case 3://Deleta veículo
            system("cls");
            int alvo_delC;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EXCLUSÃO DE VEÍCULOS-\n\n");
            for(i = 0; i < num_carros; i++){
                //Veículos com valor nulo não são exibidos
                if(carros[i].ano != 0){
                    printf("<%d> %s\n", i, carros[i].modelo);
                }
            }printf("\nDigíte o número do veículo que deseja excluir\n");
            scanf("%d", &alvo_delC);
            del_carro(carros, num_carros, alvo_delC);
            goto ctrl_veiculos;
            break;

        case 4://Exibe quadro de veículos
            system("cls");
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-QUADRO DE VEÍCULOS-\n\n");
            for(i = 0; i < num_carros; i++){
                //Veículos com valor nulo não são exibidos
                if(carros[i].ano != 0){
                    printf("<%d> %s\n", i, carros[i].modelo);
                    printf("%s\n", carros[i].placa);
                    printf("%d\n", carros[i].ano);
                if(carros[i].alugado == 1){
                    printf("Veículo ocupado\n");
                }else{printf("Veículo disponível\n");}
                    printf("________________________________\n");
                }
            }
            system("pause");
            goto ctrl_veiculos;

        case 5://Volta ao menu principal
            goto inicio;
            break;

        default://Exibe o mesmo menu até recebeu uma opção válida
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto ctrl_veiculos;
    }

    //Configurando o menu de efetuar locação
    efetuar_locacao:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-EFETUAR LOCAÇÃO-\n");
    printf("<1> Clientes\n");
    printf("<2> Cadastrar nova alocação\n");
    printf("<3> Agenda do dia\n");
    printf("<4> Voltar\n");
    //Recebendo a opção escolhida
    int opcao_efetuar_locacao;
    scanf("%d", &opcao_efetuar_locacao);
    //Direcionando
    switch (opcao_efetuar_locacao){


        case 1://Vai ao menu clientes
            goto menu_clientes;
            break;

        case 2:
            system("cls");
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-CADASTRO DE LOCAÇÃO-\n\n");
            ticket_emissao(consumidores, carros, recibos, num_clientes, num_carros, num_tickets);
            goto efetuar_locacao;
            break;

        case 3:
            lista(recibos, num_tickets);
            goto efetuar_locacao;
            break;

            goto efetuar_locacao;
            break;


        case 4://Volta ao menu principal
            goto inicio;
            break;

        default://Exibe o mesmo menu até recebeu uma opção válida
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto efetuar_locacao;
    }

    //Configurando o menu clientes
    menu_clientes:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-CLIENTES-\n");
    printf("<1> Cadastrar cliente\n");
    printf("<2> Editar dados do cliente\n");
    printf("<3> Excluir um registro de cliente\n");
    printf("<4> Quadro de clientes\n");
    printf("<5> voltar\n");
    //Recebendo a opção escolhida
    int opcao_clientes;
    scanf("%d", &opcao_clientes);
    //Direcionando
    switch (opcao_clientes){

        case 1://Adiciona novo cliente
            add_cliente(consumidores, num_clientes);
            goto menu_clientes;

        case 2://Edita cliente
            system("cls");
            int alvo_editCl;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EDIÇÃO DE DADOS DO CLIENTE-\n\n");
            for(i = 0; i < num_clientes; i++){
                //clientes com valor nulo não são exibidos
                if(consumidores[i].idade != 0){
                    printf("<%d> %s\n", i, consumidores[i].nome);
                }
            }printf("\nDigíte o número do cliente que deseja editar\n");
            scanf("%d", &alvo_editCl);
            edita_cliente(consumidores, num_clientes, alvo_editCl);
            goto menu_clientes;
            break;

        case 3://Deleta cliente
            system("cls");
            int alvo_delCl;
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-EXCLUSÃO DE CLIENTE-\n\n");
            for(i = 0; i < num_clientes; i++){
                //Clientes com valor nulo não são exibidos
                if(consumidores[i].idade != 0){
                    printf("<%d> %s\n", i, consumidores[i].nome);
                }
            }printf("\nDigíte o número do cliente que deseja excluir\n");
            scanf("%d", &alvo_delCl);
            del_cliente(consumidores, num_clientes, alvo_delCl);
            goto menu_clientes;
            break;

        case 4://Exibe quadro de clientes
            system("cls");
            printf("**************************************************************************\n");
            printf("*****************************Legal Rent a Car*******************************\n");
            printf("**************************************************************************\n\n");
            printf("-QUADRO DE VEÍCULOS-\n\n");
            for(i = 0; i < num_clientes; i++){
                //Clientes com valor nulo não são exibidos
                if(consumidores[i].idade != 0){
                    printf("<%d> %s\n", i, consumidores[i].nome);
                    printf("%s\n", consumidores[i].cpf);
                    if(consumidores[i].idade != 1){
                    printf("%d\n", consumidores[i].idade);
                    }
                    if(consumidores[i].idade > 59){
                        printf("Cliente com direito a dez por cento de desconto\n");
                    }
                    else if(consumidores[i].parceiro == 1){
                        printf("Cliente com direito a cinco por cento de desconto\n");
                    }
                    printf("________________________________\n");
                }
            }
            system("pause");
            goto menu_clientes;

        case 5://Volta ao menu efetuar locação
            goto efetuar_locacao;
            break;

        default://Exibe o mesmo menu até recebeu uma opção válida
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto menu_clientes;
    }

    //Configurando o menu controle de agendamenro
    ctrl_agenda:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-CONTROLE DE AGENDAMENTO DE LOCAÇÃO-\n\n");
    printf("<1> Realizar baixa e pagamento\n");
    printf("<2> Lista de veículos alugados\n");
    printf("<3> Voltar\n");
    int opcao_ctrl_agenda;
    scanf("%d", &opcao_ctrl_agenda);

        switch (opcao_ctrl_agenda){

        case 1:
            goto ctrl_pagamentos;
            break;

        case 2:
            goto ctrl_alugados;
            break;

        case 3:
            goto inicio;
            break;

        default:
            system("cls");
            printf("Opção Inválida\n");
            system("pause");
            goto ctrl_agenda;
            break;
        }
    //Configurando o menu lista de alugados
    ctrl_alugados:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-LISTA DE VEÍCULOS ALUGADOS-\n\n");
    for (i = 0; i < num_tickets; i++){

            if(recibos[i].ano_loc != 0){
            printf("____________________________________________________________\n");
            printf("CLIENTE: %s\n", recibos[i].cliente_loc.nome);
            printf("____________________________________________________________\n");
            printf("VEÍCULO: %s\n", recibos[i].carro_loc.modelo);
            printf("____________________________________________________________\n");
            printf("DATA DA LOCAÇÃO: %d:%d:%d\n", recibos[i].dia_loc, recibos[i].mes_loc, recibos[i].ano_loc);
            printf("____________________________________________________________\n");
            printf("DATA DA DEVOLUÇÃO: %d:%d:%d\n", recibos[i].dia_dev, recibos[i].mes_loc, recibos[i].ano_loc);
            printf("____________________________________________________________\n");
            }

    }
            system("pause");
            goto ctrl_agenda;

    //Configurando o menu de pagamentos
    ctrl_pagamentos:system("cls");
    printf("**************************************************************************\n");
    printf("*****************************Legal Rent a Car*******************************\n");
    printf("**************************************************************************\n\n");
    printf("-CONTROLE DE BAIXAS-\n\n");
    pagamento(carros, recibos, num_carros, num_tickets);
    system("pause");
    goto ctrl_agenda;

    fim: return 0;
}


