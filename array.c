//Write a program to pass the entire array to a function.
   
    #include<stdio.h>  
    int array(int arr[],int size);
    int main()
{
    int i=0,max=0; 
    int numbers[]={2,23,4,1,25,50,100,34};    

    max=array(numbers,8);    
    printf("maximum number is %d \n",max);
    return 0;
}

    int array(int arr[],int size)
{    
    int max=arr[0];    
    int i=0;    
    for(i=1;i<size;i++)
    {    
    if(max<arr[i])
    {    
    max=arr[i];    
    }    
    }    
    return max;    
}    
        
   

