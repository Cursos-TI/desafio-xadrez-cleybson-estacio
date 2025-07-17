#include <stdio.h>

// Torre com recursividade
void moverTorre(int casas)
{
  if (casas == 0)
  {
    printf("\n");
    return;
  }
  printf("Direita\n");
  moverTorre(casas - 1);
}

// Bispo com recursividade + loops aninhados
void moverBispo(int casas)
{
  if (casas == 0)
  {
    printf("\n");
    return;
  }

  for (int i = 0; i < 1; i++)
  {
    printf("Cima\n");
    for (int j = 0; j < 1; j++)
    {
      printf("Direita\n");
    }
  }

  moverBispo(casas - 1);
}

// Rainha com recursividade
void moverRainha(int casas)
{
  if (casas == 0)
  {
    printf("\n");
    return;
  }
  printf("Esquerda\n");
  moverRainha(casas - 1);
}

// Cavalo com loops aninhados complexos, 2x cima + 1x direita
void moverCavalo(int movimentos)
{
  printf("Movimento do Cavalo:\n");

  int movimentosFeitos = 0;
  while (1)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Cima\n");
    }
    printf("Direita\n");

    movimentosFeitos++;

    if (movimentosFeitos >= movimentos)
    {
      break;
    }
  }
  printf("\n");
}

// Função principal
int main()
{
  int casasTorre = 5;
  int casasBispo = 5;
  int casasRainha = 8;
  int movimentosCavalo = 2;

  printf("Movimento da Torre:\n");
  moverTorre(casasTorre);

  printf("Movimento do Bispo:\n");
  moverBispo(casasBispo);

  printf("Movimento da Rainha:\n");
  moverRainha(casasRainha);

  moverCavalo(movimentosCavalo);

  return 0;
}
