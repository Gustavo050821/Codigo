#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[10], vc[10], vq[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d", &v[i]);
		vq[i] = v[i] * v[i];
		vc[i] = v[i] * v[i] * v[i];
	}
	for(int i = 0; i < 10; i++)
	{
		printf("Na posi��o %d do vetor o n�mero � %d, o quadrado desse n�mero � %d, e o cubo � %d\n", i, v[i], vq[i], vc[i]);
	}
}
