#include <iostream> 

class pessoa{
    public:
    std::string nome;
    std::string sobrenome;

    void nomecompleto() {
        std::cout << nome << " " << sobrenome <<std::endl;
    }
};

int main(){
    pessoa p1;
    p1.nome = "David";
    p1.sobrenome = "Kauã";
    p1.nomecompleto();

    return 0;
}