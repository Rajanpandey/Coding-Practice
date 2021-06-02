class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> st;

    MinStack() {
        st.clear();
    }

    void push(int val) {
        st.push_back(val);
    }

    void pop() {
        if (!st.empty()) {
            st.pop_back();
        }
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return *min_element(st.begin(), st.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
