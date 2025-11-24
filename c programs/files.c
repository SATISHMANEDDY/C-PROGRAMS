#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    // Open first file in read mode
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error: Cannot open file1.txt\n");
        return 1;
    }

    // Open second file in read mode
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error: Cannot open file2.txt\n");
        fclose(file1);
        return 1;
    }

    // Open third file in write mode
    file3 = fopen("merged.txt", "w");
    if (file3 == NULL) {
        printf("Error: Cannot create merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of file1 to file3
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Copy contents of file2 to file3
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Files merged successfully into merged.txt\n");

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
