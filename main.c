#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

int a2i(char* number)
{ 
    int num = 0; 
    int num_len; 
    int j; 

    for (num_len = 0; number[num_len]; num_len++); 
    
    for (j = 0; number[j]; j++)
    {
        num += (number[j] - '0') * pow(10, num_len-j-1); 
    }
    
    return num; 
}

int len_of_array(char* array)
{ 
    int cnt = 0; 
    int i; 

    for (i = 0; array[i]; i++)
    {
        if (array[i] == ',')
        {
            cnt++; 
        }
        
    }
    
    return ++cnt; 
}

void fillArray(int* buffer, int len, char* arrray)
{ 
    int buf_cnt = 0; 
    int i = 0; 
    int j; 

    printf("\n"); 

    while (buf_cnt < len)
    {
        int num_len = 0; 
        while (arrray[i] != ',' && arrray[i])
        {
            i++ ;
            num_len++; 
        }
        
        printf("Length of %dth element - %d \n", buf_cnt, num_len); 
        char* number = (char*) malloc((num_len+1) * sizeof(char)); 

        int j; 
        for (j = 0; j < num_len; j++)
        {
            number[j] = arrray[i - num_len + j];
        }
        
        number[j] = 0; 
        int num = a2i(number); 
        free(number); 
        buffer[buf_cnt++] = num; 

        printf("Array %dth element - %d\n", buf_cnt, num); 
        i++; 
    }
}

int main(int argc, char** argv)
{ 
    int len = len_of_array(argv[1]); 
    printf("\nLength of array is %d", len); 
    int* array = malloc(len * sizeof(int)); 
    fillArray(array, len, argv[1]); 
    int target = a2i(argv[2]); 

    printf("\nTarget is %d\n", target); 

    int l_lim = 0; 
    int r_lim = len - 1; 
    int mid; 

    do
    {
        mid = floor((r_lim + l_lim) / 2); 
        
        if (mid == l_lim)
        {
            printf("\nThere is no target in array\n"); 
            free(array);
            
            return -1; 
        }

        if (array[mid] < target)
        {
            l_lim = mid;
        } 
        else
        { 
            r_lim = mid; 
        }
        
        
    } while (array[mid] != target);

    printf("Target - %d is located in index %d \n", target, mid); 
    free(array);
    return 0; 
}
