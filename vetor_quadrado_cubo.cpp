#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[10], vc[10], vq[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &v[i]);
		vq[i] = v[i] * v[i];
		vc[i] = v[i] * v[i] * v[i];
	}
	for(int i = 0; i < 10; i++)
	{
		printf("Na posição %d do vetor o número é %d, o quadrado desse número é %d, e o cubo é %d\n", i, v[i], vq[i], vc[i]);
	}
}
