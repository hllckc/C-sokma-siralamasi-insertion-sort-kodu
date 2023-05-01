#include <stdio.h>
#define diziboyutu 5

int main(int argc, char const *argv[])
{

   int arr[diziboyutu] = {4,5,2,3,1};

	 int i,j,kucuk;

    for (int i = 1; i < diziboyutu; ++i)
    {
    	
      kucuk =arr[i];
      j = i-1;

      while(j>=0 && arr[j] > kucuk){

      	arr[j + 1] = arr[j];
      	j--;
      }

     arr[j + 1] = kucuk;


    }


for (int i = 0; i < diziboyutu; ++i)
{
	printf("%d  ",arr[i]);
}



	return 0;
}