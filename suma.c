/* 
 * Escriba el pseudocódigo para encontrar el valor máximo en un arreglo de 10 enteros
 * Inicio
 *   tmp = 0
 *   nums = {1, 2, 3, 45, 6, 7, 8, 9, 10, 11}
 *   For elemento en nums:
 *     if elemento > tmp:
 *       tmp = elemento
 *     finif
 *   finFor
Fin*/

#include <stdio.h>

int main() {
    int nums[10] = {111, 2, 3, 45, 6, 7, 8, 9, 10, 11};
    int max = nums[0];

    for (int i = 1; i < 10; i++) {
      printf("%d: %d\n", i, nums[i]);
    }
    return 0;
}
