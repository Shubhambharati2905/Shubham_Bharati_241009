stack<int> element;
stack<int>minimum;
MinStack::MinStack() {
   while(element.empty()==0){
       element.pop();
   }
   while(minimum.empty()==0){
       minimum.pop();
   } 
}

void MinStack::push(int x) {
    if(element.empty()!=0 || x<minimum.top()){
        element.push(x);
        minimum.push(x);
    }
    else{
        element.push(x);
    }
    
}

void MinStack::pop() {
    if(element.empty()){
        return; 
    }
    if(element.top()==minimum.top()){
        element.pop();
        minimum.pop();
    }
    else{
        element.pop();
    }
}

int MinStack::top() {
    if(element.empty()){
        return -1;
    }
    return element.top();
}

int MinStack::getMin() {
    if(element.empty()){
        return -1;
    }
    return minimum.top();
}
