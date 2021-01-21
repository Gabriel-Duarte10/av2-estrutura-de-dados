#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
#define n 1000

using namespace std;

int main()
{
    struct fila usuario[n];
    int op, op2;

    criar();
        cout << "---------------------------------" << endl;
        cout << " 0 = Finalizar" << endl;
        cout << " 1 - Inserir" << endl;
        cout << " 2 - Excluir" << endl;
        cout << " 3 - Consultar" << endl;
        cout << " 4 - Exibir tudo" << endl;
        cout << " 5 - Surpresa" << endl;
        cout << ": ";
        cin >> op;
        cout << "---------------------------------" << endl;
        system("cls");
    do
    {
        switch (op)
        {
        case 0: return 1; break;
        case 1: cout << "---------------------------------" << endl;
                cout << " 1 - Inserir no Inicio" << endl;;
                cout << " 2 - Inserir no final" << endl;
                cout << " 3 - Inserir no Meio" << endl;
                cout << ": ";
                cin >> op2;
                cout << "---------------------------------" << endl;
                if(op2==1)
                {
                    inseririnicio(usuario);
                }
                else
                {
                    if(op2==2)
                    {
                        inserirfim(usuario);
                    }
                    else
                    {
                        if(op2==3)
                        {
                            inserirmeio(usuario);
                        }
                    }
                }
                break;
        case 2: cout << "---------------------------------" << endl;
                cout << " 1 - Excluir no Inicio" << endl;
                cout << " 2 - Excluir no final" << endl;
                cout << " 3 - Excluir no Meio" << endl;
                cout << ": ";
                cin >> op2;
                cout << "---------------------------------" << endl;
            
                if(op2==1)
                {
                    excluirinicio(usuario);
                }
                else
                {
                    if(op2==2)
                    {
                        excluirfim(usuario);
                    }
                    else
                    {
                        if(op2 == 3)
                        {
                            excluirmeio(usuario);
                        }
                    }    
                }
                break;
            
    case 3: cout << "---------------------------------" << endl;
            cout << " 1 - Mostrar Inicio" << endl;
            cout << " 2 - Mostrar final" << endl;
            cout << " 3 - Procurar posicao pelo nome" << endl;
            cout << " 4 - Exibir dado de uma posicao" << endl; 
            cout << ": ";
            cin >> op2;
            cout << "---------------------------------" << endl;
            if(op2==1)
            {
                mostrarinicio(usuario);
            }
            else
            {
                if(op2 == 2)
                {
                    mostrarfinal(usuario);
                }
                else
                {
                    if(op2==3)
                    {
                        dadoposicao(usuario);
                    }
                    else
                    {
                        if(op2==4)
                        {
                            posicaodado(usuario);
                        }
                    }
                }
            }
            break;
    case 4: exibirtudo(usuario); break;
    case 5: surpresa(); break;
        }
        system("pause");
        system("cls");
        cout << "---------------------------------" << endl;
        cout << " 0 = Finalizar" << endl;
        cout << " 1 - Inserir" << endl;
        cout << " 2 - Excluir" << endl;
        cout << " 3 - Consultar" << endl;
        cout << " 4 - Exibir Tudo" << endl;
        cout << " 5 - Surpresa" << endl;
        cout << ": ";
        cin >> op;
        cout << "---------------------------------" << endl;
    } while (op > 0 && op < 6);    
    return 0;
}