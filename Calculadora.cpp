#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void operacoesbasicas();
void tabuada();
main()
{
    setlocale(LC_ALL,"Portuguese");
    int op;
    system("cls");
    do{
        cout<<" - Calculadora de Console! - " << endl;
        cout<<" Escolha Uma das Op��es Abaixo: " << endl;
        cout<<" 1 - Opera��es B�sicas ( + - * / ) : " << endl;
        cout<<" 2 - Tabuada: " << endl;
        cout<<" 0 - Sair " << endl;
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 0:
            cout<<" O Programa Foi Encerrado!" << endl;
            getchar();
            break;
        case 1:
            operacoesbasicas();
            getchar();
            break;
        case 2:
            tabuada();
            getchar();
            break;
        }
    }while(op != 0);
}
void operacoesbasicas(){
    char op;
    int v1 = 0, v2 = 0, resultado = 0;
    cout<<"Informe o Primeiro Valor: " << endl;
    cin>>v1;
    fflush(stdin);
    cout<<"Informe o Segundo Valor: " << endl;
    cin>>v2;
    fflush(stdin);
    cout<<" Escolha a Opera��o que Deseja Realizar: " << endl;
    cin>>op;
    fflush(stdin);
    switch(op)
    {
        case '+':
            cout<<" Opera��o Escolhida: + ! " << endl;
            resultado = (v1 + v2);
            cout<<" A soma de " << v1 << " + " << v2 << " �: " << resultado << endl;
            getchar();
            break;
        case '-':
            cout<<" Opera��o Escolhida: - ! " << endl;
            resultado = (v1 - v2);
            cout<<" A subtra��o de " << v1 << " - " << v2 << " �: " << resultado << endl;
            getchar();
            break;
        case '*':
            cout<<" Opera��o Escolhida: * ! " << endl;
            resultado = (v1 * v2);
            cout<<" A multiplica��o de " << v1 << " * " << v2 << " �: " << resultado << endl;
            getchar();
            break;
        case '/':
            int restodivisao = 0;
            cout<<" Opera��o Escolhida: / ! " << endl;
            resultado = (v1 / v2);
            restodivisao = (v1 % v2);
            cout<<" A divis�o de " << v1 << " / " << v2 << " �: " << resultado << " e o resto da divis�o tem resultado: " << restodivisao << endl;
            getchar();
            break;
    }
}
void tabuada(){
    int tab = 0,res = 0;
    cout<<"Informe a Tabuada que Deseja C�lcular: " << endl;
    cin>>tab;
    fflush(stdin);
    for(int i = 1;i < 11;i++){
        res = (tab * i);
        cout<< tab << " * " << i << " = " << res << endl;
    }
}
