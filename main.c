#include<stdio.h>
#define max  100000

//arr will have list of used coins
//int ans[max];

int findCoins(int arr[], int n,  int k)
{
    int i, count = 0;

    for(i = n-1; i >=0 ; i--)
    {
        while(k >= arr[i])// we can use one coin infinite time
        {
            //if coin is equal or smaller than the value reduce value
            k -= arr[i];
            //ans[count] = arr[i];
            count++;
        }
        if(k == 0)
            break;

    }

    return count;
}

int main()
{
     int n, k;
    scanf("%d %d",&n,&k); //taking input
    int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    int CoinCount = findCoins(arr,n,k);

   printf("%d",CoinCount);

    //for(int i = 0; i <CoinCount; i++)
      //  printf("%d ", ans[i]);

    return 0;
}