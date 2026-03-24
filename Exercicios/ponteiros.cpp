#include <stdio.h>
int main()
{
    struct Pessoa{
        const char *nome;
        int idade;
    }pessoa;

    struct Pessoa *joao = &pessoa;
    
    //Com o operador "->"
    joao->nome  = "Joao da Silva";
    joao->idade = 25;

    //Sem o operador "->"
    (*joao).nome  = "Joao da Silva";
    (*joao).idade = 25;	


    //Similar a declaração de função, mas com um parenteses a mais
    int (*puts2)(const char*) = puts;
    
    puts("Testando puts");
    puts2("Testando outro puts"); //Igual a chamada de função normal

}
