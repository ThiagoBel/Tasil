#include <iostream>
#include <string>
#include "Tasil/Tasil.h"

int main() {
    std::string user;
    std::string chave = "\n~> ";
    while (true) {
        std::cout << chave;
        getline(std::cin, user);

        if (user.find("-") == 0) {
            std::string comando = user.substr(1);
            system(comando.c_str());
        } else {
            autorun(user);
        }
    }
    return 0;
}