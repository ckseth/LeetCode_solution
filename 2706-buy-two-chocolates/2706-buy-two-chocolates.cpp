// class Solution {
// public:
//     int buyChoco(vector<int>& prices, int money) {

//         sort(prices.begin(), prices.end());
    
//         int min_cost = prices[0] + prices[1];

//         if (min_cost <= money) {
//             return money - min_cost;
//         }
//         return money;
//     }
// };


class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int min_cost = INT_MAX; 

        for (int i = 0; i < n; i++) {
            
            for (int j = i + 1; j < n; j++) {
                
                int current_cost = prices[i] + prices[j];
                
                if (current_cost < min_cost) {
                    min_cost = current_cost;
                }
            }
        }

        if (min_cost <= money) {
            return money - min_cost;
        }
        return money;
    }
};
