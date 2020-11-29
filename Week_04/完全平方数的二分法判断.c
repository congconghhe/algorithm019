bool isPerfectSquare(int num){
    if (num ==1) return true;
int min =0,max = num,mid;
while(min<max-1){
    mid = (max+min)/2;
    if (num/mid <mid)
    max = mid;
    else min = mid;}
if (min*min == num)return true;
return false;
}
