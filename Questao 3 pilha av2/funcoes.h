#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define n 1000

using namespace std;

int fim;

struct pilha{
    string pratos;
};
int menu()
{
    int op;
    cout << "---------- Menu-----------" << endl;
    cout << "1- Inserir prato" << endl;
    cout << "2- Excluir prato" << endl;
    cout << "3- exibir primeiro prato" << endl;
    cout << "4- exibir ultimo prato" << endl;
    cout << "5- exibir todos os pratos" << endl;
    cout << "6- Busca a posicao de um prato especifico" << endl;
    cout << "7- Executar a pilha" << endl;
    cout << "8- Surpresa ja nao mais tao surpresa" << endl;
    cin >> op;

    return op;
}
void criar()
{
    fim =-1;
}
int vazio()
{
    if(fim==-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int cheio()
{
    if(fim == n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int tamanho()
{
    return fim;
}
int inserirfim(struct pilha *prato)
{
    if(cheio())
    {
        return 0;
    }
    else
    {
        fim++;
        prato[fim].pratos = "*-_-*";

        return 1;
    }
}
int excluirfim()
{
    if(vazio())
    {
        return 0;
    }
    else
    {
        fim--;
    }
}
int exibirinicio(struct pilha *prato)
{
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << endl;
        cout << "          " << prato[0].pratos << 1 << endl;
        cout << endl;
        return 1;
    }
}
int exibirfim(struct pilha *prato)
{
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << endl;
        cout << "          " << prato[fim].pratos << fim+1 << endl;
        cout << endl;
        return 1;
    }
}
int exibirtudo(struct pilha *prato)
{
    int i;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << endl;
        for(i=fim;i>=0;i--)
        {
            cout << "          "<< prato[i].pratos << i+1 << endl;
        }    
        cout << endl;
        return 1;
    }
}
int buscaposicao(struct pilha *prato)
{
    int op;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << "Posicao a ser procurada: ";
        cin >> op;
        if (op > 0 && op <=fim)
        {
            cout << prato[op].pratos << op << endl;
        }
        return 1;
    }
}
int executarpillha(struct pilha *prato)
{
    if(vazio())
    {
        return 0;
    }
    else
    {
        system("cls");
        while (fim>0)
        {
            exibirtudo(prato);
            _sleep(2000);
            system("cls");
            excluirfim();
        }
        return 1;
    }
}
void surpresa()
{
 printf 
	(
          "______*#######* \n"
          "____*##########* \n"
          "__*############## \n"
          "__################ \n"
          "_##################_________*####* \n"
          "__##################_____*########## \n"
          "__##################___*############# \n"
          "___#################*_###############* \n"
          "____#################################* \n"
          "______############################### \n"
          "_______############################# \n"
          "________=########################## \n"
          "__________######################## \n"
          "___________*##################### \n"
          "____________*################## \n"
          "_____________*############### \n"
          "_______________############# \n"
          "________________########## \n"
          "________________=#######* \n"
          "_________________###### \n"
          "__________________#### \n"
          "__________________### \n"
          "___________________# \n"
	);

}










