
// code for minimum Jumps to travers an array
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    int count = 0;
    int tracker = 0;

    cout << "Enter size of an array : ";
    cin >> n;
    cout << "Enter array elements : ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arr_ele_carr = 0;

    while (arr_ele_carr < n - 1) {  
        if (arr[arr_ele_carr] == 0) {
            cout << "Cannot jump further, stuck at index " << arr_ele_carr << "\n";
            break;
        }
        
        int temp = 0;
        int max_reach = arr_ele_carr;

        for (int jump = 1; jump <= arr[arr_ele_carr] && arr_ele_carr + jump < n; jump++) {
            if (arr_ele_carr + jump > max_reach) {
                max_reach = arr_ele_carr + jump;
            }
        }

        arr_ele_carr = max_reach;
        count++;

        cout << "After jump " << count << ", index is at: " << arr_ele_carr << "\n";
    }

    cout << "Total jumps required: " << count << "\n";
    return 0;
}