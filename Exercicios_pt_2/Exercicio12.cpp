#include <stdio.h>

int main(void){

  float nota1, nota2, nota3, nota4, media;

  fflush(stdin);
  printf("Insira a nota 1: ");
  scanf("%f", &nota1);

  fflush(stdin);
  printf("Insira a nota 2: ");
  scanf("%f", &nota2);

  fflush(stdin);
  printf("Insira a nota 3: ");
  scanf("%f", &nota3);

  fflush(stdin);
  printf("Insira a nota 4: ");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4)/4;

  printf("Média: %.1f \n", media);

  if (media >= 7)
    printf("Aluno aprovado!\n");

  if (media < 7 && media >= 3){
    printf("Aluno ficou de exame!\n");
   
    float exame;

    fflush(stdin);
    printf("Insira a nota do exame: ");
    scanf("%f", &exame);

    if (exame >= 7)
      printf("Aluno passou no exame. APROVADO!\n");
    else
      printf("Aluno reprovou no exame. REPROVADO\n");
  }


  if (media < 3)
    printf("Aluno reprovado!\n");





  return 0;
}