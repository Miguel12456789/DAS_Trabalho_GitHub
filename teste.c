#include <stdio.h>

// Definição da classe bombaCombustível
typedef struct {
    char tipoCombustivel[20];
    float valorLitro;
    float quantidadeCombustivel;
} bombaCombustivel;

// Método para abastecer por valor
void abastecerPorValor(bombaCombustivel *bomba, float valor) {
    float litros = valor / bomba->valorLitro;
    bomba->quantidadeCombustivel -= litros;
    printf("Foram abastecidos %.2f litros\n", litros);
}

// Método para abastecer por litro
void abastecerPorLitro(bombaCombustivel *bomba, float litros) {
    float valor = litros * bomba->valorLitro;
    bomba->quantidadeCombustivel -= litros;
    printf("O valor a ser pago é R$ %.2f\n", valor);
}

// Método para alterar o valor do litro do combustível
void alterarValor(bombaCombustivel *bomba, float novoValor) {
    bomba->valorLitro = novoValor;
}

// Método para alterar o tipo do combustível
void alterarCombustivel(bombaCombustivel *bomba, char novoCombustivel[20]) {
    strcpy(bomba->tipoCombustivel, novoCombustivel);
}

// Método para alterar a quantidade de combustível restante na bomba
void alterarQuantidadeCombustivel(bombaCombustivel *bomba, float novaQuantidade) {
    bomba->quantidadeCombustivel = novaQuantidade;
}

int main() {
    // Criação de uma instância da classe bombaCombustível
    bombaCombustivel bomba;
    
    // Definição dos atributos da bomba
    strcpy(bomba.tipoCombustivel, "Gasolina");
    bomba.valorLitro = 4.50;
    bomba.quantidadeCombustivel = 1000;
    
    // Exemplo de utilização dos métodos
    abastecerPorValor(&bomba, 50);
    abastecerPorLitro(&bomba, 10);
    alterarValor(&bomba, 5);
    alterarCombustivel(&bomba, "Etanol");
    alterarQuantidadeCombustivel(&bomba, 500);
    
    return 0;
}
