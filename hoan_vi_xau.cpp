#include <stdio.h>
#include <string.h>


void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Hoan_vi(char str[], int left, int right) 
{
    if (left == right) 
	{
        printf("%s\n", str);
    } 
	else 
	{
        for (int i = left; i <= right; i++) 
		{
            swap(&str[left], &str[i]);
            Hoan_vi(str, left + 1, right);
            swap(&str[left], &str[i]);
        }
    }
}

int main() {
    char str[50];
    printf("Nhap xau: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("Cac hoan vi cua xau: \n");
    Hoan_vi(str, 0, n - 1);
    return 0;
}

