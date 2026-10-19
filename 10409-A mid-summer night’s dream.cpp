#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    while( cin >> num ){
        int median, input_meet_a = 0, meet_a;
        vector<int> num_array(num);
        // get the median
        for(int i = 0; i < num; i++){
            cin >> num_array[i];
        }
        sort(num_array.begin(), num_array.end());
        if(num == 1){
            median = num_array[0];
            input_meet_a = 1;
            meet_a = 1;
        }
        else{
            int next_median = num_array[ num /2 ];
            if(num % 2 == 0){
                median = num_array[ (num - 1) /2 ];
            }
            else{
                median = num_array[ num / 2 ];
            }
            for(int i = 0; i < num; i++){
                if( median <= num_array[i] && num_array[i] <= next_median){
                    input_meet_a ++;
                }
            }
            meet_a = next_median - median + 1;
        }
        cout << median << " " << input_meet_a << " " << meet_a << endl;
    }

    return 0;
}
