#include <stdio.h>
#include <stdlib.h>
/* \defgroup groupA QuickSort Functions @{ */
/*!< Программа быстрой сортировки */

using namespace std;

template<class T>       //*! При помощи шаблонногго класса функция сортировки может принимать класс любого типа.

 /** \brief Осуществляет сортировку
  *
  * \param [in] array - массив для сортировки
  * \param [in] n     - количество элементов массива
  * \return адресс отсортированого массива
  *
  */
void Sort(T * a, long n) {

long i = 0; //!< переменная для первого цикла
long j = n; //!< переменная для второго цикла
T temp;      //!< временный объект класса T
T p;         //!< временный объект класса T

p = a[n>>1];  //*! Середина массива.

do {
    while ( a[i] < p ) i++; //!< Цикл для первой половины массива относительно p.
    while ( a[j] > p ) j--; //!< Цикл для второй половины массива относительно p.

    if (i <= j) {
      temp = a[i];
      a[i] = a[j]; 
      a[j] = temp;
      i++; 
      j--;
    }
  } while ( i<=j );


  //*!Рекурсивные вызовы, если есть, что сортировать
  if ( j > 0 ) Sort(a, j);
  if ( n > i ) Sort(a+i, n-i);
}

/*!Функция main() - точка входа в программу.
*Без параметров.
*Возращает 1 в случае успешного выполнения и код ошибки в случае неудачного завершения.
*/
int main()
{
    unsigned __int8 * arr;
    unsigned int n = 0;
    scanf("%d", &n);
    ar = (unsigned __int8 *)malloc(sizeof(unsigned __int8) * n);
    int i = 0;
    for ( i = 0; i < n; i++) {

        scanf("%u", &ar[i]);


    }
    quickSort(ar,n);
    for (i = 0; i < n; i ++) {

        printf("%u ",ar[i]);


    }
    return 0;
}
/* }@ */
