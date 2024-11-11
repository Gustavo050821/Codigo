#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int v[10], me;
	float sma, qtdma;
	for(int i = 0; i <10; i++)
	{
		printf("Digite a sua idade: ");
		scanf("%d", &v[i]);
		if(v[i] < 18)
		{
			me++;
		}else{
			sma += v[i];
			qtdma++;
		}
	}
	printf("A quantidade de menores de idade é: %d\n", me);
	printf("A média de idade dos maiores de idade é: %.1f", sma/qtdma);
}
