#include <stdio.h>
typedef struct fritacole
{
    float height;
}Fritacole;
int get_n()
{
    int n;
    printf("Enter the number of fritacoles: ");
    scanf("%d", &n);
    return n;
}
Fritacole input()
{
    Fritacole f;
    printf("Enter the height of the fritacole: ");
    scanf("%f",&f.height);
    return f;
}
Fritacole input_n(int n)
{
    Fritacole team[n];
    printf("Enter the input of height \n");
    for (int i=0;i<n;i++)
    {
        team[i]=input();
    }
    return team[0];
}
int compute(Fritacole a, Fritacole b)
{
    if(a.height>b.height)
    {
        return 1;
    }
    else if(a.height<b.height)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int compute_n(Fritacole a[], Fritacole b[], int n)
{
    int score_a=0,score_b=0,result=0;
    for(int i=0;i<n;i++)
    {
         result=compute(a[i],b[i]);
	if(result==1)
	{
		score_a++;
	}
	else if(result==2)
	{
		score_b++;
	}
	else
	{
		printf("equal height\n");
	}
       }
       if(score_a>score_b)
       {
         return 1;
      }
      else if(score_a<score_b)
      {
          return 2;
      }
      else
    {
        return 0;
    }

}

void output(int result, Fritacole a[],Fritacole b[],int n)
{
    if (result==1)
    {
        printf("team A is the better than team b");
    }
    else if(result==2)
    {
        printf("team b is better than team a");
    }
    else
    {
        printf("teams are equally scored");
    }
}
int main()
{
    int n,result;
    n=get_n();
    Fritacole a[n],b[n];
    a[n]=input_n(n);
    b[n]=input_n(n);
    result=compute_n(a,b,n);
    output(result,a,b,n);
    return 0;
}

