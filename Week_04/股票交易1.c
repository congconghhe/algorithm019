int maxProfit(int* prices, int pricesSize){
int max=0; 
for (int i = 0;i<pricesSize-1;i++){
 if (prices[i+1]>prices[i])
    max = max + prices[i+1]-prices[i];
}
    return max;
}
