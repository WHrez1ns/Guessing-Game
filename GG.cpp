#include <iostream>
using namespace std;

int main()
{
    const int NUMERO_SECRETO = 50;
    int chute;

    std::cout << "########################################" << std::endl;
    std::cout << "#   Bem-vindo ao jogo da adivinhacao   #" << std::endl;
    std::cout << "########################################" << std::endl
              << std::endl;

    cout << "O numero secreto e: **\n";

    cout << "Qual seu chute? ";
    std::cin >> chute;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if (acertou)
    {
        cout << "Parabens! Voce acertou o numero secreto!\n";
    }
    else if (maior)
    {
        cout << "O valor do numero secreto e menor...\n";
        cout << "Tente novamente\n";
    }
    else
    {
        cout << "O valor do numero secreto e maior...\n";
        cout << "Tente novamente\n";
    }

    return 0;
}
