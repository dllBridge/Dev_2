


#include  <stdio.h>
#include <locale.h>


int   n = 92,
      k =  0;

int arr[100];


int foo(int *p);    

///////////////////////////////////////////////////////////
int main()                                               //
{
	
	setlocale(LC_ALL, "Rus");
	
	while(n)
	{
		
	   scanf("%d", &n);	
	   
	   arr[k++] = n;
	}
	
	
	
	arr[k++] = 0;
	

	
	scanf("%d", &n);
	
	arr[k++] = n;	
	
	printf("Введено чисел: %d \n", k-3);
	
    
    n = foo(arr);
    
    
    printf("Контрольное значение: %d \n", arr[k-1]);  
    printf("Вычисленное значение: %d \n", n);  
    
    if(n != arr[k-1]) printf("Значения не совпали \n");
    
    scanf("%d", &n);	
    
    
return 0;
}








//////////////////////////////////////////////////////////////////////
int foo(int *p)                                                     //
{
	
	int  x =  0,
	   max =  1,	   
	         pr;
	          
	          
	while(p[x++]);         
	   	   
	for(int i = 0; i < x; i++)
	{

	   for(int s = 0; s < x; s++)
	   {
	 
	       if(s != i)
	       {
				
		      pr = arr[s] * arr[i]; 		
		      
		      if(pr% 7 == 0)
		      if(pr%49)   
			  if(pr > max) max = pr;					   					  
		   }
       }	 	   
    }
    
return max;    	
}































/*
	
		
	//printf("0 - indicates that the input is finished: \n");
	//  printf("Enter the checksum: \n");

        
   // printf("max = %d", n);

	for(int i = 0; i < k; i ++)
	{
        
	    printf(", %d", arr[i]);
    }


	while(arr[i++])
	{
		
	    	
		
	} */



