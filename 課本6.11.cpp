#include <stdio.h>
#define SIZE 10

void bubbleSort(int a[], int size);

int main(void)
{
    int arr[SIZE] = {3, 5, 2, 8, 6, 1, 9, 4, 7, 0};
    int i;

    printf("Original array:\n");
    for (i = 0; i < SIZE; i++)
        printf("%3d", arr[i]);

    bubbleSort(arr, SIZE);

    printf("\n\nSorted array:\n");
    for (i = 0; i < SIZE; i++)
        printf("%3d", arr[i]);

    return 0;
}

void bubbleSort(int a[], int size)
{
    int pass, j, temp;
    int swapped;  // ノㄓ癘魁琌祇ネユ传

    for (pass = 0; pass < size - 1; pass++) {

        swapped = 0;  // –近秨﹍常砞⊿Τユ传

        // (a) –近惠ゑ耕Ω计搭ぶ
        for (j = 0; j < size - 1 - pass; j++) {

            if (a[j] > a[j + 1]) {
                // ユ传
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = 1;  // Τユ传!
            }
        }

        // (b) 璝⊿Τユ传 △ 皚逼 △ 矗Ν挡
        if (!swapped)
            break;
    }
}

