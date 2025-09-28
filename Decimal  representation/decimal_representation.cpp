#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> output;
        long long currentpower = 1;

        while(n > 0) {
            int digit = n % 10;
            if(digit != 0) {
                output.push_back(digit * currentpower);
            }
            n = n / 10;
            currentpower = currentpower * 10;
        }

        sort(output.rbegin(), output.rend());  // descending order
        return output;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = sol.decimalRepresentation(n);

    cout << "Decimal representation parts: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
