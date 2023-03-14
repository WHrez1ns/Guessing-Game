// saída do programa (imprimir): é basicamente tudo que ele escreve quando você roda ele
// saída em inglês => output | saída em c++ => cout 
// std:: para funções nativas do programa | ex: std::cout (print)

// precisa sempre terminar as linhas do programa com ;

// Compilar o programa: g++ [arquivo] -o [nome do programa].out

#include<iostream> // Biblioteca que trata o fluxo de entrada e saída do código | Input, Output, Fluxo => iostream
using namespace std; // falando para o computador que vamos utilizar funções do bloco std, evitando de escrevermos a sintaxe padrão de colocar o std:: na frente

int main(){ // função principal: ela guarda todo o código que vai ser executado no seu programa
    std::cout << "########################################" << std::endl;
    std::cout << "#   Bem-vindo ao jogo da adivinhacao   #" << std::endl;
    std::cout << "########################################" << std::endl; 
}

// << std::endl | end line => endl | Pula linha