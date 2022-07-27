/*
AUTHOR- PATEL MARTIN KAMALNAYAN
ROLL NO -2101CS43

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void insertion_sort(int a[], int n)
{

    int key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void selection_sort(int a[], int n)
{
    int min_ind;
    for (int i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_ind])
                min_ind = j;
        }

        int temp = a[i];
        a[i] = a[min_ind];
        a[min_ind] = temp;
    }
}
void bubble_sort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[i + l];
    for (int i = 0; i < n2; i++)
        R[i] = a[i + m + 1];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {

        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main()
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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        switch (choice)
        {
        case 1:
            insertion_sort(a, n);
            break;
        case 2:
            selection_sort(a, n);
            break;

        case 3:
            bubble_sort(a, n);
            break;
        case 4:
            merge_sort(a, 0, n - 1);
            break;
        }

        printf("The array after sorting is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
    else
    {
        printf("Enter Appropiate chocie.\n\n");
    }
    return 0;
}