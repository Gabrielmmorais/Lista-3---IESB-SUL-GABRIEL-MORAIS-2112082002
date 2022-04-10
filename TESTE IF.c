//GABRIEL MORAIS - 2112082002

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int v[10];
    int nElementos;
} t_lista;

void zerar(t_lista *lista) {
    lista->nElementos = 0;
}

void inserir(t_lista *lista) {
    // inserir elemento na lista
    if(lista->nElementos == 10)
         printf("Lista cheia!\n");
    else {
        printf("Insira um número: ");
        scanf("%d", &lista->v[lista->nElementos]);
        lista->nElementos++;
    }
}

void listar(t_lista *lista) {
    // listar elementos da lista
    if(lista->nElementos == 0)
        printf("Lista vazia!\n");
    else {
        for(int i = 0; i < lista->nElementos; i++) {
            printf("lista[%d]: %d\n", i, lista->v[i]);
        }
        printf("Pressione enter para continuar!\n");
    }
    
    getchar();
}

void consultar(t_lista *lista){ // valor 1.0 ponto
                              //GABRIEL MORAIS - 2112082002

  int num = 0, voltar;

  printf("Informe o número para a consulta :");
  scanf("%d", &num);

  for(int i = 0; i < lista ->nElementos; i++){
    if (lista ->v[i] == num){
        
    //printf("A posição do número %d na lista é [%d]", num, i);
    } else if (lista -> v[i] != num ) {
      printf("\n ERRO\n");
     
    }
  }
 scanf("%d", &voltar);
 }




void editar(t_lista *lista){// valor 1.0 ponto
                            // GABRIEL MORAIS - 2112082002

int num;
int num2;

printf("Número Para ser Alterado :");
scanf("%d", &num);

printf ("Informe o Novo Número :");
scanf("%d", &num2);


for(int i = 0; i < lista ->nElementos; i++){
    if (lista ->v[i] == num){
      lista -> v[i] = num2;
    } else {
      printf("ERRO");
    }
  }


  }


void deletar(t_lista *lista){// valor 1.0 ponto
                             // GABRIEL MORAIS - 2112082002
int num;
  printf("Informe O Número a ser Deletado : ");
  scanf("%d", &num);

  for(int i = 0; i < lista ->nElementos; i++ ){

    if(lista->v[i] == num || lista->v[i-1] == lista->v[i]){
      lista ->v[i] = lista->v[i+1];
    }
  }
  lista ->nElementos--;

}



void ordenar(t_lista *lista)
// valor 2.0 pontos (crescente e decrescente)
//GABRIEL MORAIS - 2112082002
{
  int escolha, voltar;
  printf("Informe a função da lista :\ncrescente: 1 \ndecrescente: 2\n opção: ");
  scanf("%d", &escolha);

    if(escolha==1)
  {
      int menor= lista->v[0];
  for(int i=0;i<(lista->nElementos)-1;i++)
    {
      int menor=i;
      for(int j=i+1;j<lista->nElementos;j++)
        {
          if(lista->v[j]<lista->v[menor])
          {
            menor=j;
          }
        }
      if(menor!=i)
      {
        int aux=lista->v[i];
        lista->v[i]=lista->v[menor];
        lista->v[menor]=aux;
      }
    }
  printf("\n");
  printf("crescente: ");
  for(int i=0;i<lista->nElementos;i++)
    {
        printf("%d\t",lista->v[i]);
    }
    }
  if(escolha==2)
  {
    int maior= lista->v[0];
  for(int i=0;i<(lista->nElementos)-1;i++)
    {
      int maior=i;
      for(int j=i+1;j<lista->nElementos;j++)
        {
          if(lista->v[j]>lista->v[maior])
          {
            maior=j;
          }
        }
      if(maior!=i)
      {
        int aux=lista->v[i];
        lista->v[i]=lista->v[maior];
        lista->v[maior]=aux;
      }
    }
  printf("\n");
  printf("decrescente: ");
  for(int i=0;i<lista->nElementos;i++)
    {
        printf("%d\t",lista->v[i]);
    }
  }
  else if(escolha !=1 && escolha !=2)
  {
    printf("ERRO");

  }
{
  printf("\n\nInforme se deseja zerar ou sair : \n\n");
}
   scanf("%d", &voltar);
  }











int main() {
    // criar lista
    t_lista lista;
    lista.nElementos = 0;
    

    while(1) {
        system("cls"); // linux
        // ststem("cls"); // windows
        int opcao = 0;
        printf("0 - Zerar lista.\n");
        printf("1 - Inserir elemento.\n");
        printf("2 - Listar.\n");
        printf("3 - Consultar.\n");
        printf("4 - Editar.\n");
        printf("5 - Deletar.\n");
        printf("6 - Ordenar.\n");
        printf("7 - Sair.\n");
        printf("Opcao: ");
        scanf("%d%*c", &opcao);

        switch(opcao) {
            case 0: 
                zerar(&lista);
                break;
            case 1: 
                inserir(&lista);
                break;
            case 2:
                listar(&lista);
                break;
            case 3:
                consultar(&lista);
                break;
            case 4:
                editar(&lista);
                break;
            case 5:
                deletar(&lista);
                break;
            case 6:
                ordenar(&lista);
                break;
            case 7:
                return 0;
            default:
                printf("Opção inválida!");
                getchar();
        }
    }

}


