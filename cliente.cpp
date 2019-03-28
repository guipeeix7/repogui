#include "cliente.hpp"
#include <iostream>
#include <string> //Nao e necessario incluir essa biblioteca, pois ja esta presente em cliente.hpp, porem inclui la aqui e boa pratica de pragramacao.


Cliente::Cliente(){
        cout<<"Cliente Criado!" << endl;
        printf("Cliente Criado!"); //A quantidade de binarios usando o printf e menor do que usando o cout
        nome = "";
        CPF = 0;
        telefone = "0000";
        email = "";
        endereco = "";
        genero = "";
}

Cliente::~Cliente(){
        cout <<"Cliente destruido!"<<endl;
}

string Cliente :: get_nome(){
        return nome;
}
string Cliente :: set_nome(string nome){
        this->nome = nome;//A variavel nome sera gravada na classe escrita em hpp
        //Pedir pro professor explicar de novo essa parte
}
long Cliente::get_cpf(){
        return cpf;
}
void Cliente::set_cpf(long cpf){
        this-> cpf = cpf;
}
string Cliente::get_email(){
        retun email;
}
void Cliente::set_email(string email){
        this-> email = email;
}
String Cliente::get_telefone(){
        return telefone;
}
void Cliente::set_telefone(string telefone){
        this-> telefone = telefone;
}
string Cliente::set_endereco(){
        return endereco;
}
void string Cliente::get_endereco(string endereco){
        this-> endereco = endereco;
}
string Cliente::set_genero(){
        return genero;
}
void string Cliente::get_genero(string genero){
        this-> genero = genero;
}

