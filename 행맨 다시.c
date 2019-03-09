#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int check(char s[], char a[], char ch);
int makehangman(int guess);

int main()
{

	char solution[100] = "";
	char answer[100] = "";
	char wrong[100] = "";
	char ch;

	int guess = 0;
	int num = 0;
	int wrongcnt = 0;
	int criteria = 0;

	printf("\n[Hangman Game]\n\n");
	printf("단어를 제시하시오(띄어쓰기 없음) : ");
	scanf_s("%s", &solution);

	for (int i = 0; i < strlen(solution); i++)
	{
		answer[i] = '_';
	}
	while (1) {
		wrongcnt = 0;

		system("cls");
		printf("\n[Hangman Game]\n\n");

		printf("%s\n\n오답 : ", answer);
		for (int i = 0; wrong[i] != NULL; i++) 
		{ 
			_putch(wrong[i]); printf(" "); wrongcnt++;
		}

		if (makehangman(wrongcnt) == 1)
		{ 
			criteria = 1; printf("\n\n ─┐\n ○\n ＿⊥＿\n ｜\n ＿⊥＿\n\n\n"); break;
		}

		ch = _getch();
		guess++;

		if (check(solution, answer, ch) == 1) break;
		else if (check(solution, answer, ch) == 0) { makehangman(wrongcnt); wrong[num++] = ch; }
	}

	if (criteria == 0) printf("도전 성공! 글자를 맞추었습니다!\n\n정답 : %s\n\n시도 횟수 : %d\n", solution, guess);
	if (criteria == 1) printf("도전 실패. HangMan을 완성했습니다!\n\n정답 : %s\n\n시도 횟수 : %d\n", solution, guess);

	return 0;

}
int makehangman(int guess)
{
	switch (guess)
	{
	case 0: printf("\n\n ─┐\n\n\n\n\n\n\n"); break;
	case 1: printf("\n\n ─┐\n ○\n\n\n\n\n\n"); break;
	case 2: printf("\n\n ─┐\n ○\n ⊥\n\n\n\n\n"); break;
	case 3: printf("\n\n ─┐\n ○\n ⊥\n ｜\n\n\n\n"); break;
	case 4: printf("\n\n ─┐\n ○\n ⊥\n ｜\n ⊥\n\n\n"); break;
	case 5: printf("\n\n ─┐\n ○\n ＿⊥\n ｜\n ⊥\n\n\n"); break;
	case 6: printf("\n\n ─┐\n ○\n ＿⊥＿\n ｜\n ⊥\n\n\n"); break;
	case 7: printf("\n\n ─┐\n ○\n ＿⊥＿\n ｜\n ＿⊥\n\n\n"); break;
	case 8: printf("\n\n ─┐\n ○\n ＿⊥＿\n ｜\n ＿⊥＿\n\n\n"); break;
	case 9: return 1; break;
	}
}
int check(char s[], char a[], char ch) {
	int wrong = 0;

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == ch) {
			a[i] = ch;
			wrong++;
		}
	}
	if (strcmp(s, a) == 0) return 1;
	else {
		if (wrong != 0) return 2;
		else return 0;
	}
}