int sqrt(int x){
long r = x;
while  (r*r >x){
r = (r+x/r)/2;
return r;
}
}//思想，泰勒公式。
上一个二分法查找sqrt的数学证明是y=x^2,二次函数在(0，∞）上单调递增，而且符合有界[0,x],所以可以采用二分法。

