#include <iostream>
#include "cliente.hpp"

int main(int argc, char **argv){ //argc e argv sao parametros

        Cliente cliente1; //Usando a classe sem entrar nela.
        cliente1.set_nome("Joao");
        cliente1.set_cpf("03107625109");
        cliente1.set_email("guipeix@gmail.com");
        cliente1.set_telefone("+55 (61) 991675904");
        cliente1.set_endereco("Rua 1, Casa 2");
        cliente1.set_genero("Masculino");
        cliente1.ligar();

        cout <<"Nome" << cliente1.get_nome() << endl;
        cout <<"CPF" << cliente.get_cpf() << endl;
        cout << "Email" << cliente.get_email() << endl;
        cout << "Telefone" << cliente.get_telefone() <<endl;
        cout << "Endereco" << cliente.get_endereco() <<endl;
        cout << "Genero" << cliente.get_genero() <<endl;

        void return 0;
}
