#include <vector>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> s;
    vector<int> lastMinVal;
    MinStack() {

    }
    
    void push(int x) {
        s.push_back(x);
        if (lastMinVal.size() == 0 || x < lastMinVal.back())
            lastMinVal.push_back(x);
        else
            lastMinVal.push_back(lastMinVal.back());
    }
    
    void pop() {
        s.pop_back();
        lastMinVal.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return lastMinVal.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */