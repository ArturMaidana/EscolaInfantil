// Alunos: Gustavo Capistrano e Artur Guilherme
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int mes_cont, cont, idade;
  char responsavel[20];
  char nome[20];
  char turma[20];
  int dia, opcao;
  opcao = 1;
  while (opcao == 1) {

    printf("Digite o nome do responsável:\n");
    scanf("\n%s", responsavel);
    printf("Digite o nome da criança:\n");
    scanf("\n%s", nome);
    printf("Digite o ano de nascimento da criança:\n");
    scanf("%d", &idade);
    printf("Digite o mês de nascimento da criança:\n");
    scanf("%d", &mes_cont);
    printf("Digite o dia do nascimento da criança:\n");
    scanf("%d", &dia);
    // idade = 2022;
    // mes_cont = 4;
    cont = 0;
    int v = 0;
    // contador dos meses até o início das aulas (15/01)
    do {
      mes_cont = mes_cont + 1;
      cont++;
      // printf("cont-> %d\nmes-> %d", cont, mes_cont);

      if (mes_cont == 12) {
        mes_cont = 0;
      }
    } while (mes_cont != 1);

    if ((idade == 2024) || (idade == 2023)) {
      if (cont >= 6) {
        strcpy(turma, "Berçario I");
        // printf("Criança vai pro Berçário I");

      } else {
        printf("Crianças com menos de 6 meses não são recebidas na escola");
        v = 1;
      }
    } else if (idade == 2022) {
      cont = cont + 14;
      if (cont >= 24) {
        strcpy(turma, "Berçario II");
        // printf("Vai pro berçario ii");
      } else {
        strcpy(turma, "Berçario I");
        // printf("vai pro berçario I");
      }
    } else if (idade == 2021) {
      cont = cont + 26;
      if (cont >= 36) {
        strcpy(turma, "Maternal I");
        // printf("vai pro maternal I");
      } else {
        strcpy(turma, "Berçario II");
        // printf("vai pro berçário II");
      }
    } else if (idade == 2020) {
      cont = cont + 38;
      if (cont >= 48) {
        strcpy(turma, "Maternal II");
        // printf("vai pro maternal II");
      } else {
        strcpy(turma, "Maternal I");
        // printf("vai pro maternal I");
      }
    } else if (idade == 2019) {
      cont = cont + 50;
      if (cont >= 60) {
        printf(
            "crianças acima de 4 anos devem ser encaminhadas pra outra escola");
        v = 1;
      } else {
        strcpy(turma, "Maternal II");
        // printf("vai pro maternal II");
      }
    } else if (idade <= 2018) {
      printf(
          "crianças acima de 4 anos devem ser encaminhadas pra outra escola");
      v = 1;
    } else {
      printf("Inserção de dados inválida");
      v = 1;
    }
    if (v == 0) {
      printf("\nPrezado sr(a), a criança %s será encaminhada para a turma %s",
             nome, turma);
    }
    printf("\n\nDigite:\n1.Cadastrar nova criança\n2.Sair");
    scanf("%d", &opcao);
  }
  printf("\nObrigado e até logo!");
  return 0;
}
