class Solution {
public:
    int totalMoney(int n) {
        int count  = 0;
        int days = 0;
        int money = 1;
        long long temp = 0;
        int tMoney=1;
        for(int i=0;i<n;i++){
            days++;
            if(days>7){
                days = 1;
                money = ++tMoney;
            }
            temp += money++;
        }

        return temp;
    }
};