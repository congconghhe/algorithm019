int majorityElement(int* nums, int numsSize){
    int count=1;
    int pre=nums[0];
    for(int cir=1;cir<numsSize;cir++){
        if(pre==nums[cir])    count++;
        else    count--;
        if(count==0){
            pre=nums[cir];count=1;
        }
    }
    return pre;
}

//本来打算用hash表做，但是目前只学会了上次的查找异构词的下表法hash表，没法表示负数，leetcode测试用例好刁钻/doge
