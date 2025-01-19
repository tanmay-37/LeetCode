class Solution {
public:
    int reverse(int x) {
        long temp = x;
        long flag,sum=0;
        if(temp == 0) return 0;
        else{
            if(temp<0) temp*= -1;
            while(temp!=0){
                flag = temp%10;
                sum = sum*10+flag;
                temp = temp/10;
            }
        }if(sum>=pow(-2,31) && sum<=pow(2,31)-1){
        if(x<0) return (-1)*sum;
        else return sum;}
        return 0;
    }
};