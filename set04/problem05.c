// 5. Write a program to find the index of the largest number in an array
int input_size()
{
    int x;
    printf("enter the array size :");
    scanf("%d",&x);
    return x;
}
void input_array(int n, int a[])
{
   printf("enter the array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
    int loc=0;
    int largest=a[0];
    for(int i=1;i<n;i++)
    {
         if (a[i] > largest) 
        {
            largest = a[i];
            loc = i;
        }
    }
    return loc;
}
void output(int index)
{
    printf("the index of largest number is :%d",index);
}
int main()
{
    int n,index;
    n=input_size();
    int a[n];
    input_array(n,a);
    index=find_largest_index(n,a);
    printf("%d",index);
    output(index);
}