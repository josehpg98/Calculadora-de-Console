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
        cout<<" Escolha Uma das Opções Abaixo: " << endl;
        cout<<" 1 - Operações Básicas ( + - * / ) : " << endl;
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
    cout<<" Escolha a Operação que Deseja Realizar: " << endl;
    cin>>op;
    fflush(stdin);
    switch(op)
    {
        case '+':
            cout<<" Operação Escolhida: + ! " << endl;
            resultado = (v1 + v2);
            cout<<" A soma de " << v1 << " + " << v2 << " é: " << resultado << endl;
            getchar();
            break;
        case '-':
            cout<<" Operação Escolhida: - ! " << endl;
            resultado = (v1 - v2);
            cout<<" A subtração de " << v1 << " - " << v2 << " é: " << resultado << endl;
            getchar();
            break;
        case '*':
            cout<<" Operação Escolhida: * ! " << endl;
            resultado = (v1 * v2);
            cout<<" A multiplicação de " << v1 << " * " << v2 << " é: " << resultado << endl;
            getchar();
            break;
        case '/':
            int restodivisao = 0;
            cout<<" Operação Escolhida: / ! " << endl;
            resultado = (v1 / v2);
            restodivisao = (v1 % v2);
            cout<<" A divisão de " << v1 << " / " << v2 << " é: " << resultado << " e o resto da divisão tem resultado: " << restodivisao << endl;
            getchar();
            break;
    }
}
void tabuada(){
    int tab = 0,res = 0;
    cout<<"Informe a Tabuada que Deseja Cálcular: " << endl;
    cin>>tab;
    fflush(stdin);
    for(int i = 1;i < 11;i++){
        res = (tab * i);
        cout<< tab << " * " << i << " = " << res << endl;
    }
}
