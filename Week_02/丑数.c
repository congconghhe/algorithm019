#define MIN(a,b)(a > b ? b : a)

int nthUglyNumber(int n){
    if(n < 0){
        return -1;
    }
    int* arr = (int*)malloc(sizeof(int) * n );

    int num_2 = 0 , num_3 = 0 , num_5 = 0 ;
    arr[0] = 1;

    for(int i = 1; i < n ; i++){
        arr[i] = MIN( 2*arr[num_2], MIN(3*arr[num_3], 5*arr[num_5]));
        if(arr[i] == ( 2 * arr[num_2])) num_2++;
        if(arr[i] == ( 3 * arr[num_3])) num_3++;
        if(arr[i] == ( 5 * arr[num_5])) num_5++;
    }
    return arr[n-1];
}
