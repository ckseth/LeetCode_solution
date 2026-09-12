class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> available_counts(10,0);
        for(int digit : digits) {
            available_counts[digit]++;
        }
        int unique_even_count = 0;

        // Step 2: Iterate through all possible 3-digit even numbers
        for (int num = 100; num <= 998; num += 2) {
            // Extract the individual digits
            int h = num / 100;       // Hundreds place
            int t = (num / 10) % 10; // Tens place
            int u = num % 10;        // Units place

         // Count the required occurrences for the current number
            vector<int> needed_counts(10, 0);
            needed_counts[h]++;
            needed_counts[t]++;
            needed_counts[u]++;
            
            // Step 3: Check if the input array has enough of each digit
            if (available_counts[h] >= needed_counts[h] &&
                available_counts[t] >= needed_counts[t] &&
                available_counts[u] >= needed_counts[u]) {
                unique_even_count++;
            }
        }
        
        return unique_even_count;
    }
};
