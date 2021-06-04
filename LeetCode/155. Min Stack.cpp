class MinStack {
public:
    MinStack() {
        curr = new Node(0, INT_MAX, nullptr);
    }

    void push(int val) {
        curr = new Node(val, min(val, curr->min), curr);
    }

    void pop() {
        curr = curr->next;
    }

    int top() {
        return curr->val;
    }

    int getMin() {
        return curr->min;
    }

private:
    class Node {
    public:
        int val;
        int min;
        Node* next;

        Node(int val, int min, Node* next) {
            this->val = val;
            this->min = min;
            this->next = next;
        }
    };

    Node *curr;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
