#include <stdio.h>
#include <stdlib.h>
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d", &arr[i])
    }
    int temp = arr[0];
    while(n--)
    {
      if(temp<arr[n-1])
      temp = arr[n-1];
    }
    printf("%d", temp);
  }
  return 0;
}
