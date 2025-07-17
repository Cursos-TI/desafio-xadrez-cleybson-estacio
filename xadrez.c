#include <stdio.h>

// Função que simula o movimento da Torre
void moverTorre(int casas)
{
  printf("Movimento da Torre:\n");
  for (int i = 1; i <= casas; i++)
  {
    printf("Direita\n");
  }
  printf("\n");
}

// Função que simula o movimento do Bispo
void moverBispo(int casas)
{
  printf("Movimento do Bispo:\n");
  int i = 0;
  while (i < casas)
  {
    printf("Cima\n");
    printf("Direita\n");
    i++;
  }
  printf("\n");
}

// Função que simula o movimento da Rainha
void moverRainha(int casas)
{
  printf("Movimento da Rainha:\n");
  int i = 0;
  do
  {
    printf("Esquerda\n");
    i++;
  } while (i < casas);
  printf("\n");
}

// Função principal
int main()
{
  int casasTorre = 5;
  int casasBispo = 5;
  int casasRainha = 8;

  moverTorre(casasTorre);
  moverBispo(casasBispo);
  moverRainha(casasRainha);

  return 0;
}
