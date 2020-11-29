bool lemonadeChange(int* bills, int billsSize)
{
    int five_dollars_check = 0;
    int ten_dollars_check = 0;
    int twenty_dollars_check = 0;
    for (int i = 0; i < billsSize; i++) {
        if (bills[i] == 5) {
            five_dollars_check++;
        }
        if (bills[i] == 10) {
            five_dollars_check--;
            ten_dollars_check++;
        }
        if (bills[i] == 20) {
            if (ten_dollars_check > 0) {
                twenty_dollars_check++;
                ten_dollars_check--;
                five_dollars_check--;
            } else {
                twenty_dollars_check++;
                five_dollars_check -= 3;
            }
        }
        if (five_dollars_check < 0 || ten_dollars_check < 0 || ten_dollars_check < 0) {
            return 0;
            break;
        }
    }
    return 1;

}

//两种方法都是列举，但是用了switch之后更加清晰
bool lemonadeChange(int* bills, int billsSize){
    if(bills[0]!=5) return false;
    int five=1,ten=0,twenty=0,i;
    for(i=1;i<billsSize;i++){
        switch(bills[i]){
            case 5:five++;continue;
            case 10:ten++;five--;continue;
            case 20:twenty++;ten==0?five=five-2:ten--;five--;
        }
        if(five<0||ten<0) return false;
    }
    return true;
}
