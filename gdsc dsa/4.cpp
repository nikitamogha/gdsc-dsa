//reverse an array
void reverse(int *a,int n)
{
    int i=0;
    for(int j=n-1;j>=0;j--,i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }

}