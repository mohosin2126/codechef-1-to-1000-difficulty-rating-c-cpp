#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d", &x, &y); 
        int buying_price = x - y;
        int new_selling_price = x + (x / 10);
        int new_profit = new_selling_price - buying_price;
        
     
        printf("%d\n", new_profit);
    }
    
    return 0;
}
