

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i, j;
    int l = 0;

    // Calcular la longitud de 'to_find'
    while (to_find[l])
        l++;

    // Si 'to_find' está vacío, devolver el string original
    if (l == 0)
        return str;

    // Buscar la primera aparición de 'to_find' en 'str'
    i = 0;
    while (str[i])
    {
        if (str[i] == to_find[0])
        {
            j = 0;
            // Comparar 'to_find' con la subcadena en 'str' comenzando en 'i'
            while (str[i + j] == to_find[j])
            {
                if (j == l - 1)
                    return &str[i];
                j++;
            }
        }
        i++;
    }
    return NULL;
}

int main()
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char *result1 = ft_strstr(str1, to_find1);
    if (result1)
        printf("Found: %s\n", result1);
    else
        printf("Not found\n");

    char str2[] = "Hello, world!";
    char to_find2[] = "planet";
    char *result2 = ft_strstr(str2, to_find2);
    if (result2)
        printf("Found: %s\n", result2);
    else
        printf("Not found\n");

    char str3[] = "Hello, world!";
    char to_find3[] = "";
    char *result3 = ft_strstr(str3, to_find3);
    if (result3)
        printf("Found: %s\n", result3);
    else
        printf("Not found\n");

    return 0;
}
