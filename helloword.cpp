#include <iostream>

int main(){
    std::cout << "Hello Word!" << std::endl; /* endl = end Line = Fim da linha*/
    std::cout << "I'm Angelo!" << '\n'; /*c= caractere => out= saida => cout = saida de caracteres | endl = '\n'*/
   
 //Operações
   int x; 
   x = 8;
   int y = 6;
   int soma = x + y; 

   std::cout << x << '\n';
   std::cout << y << '\n';
   std::cout << soma << '\n';

   //Declarar String
    std::string nome = "Miguel";
    std::cout << "Oi, " << nome;

    return 0; 
}