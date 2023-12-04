#include <stdio.h>

int main() {
    int filas, columnas, limite;
    printf("Ingrese el numero de filas\n");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d", &columnas);
    printf("Ingrese el numero de limites\n");
    scanf("%d", &limite);

    int matriz[columnas][filas][limite];

    // Inicializar todas las matrices en ceros
    for (int n = 0; n < columnas; n++) {
        for (int m = 0; m < filas; m++) {
            for (int p = 0; p < limite; p++) {
                matriz[n][m][p] = 0;
            }
        }
    }
    
    // Inicializar la última matriz en unos
    for (int m = 0; m < filas; m++) {
        for (int p = 0; p < limite; p++) {
            matriz[columnas - 1][m][p] = 1;
        }
    }
 return 0;
}
