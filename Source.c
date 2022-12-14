#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 100

int main() {
	double Mass[M][M];
	int a = 0, b = 0;
	setlocale(LC_ALL, "rus");
	printf("¬ведите длину массива: \n");
	scanf("%d", &a);
	printf("¬ведите ширину массива: \n");
	scanf("%d", &b);
	if (!(a < M) || !(b < M)) return;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			Mass[i][j] = (i + 1.) / (j + 1.);
		}
	}
	for (int i = -1; i < a; i++) {
		printf("\n");
		for (int j = -1; j < b; j++) {
			if (i == -1) printf("%d\t", j);
			else if (j == -1) printf("%d\t", i);
			else printf("%.2lf\t", Mass[i][j]);
		}
		printf("\n");
	}
	printf("\n%.2lf\n", Mass[1][1]);

	int c;
	printf("¬ведите столбец дл€ поиска максимального значени€:\n");
	scanf("%d", &c);
	if (c < b) {
		double max = Mass[0][c-1]; //сдвигаем на 1 влево, чтобы искать по 5 элементу массива
		for (int i = 0; i < a; i++) {
			if (Mass[i][c-1] > max)
				max = Mass[i][c-1];
		}
		printf("%.2lf", max);
	}
}
