#include <stdio.h>
void main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-1;i++) {
        for (int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(int i=0;i<n;)
    {
        int c=1;
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
            else{
                break;
            }
        }
        printf("The count of %d is %d\n",a[i],c);
        i=i+c;
    }
}