int *plusOne(int *digits, int digitsSize, int *returnSize) {
    for (int i = digitsSize - 1; i >= 0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            *returnSize = digitsSize;
             return digits;
        }
    }
    int * final = (int *)malloc(sizeof(int)*(digitsSize+1));
    final[0]=1;
    for(int i = 1;i<digitsSize+1;i++){
        final[i]=digits[i-1];
    }
     *returnSize = digitsSize +1;
   return final;
 }


