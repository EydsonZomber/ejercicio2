#include <stdio.h>

int main() {
  int limite_maximo, base, potencia;

  // Solicitar al usuario el límite máximo
  printf("Ingrese el límite máximo: ");
  scanf("%d", &limite_maximo);

  // Solicitar al usuario la base
  printf("Ingrese la base: ");
  scanf("%d", &base);

  // Validar que la base sea positiva
  if (base <= 0) {
    printf("Error: La base debe ser un número entero positivo.\n");
    return 1;
  }

  // Calcular y mostrar las potencias
  printf("Potencias de %d menores que %d:\n", base, limite_maximo);
  for (potencia = 1; potencia < limite_maximo; potencia *= base) {
    printf("%d\n", potencia);
  }

  return 0;
}
