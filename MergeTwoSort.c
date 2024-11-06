#include<stdio.h>

int main()
{
    int a[100], b[100], m, n, i, j, k, merge[200];
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter elements of first array: ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter elements of second array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            merge[k]=a[i];
            i++;
            k++;
        }
        else
        {
            merge[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        merge[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        merge[k]=b[j];
        j++;
        k++;
    }
    printf("Merged array is: ");
    for(i=0; i<m+n; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}