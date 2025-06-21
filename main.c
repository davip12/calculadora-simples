#include <stdio.h>
#include <stdlib.h>

void imprime_menu() {
  printf("=========================================\n");
  printf("      Calculadora Simples\n");
  printf("=========================================\n");
  printf("Selecione uma operação:\n");
  printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
  printf("Opção: ");
}
void entrada(float *a, float *b) {
  printf("\nDigite o primeiro número: ");
  scanf("%f", a);
  printf("\nDigite o segundo número: ");
  scanf("%f", b);
}
void limpar_tela() {
    system("cls");
}
int main() {
  int bandeira_1 = 1;
  int bandeira_2 = 1;
  
  do {
    limpar_tela();
    imprime_menu();
    int opcao = -1;
    scanf("%d", &opcao);

    bandeira_2 = 1;
    float a, b = 0;
    switch (opcao) {
      case 1:
        entrada(&a, &b);
        printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a+b);
        break;
      case 2:
        entrada(&a, &b);
        printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a-b);
        break;
      case 3:
        entrada(&a, &b);
        printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a*b);
        break;
      case 4:
        entrada(&a, &b);
        if (b == 0) {
          printf("Erro: divisão por zero.\n");
        } else {
          printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a/b);
        }
        break;
      case 5:
        bandeira_1 = 0;
        bandeira_2 = -1;
        break;
      default:
        printf("\nEscolha uma opção válida.");
        bandeira_2 = 0;
        break;
    }
    if (bandeira_2 == 1) {
      char c;
      printf("Deseja realizar outra operação? (s/n):\n");
      scanf(" %c", &c);
      if (c == 'n') {
        bandeira_1 = 0;
      }
    }
  
  } while (bandeira_1);

  printf("Obrigado por usar a Calculadora! Até a próxima.");
}
