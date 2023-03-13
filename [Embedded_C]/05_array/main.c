#include <stdio.h>

void print_array(int* arr, int N)
{
    printf("------- array listing-------");

    for (int i=0; i<N; i++)
    {
        printf("arr[%d] is %8X at %p\n", i, arr[i], &arr[i]);
    }
}

void mem_inspection(unsigned char* abp, int N)
{
    printf("------- mem inspection-------");
    printf("memory inspection (%d bytes)\n", N);

    for (int i=0; i<N; i++)
    {
        printf("mem[%d] is %2X at %p\n", i, *(abp+i), abp+i);
    }
}


int main(){

    unsigned int arr[5] = {0x12345678, 2, 3, 4, 5};


    //다양한 방법으로 배열에 접근 

    // 1. 함수를 사용
    print_array(arr, 5);

    // 2. 배열을 사용 
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] is %8x at %p\n", i, arr[i], arr+i);
    }
    
    // 3. array 주소 값을 사용
   for(int i=0; i<5; i++)
    {
        printf("arr[%d] is %8x at %p\n", i, *(arr+i), &arr[i]);
    }

    // 4. 포인터 사용
    int* ap;// = &arr[0];
    ap = arr;
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] is %8x at %p\n", i, *(ap+i), &ap[i]);
    }

     printf("\n");

    // 5. char로 casting
    unsigned char* abp = (unsigned char*)arr;
    for(int i=0; i<4; i++)
    {
        printf("mem[%d] is %8x at %p\n", i, *(abp+i), &abp[i]);
    }
    
    // 6. 함수 사용 + casting
    *(abp+2) = 0x5A;
    mem_inspection(abp, 4*5);


    // 7. 2차원 array

    unsigned int mat[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,1,2,3}
    };

    for (int i=0;i<3;i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%2X", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    ///////////////////////

    unsigned int* mp = (unsigned int*)mat;
    for (int i=0;i<3;i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%2X", *(mp+i*4+j));
        }
        printf("\n");
    }

    ////////////////

    unsigned int x0[5] = {1,2,3,4,5};
    unsigned int x1[5] = {6,7,8,9,10};
    unsigned int x2[5] = {11,12,13,14,15};
    unsigned int* col[3] = {x0, x1, x2};
    printf("x0[2] is %d\n", *(col[0]+2));
    printf("x0[2] is %d\n", col[0][2]);

    return 0;
}