#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	//task1();
	task2();
}

task1() {
	char c;
	printf("Введите символ - знак операции: ");
	scanf("%c", &c);
	switch (c) {
		case '+':
			printf("Сложение\n");
			break;
		case '-':
			printf("Вычитание\n");
			break;
		case '*':
			printf("Умножение\n");
			break;
		case '/':
			printf("Деление\n");
			break;
		case '^':
			printf("Возведение в степень\n");
			break;
		default:
			printf("Неизвестная операция\n");
			break;
	}
}
task2() {
	int n;
	long long f = 1;
	printf("Введите N: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	printf("%d! = %lld", n, f);

	return 0;

}