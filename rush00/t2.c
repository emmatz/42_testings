#include <unistd.h>
#include <stdlib.h>

// Función para imprimir el rectángulo usando la función write
void draw_rectangle(int width, int height) {
    // Caso especial cuando el ancho y el largo son 1
    if (width == 1 && height == 1) {
        char single_char = 'o';
        write(1, &single_char, 1);
        write(1, "\n" , 1);
        return;
    }

    // Buffer para la línea superior e inferior
    char line[width + 1];
    line[0] = 'o';
    for (int i = 1; i < width - 1; i++) {
        line[i] = '-';
    }
    line[width - 1] = 'o';
    line[width] = '\n';

    // Escribir la línea superior
    write(1, line, width + 1);

    // Buffer para las líneas intermedias
    if (height > 2) {
        char middle[width + 1];
        middle[0] = '*';
        for (int i = 1; i < width - 1; i++) {
            middle[i] = ' ';
        }
        middle[width - 1] = '*';
        middle[width] = '\n';

        // Escribir las líneas intermedias
        for (int j = 0; j < height - 2; j++) {
            write(1, middle, width + 1);
        }
    }

    // Escribir la línea inferior
    write(1, line, width + 1);
}

int main(int argc, char *argv[]) {
    // Verificar que se han pasado los argumentos adecuados
    if (argc != 3) {
        const char *usage_msg = "Uso: <programa> <ancho> <largo>\n";
        write(1, usage_msg, 30);
        return 1;
    }

    // Convertir los argumentos a enteros
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    // Llamar a la función para dibujar el rectángulo
    draw_rectangle(width, height);

    return 0;
}

