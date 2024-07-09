class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWaitingTime = 0;
        int currentTime = 0; 
        for (const auto& customer : customers) {
            int arrivalTime = customer[0];
            int prepTime = customer[1];
            
            if (currentTime < arrivalTime) {
                currentTime = arrivalTime;
            }
            
            currentTime += prepTime;
            totalWaitingTime += (currentTime - arrivalTime);
        }
        
        return totalWaitingTime / customers.size();
    }
};