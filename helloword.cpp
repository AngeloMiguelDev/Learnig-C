#include <iostream> //Biblioteca para exibir mensagens
#include <vector>

        /* ----------NAMESPACE---------- */
    namespace primeiro{
        int x = 1;
    }
    namespace segundo{
        int a = 2;
    }

    
    /* ----------TYPEDEF---------- */
    typedef std::vector<std::pair<std::string, int >> pairlist_t;

int main(){
  /* ----------CONCEITOS BÁSICOS---------- */
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
    std::cout << "Oi, " << nome << '\n';

    /* ----------NAMESPACE---------- */
    std::cout << primeiro::x << '\n';

    using namespace segundo;    
    int a = 10;
    std::cout << a;


    using std::cout; //Evita usar o std para cout e string
    using std::string;

    string name = "Pedro";

    cout << "Ric";

    /* ----------TYPEDEF---------- */
    pairlist_t pairlist;

    return 0; 
}