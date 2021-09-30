stack<int> s;
int mn;
MinStack::MinStack() {
    while(!s.empty()) s.pop();
    
}

void MinStack::push(int x) {
    if(s.empty()){
        mn=x;
        s.push(x);
        return;
    }
    if(x<s.top()){
        s.push(2*x-mn);
        mn=x;
    }
}

void MinStack::pop() {
    if(s.empty()) return;
    if(s.top()<mn){
        int prevMin=2*mn-s.top();
        mn=prevMin;
        s.pop();
    }
}

int MinStack::top() {
    if(s.empty()) return -1;
    if(mn<s.top()) return mn;
    return s.top();
}

int MinStack::getMin() {
    if(s.empty()) return -1;
    return mn;
}

