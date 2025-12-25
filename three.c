#include <stdio.h>

int main() {
    int prices[1000], input, count = 0, index[2], buy, sell;
    index[0] = 0;
    printf("Enter the prices of the stock (-1 to quit)\n");
    for(int i = 0; i < 1000; i++) {
        scanf("%d", &input);
        if(input == -1)
            break;
        prices[i] = input;
        count++;
    }

    if(count == 0) {
        printf("No prices entered\n");
        return 0;
    }

    for(int i = 1; i < count; i++) {
        if(prices[i] < prices[index[0]]) {
            index[0] = i;
        }
    }

    buy = prices[index[0]];
    sell = buy;
    for(int i = index[0] + 1; i < count; i++) {
        if(prices[i] > sell) {
            sell = prices[i];
        }
    }
    if(sell > buy) {
        int profit = sell - buy;
        printf("Output : %d\n", profit);
    } else {
        printf("No profits\n");
    }
    return 0;
}
