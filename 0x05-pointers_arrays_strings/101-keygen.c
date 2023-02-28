#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- program that generates random valid passwords
 * Return: Always 0
 */
#define PASSWORD_LENGTH 6

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
