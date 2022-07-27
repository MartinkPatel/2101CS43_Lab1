/*
AUTHOR- PATEL MARTIN KAMALNAYAN
ROLL NO -2101CS43

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void insertion_sort(int a[], int n) {}
main()
{
    printf("Select a sorting technique: \n");
    printf("1.Insertion Sort\n");
    printf("2.Selection Sort\n");
    printf("3.Bubble Sort\n");
    printf("4.Merge Sort\n");
    printf("5.Quick Sort\n");
    int choice = -1;
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    if (choice != -1)
    {
        printf("Enter size of array: ");
        int n;
        scanf("%d", &n);
        int a[n];
        printf("Enter elements of array: ");
        for (int i = 0; i < i; i++)
        {
            scanf("%d", &a[i]);
        }

        switch (choice)
        {
        case 1:
            insertion_sort(a, n);
            break;
        }
    }
    else
    {
        printf("Enter Appropiate chocie.\n\n");
    }
    return 0;
}