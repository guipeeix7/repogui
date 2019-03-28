
#ifndef CLIENTE_HPP_  //Se nao tiver uma variavel CLIENTE_HPP
#define CLIENTES_HPP  //Defina CLIENTE_HPP
//Em todo .h deve existir este trecho de codigo para evitar que o codigo entre em conflito de varriavel ou que dobre o tempo de processamento
//
//Como o Processador le esta parte ? Ele le como se fosse um booleano

using namespace std;

#include <string> //nao e necessario inserir o .h em c++
                  //`#` E uma diretiva de pre processamento do compilador

class Cliente{
private:
        //ATRIBUTOS
        //string get_endereco(void);
        //void set_endereco(string endereco);
        //string set_genero(void);
        //void set_genero(string genero);

        string nome;
        long CPF;  //Por que o long? O C++ omite o int
        string email,
               telefone,
               endereco,
                genero;
public:
        //METODOS (Funcionalidade do meu cliente)
        Cliente(); //MEtodo construtor, este metodo deve te o mesmo nome da classe
        ~Cliente(); //Metodo destrutor, este metodo destroi o objeto

                //Metodos acessores,(Alterar o meu cliente) Metodo Escrita X Leitura
                //Metodo de leitura para ler um nome
        string get_nome(void);
                                        //Geralmente o set_nome tem retorno void                                                                                                                                                                                                                                                                                                                              
        void set_nome(string nome);
        long get_cpf();
        void set_cpf();
        void set_cpf(long cpf);
        string get_email();
        void set_email(string email);
        string get_telefone();
        void set_telefone(string telefone);
        string get_endereco();
        void set_endereco(string endereco);
        string set_genero(void);
        void set_genero(string genero);

        //OUTROS METODOS
        void ligar();

};
#endif
