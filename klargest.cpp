#include <iostream>
#include <functional>
#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k){
    priority_queue<int> q;
    for(int i = 0; i < values.size(); i++){
        q.push(values[i]);
    }

    while(--k){
        q.pop();
    }
    return q.top();
}