#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstring>
#define n 1000

using namespace std;

int fim, inicio;

struct fila
{
    string name, empresa, setor;
    int id;
};

int menu()
{
    int op;
    cout << "---------------------------------" << endl;
    cout << "       Fila de impressao         " << endl;
    cout << "---------------------------------" << endl;
    cout << " 0 - Finalizar" << endl;
    cout << " 1 - Inserir" << endl;
    cout << " 2 - Excluir" << endl;
    cout << " 3 - Consultar" << endl;
    cout << " 4 - Exibir fila" << endl;
    cout << " 5 - Executar fila" << endl;
    cout << " 6 - Suspresa" << endl;
    cin >> op;
    return op;
}

void criar()
{
    inicio = 0;
    fim = -1;
}

int vazio ()
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
int cheio ()
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
int tamanho ()
{
    return fim+1;
}

void preenche(struct fila *people, int cont)
{
    cout << " Digite o nome do funcionario: ";
    cin.ignore();
    getline(cin,people[cont].name);
    cout << " Digite o ID do funcionario: ";
    cin >> people[cont].id;
    cout << " Digite a Empresa: ";
    cin.ignore();
    getline(cin,people[cont].empresa);
    cout << " Digite o setor da empresa: ";
    cin.ignore();
    getline(cin,people[cont].setor);
}
void exibir(struct fila *people, int cont)
{
    cout << " Nome: " << people[cont].name << endl;
    cout << " ID: " << people[cont].id << endl; 
    cout << " Empresa: " << people[cont].empresa << endl;
    cout << " Setor: " << people[cont].setor << endl;
}
int exibirtudo(struct fila *people)
{
    int i;
    if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0; 
    }
    else
    {
        for(i=0; i<tamanho(); i++)
        {
            exibir(people, i);
            cout << endl;
        }
        return 1;        
    }
}
int inserirfim(struct fila *people)
{
    if(cheio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Cheia           " << endl;
        cout << "---------------------------------" << endl;
        return 0;
    }
    else
    {
        fim++;
        preenche(people, fim);
        return 1;
    }
}
int excluirinicio(struct fila *people)
{
    int i;
    if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0;
    }
    else
    {
        for(i=0;i<fim;i++)
        {
            people[i] = people[i+1];
        }
        fim--;
        return 1;
    }
}
int busca_valor(struct fila *people)
{
    string procura;
    int i;
    if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0;
    }
    else
    {
        cout << "Digite o nome do funcionario procurado: ";
        cin.ignore();
        getline(cin,procura);
        for (i=0;i<fim+1;i++)
        {
            if(procura == people[i].name)
            {
                cout << "O Funcionario " << procura << " esta na posicao " << i+1 << " da fila" << endl;
                break;
            }
        }
        return 1;
    }
}
int buscaposicao(struct fila *people)
{
    int posicao;
     if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0;
    }
    else
    {
        cout << "Que posicao deseja encontrar: ";
        cin >> posicao;
        exibir(people, posicao-1);
    }
    
}
int executarfila(struct fila *people)
{
    int i, j;
     if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0;
    }
    else
    {
        system("cls");
        while (fim>=inicio)
        {
            exibirtudo(people);    
            _sleep(3000);
            system("cls");
            excluirinicio(people);
        }
        return 1;
    }
}
int menuconsulta(struct fila *people)
{
    int op;
    if(vazio())
    {
        cout << "---------------------------------" << endl;
        cout << "            Fila Vazia           " << endl;
        cout << "---------------------------------" << endl;
        return 0; 
    }
    else
    {
        cout << " 1 - Mostrar inicio" << endl;
        cout << " 2 - Mostrar final" << endl;
        cout << " 3 - Busca por dados" << endl;
        cout << " 4 - Busca por posicao" << endl;
        cin >> op;
        switch (op)
        {
            case 1: exibir(people, inicio); break;
            case 2: exibir(people, fim); break;
            case 3: busca_valor(people); break;
            case 4: buscaposicao(people); break;
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























