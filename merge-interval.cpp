#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> &intervals){
    for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cout<<intervals[i][j] << " ";
            }
            cout<<endl;
        }
}

int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans;

    if (intervals.empty()) return 0;

    // Start with the first interval
    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        // Get the last interval in the answer list
        vector<int> &last = ans.back();

        // If the current interval overlaps with the last one, merge them
        if (intervals[i][0] <= last[1]) {
            last[1] = max(last[1], intervals[i][1]);
        } else {
            // Otherwise, add the current interval to the answer list
            ans.push_back(intervals[i]);
        }
    }

    display(ans);

    // display(ans);

    return 0;
}