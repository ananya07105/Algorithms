stack<int> s;
stack<int> mn;
MinStack::MinStack() 
{
    while(!s.empty()) s.pop();
    while(!mn.empty()) mn.pop();
}

void MinStack::push(int x) {
    s.push(x);
    if(mn.empty() or x<mn.top()) 
      mn.push(x);
}

void MinStack::pop() 
{
    if(s.empty()) return;
    if(mn.top()=s.top()) mn.pop();
    s.pop();
 
}

int MinStack::top() 
{
    if(s.empty()) return -1;
    return s.top();
}

int MinStack::getMin() {
    if(mn.empty()) return -1;
    return mn.top();
}

