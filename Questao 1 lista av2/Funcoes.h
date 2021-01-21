#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#define n 1000

using namespace std;
int fim, inicio;

struct fila
{
    string name;
    int idade;
    char sexo;
};

void criar()
{
    inicio = 0;
    fim = -1;
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
    return fim+1;
}
void preenche(struct fila *people, int cont)
{
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin,people[cont].name);
    cout << "Digite a idade: ";
    cin >> people[cont].idade;
    cout << "Digite o sexo M ou F: ";
    cin >> people[cont].sexo;
}
int inseririnicio(struct fila *people)
{
    int cont=0, i;
    if(cheio())
    {
        return 0;
    }
    else
    {
        for(i=fim+1;i>inicio;i--)
        {
            people[i] = people[i-1];
        }
        preenche(people, cont);
        fim++;
        return 1;
    }
}
int inserirfim(struct fila *people)
{
    if(cheio())
    {
        return 0;
    }
    else
    {
        fim++;
        preenche(people, fim);
        return 1;
    }
}
int inserirmeio(struct fila *people)
{
    int cont, i;
    if(cheio())
    {
        return 0;
    }
    else
    {
        cout << "Deseja inserior a onde: ";
        cin >> cont;
        if (cont-1 > inicio && cont-1 < fim)
        {
            for(i=fim+1;i>cont-1;i--)
            {
                people[i] = people[i-1];
            }
            preenche(people, cont-1);
            fim++;
            return 1;
        }
    }
}
int exibirtudo(struct fila *people)
{
    int i;
    if(vazio())
    {
        return 0;
    }
    else
    {
        for(i=0;i<tamanho();i++)
        {
            cout << "Nome: " << people[i].name << endl;
            cout << "Idade: " << people[i].idade << endl;
            cout << "sexo: " << people[i].sexo << endl;
        }
        return 1;    
    }  
}
int excluirinicio(struct fila *people)
{
    int i;
    char op;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << "Tem certeza que deseja apagar os dados do(a) " << people[0].name << endl;
        cout << "S/N: ";
        cin >> op;
        if(op =='s' || op == 'S')
        {
            for(i=0;i<fim;i++)
            {
                people[i] = people[i+1];
            }
            fim--;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int excluirfim(struct fila *people)
{
    char op;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << " Deseja apagar os dados do(a) " << people[fim].name << endl;
        cout << " S/N: ";
        cin >> op;
        if(op =='s' || op == 'S')
        {
            fim--;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int excluirmeio(struct fila *people)
{
    int i, op;
    char ap;
    if(vazio())
    {
        return 0;        
    }
    else
    {
        cout << "Qual posicao deseja apagar: ";
        cin >> op;
        if(op-1 > inicio && op-1 < fim)
        {
            cout << "Deseja apagar os dados do(a) " << people[op-1].name << " ?" << endl;
            cout << "S/N: ";
            cin >> ap;
        }
        else
        {
            cout << "posicao nao encontrada";
            return 0;
        }
        if(ap=='s' || ap == 'S')
        {
            if (op-1 > inicio && op-1 < fim)
            {
                for(i=op-1;i<fim;i++)
                {
                    people[i]= people[i+1];
                }
                fim--;
                return 1;
            }     
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
}
int mostrarinicio(struct fila *people)
{
    if(vazio())
    {
        return 0;
    }
    else
    {   
        cout << "Nome: " << people[inicio].name << endl;
        cout << "Idade: " << people[inicio].idade << endl;
        cout << "sexo: " << people[inicio].sexo << endl;
        return 1;
    }
}
int mostrarfinal(struct fila *people)
{
    if(vazio())
    {
        return 0;
    }
    else
    {   
        cout << "Nome: " << people[fim].name << endl;
        cout << "Idade: " << people[fim].idade << endl;
        cout << "sexo: " << people[fim].sexo << endl;
        return 1;
    }
}
int dadoposicao(struct fila *people)
{
    int i;
    string op;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << "procurar posicao pelo nome: ";
        cin.ignore();
        getline(cin,op);
        for(i=inicio;i<=fim;i++)
        {
            if(people[i].name == op)
            {
                cout << "O " << people[i].name << " esta na posicao: " << i+1 << endl;
                return 1;
            }
        }    
        cout << "Usuario nao encontrado" << endl;
        return 0;
    }
}
int posicaodado (struct fila *people)
{
    int i, op;
    if(vazio())
    {
        return 0;
    }
    else
    {
        cout << "Digite a posicao a ser procurada: ";
        cin >> op;
        if(op>=inicio && op<=fim+1)
        {
            cout << "Nome: " << people[op-1].name << endl;
            cout << "Idade: " << people[op-1].idade << endl;
            cout << "sexo: " << people[op-1].sexo << endl;
            return 1;
        }   
        else
        {
            cout << "Posicao nao encontrada" << endl;
            return 0;
        }
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














