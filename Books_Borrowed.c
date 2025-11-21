/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO.: CT100/G/26122/25
DESC.: A simple C program to help a local library store book titles of books borrowed using each and every day C file handling.
*/
//DESCRIPTION: DESC.: A simple C program to help a local library store book titles of books borrowed using each and every day C file handling.

#include<stdio.h>

int main(){
	FILE* file;
	char title[50];
	printf("Enter title of book borrowed bellow: ");
	scanf("%s", title);
	printf("The title is: %s", title);
	file = fopen("borrowed_books.txt", "a");
	fprintf(file, "\n%s", title);
	fclose(file);
	printf("The book title has been saved successfully");
	return 0;
}
