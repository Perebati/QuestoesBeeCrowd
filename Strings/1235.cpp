#include <iostream>
#include <string>

std::string desembaralharString(const std::string& linha) {
    std::string desembaralhada;
    int meio = linha.length() / 2;
    
    // Percorre a metade direita da linha, adicionando os caracteres na ordem correta
    for (int i = meio - 1; i >= 0; i--) {
        desembaralhada += linha[i];
    }
    
    // Percorre a metade esquerda da linha, adicionando os caracteres na ordem correta
    for (unsigned int i = linha.length() - 1; i >= meio; i--) {
        desembaralhada += linha[i];
    }
    
    return desembaralhada;
}

int main() {
    int casos;
    std::cin >> casos;
    std::cin.ignore(); // Ignora o caractere de quebra de linha após a leitura do número de casos
    
    for (int i = 0; i < casos; i++) {
        std::string linha;
        std::getline(std::cin, linha);
        
        std::string desembaralhada = desembaralharString(linha);
        std::cout << desembaralhada << std::endl;
    }
    
    return 0;
}