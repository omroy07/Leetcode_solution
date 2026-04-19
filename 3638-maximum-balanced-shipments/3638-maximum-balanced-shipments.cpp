#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxBalancedShipments(std::vector<int>& weight) {
        int n = weight.size();
        
        // According to constraints, n >= 2.
        // A single-parcel shipment is never balanced.
        if (n < 2) {
            return 0;
        }

        int shipment_count = 0;
        int i = 0; // Starting index of the current potential shipment

        while (i < n) {
            int max_weight_in_shipment = 0;
            int j = i;
            bool found_balanced_end = false;

            while (j < n) {
                // Update the maximum weight in the current contiguous segment [i...j]
                max_weight_in_shipment = std::max(max_weight_in_shipment, weight[j]);

                // Check if the segment ending at j is balanced
                if (weight[j] < max_weight_in_shipment) {
                    shipment_count++;
                    i = j + 1; // Start the next shipment from the next parcel
                    found_balanced_end = true;
                    break; // Break the inner loop to start a new search
                }
                j++;
            }

            if (!found_balanced_end) {
                // If we reach the end of the array without forming a balanced shipment,
                // we can't form any more.
                break;
            }
        }
        
        return shipment_count;
    }
};