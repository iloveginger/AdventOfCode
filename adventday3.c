#include <stdio.h>

int main() {
    int prices[] = {139,127,130,148,158,178,195,179,197,177,187};
    
    int minprice = prices[0];  
    int maxprofit = 0;
    
    for (int i = 1; i < 11; i++) { 
        if (prices[i] < minprice) {
            minprice = prices[i]; 
        } else {
            int profit = prices[i] - minprice;
            if (profit > maxprofit) {
                maxprofit = profit;  
            }
        }
    }
    
    printf("%d", maxprofit);
}