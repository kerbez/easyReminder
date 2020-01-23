# Reminder 

## Map

**c++**:

    map<int, int> m;
    m[a];
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++){
        it->second=i++;
    } 
    for (auto it = m.begin(); it != m.end();it++){
        cout << it->first << " : " << it->second << endl;
        it->second=2;
        it->first=10;(nel`zya)
    }

    for (auto it : m){
        cout<<it.first<<"" <<it.second<<endl;
    }
    

## Set

**c++**:

    set<int> s;
    s.insert(1);
    for (auto it = s.begin(); it != s.end();it++){
        cout<<*it<<endl;
    }

    for (auto it : s){
        cout<<it<<endl;
    }

    s.size() // int
    s.empty() // bool
    s.erase(value)
    s.erase(s.begin(),s.find(val)) // [begin, val)
    s.clear()

    set<int, greater<int> > s2; //to store in reverse
    
## Stack

**c++**:

    empty() – Returns whether the stack is empty – Time Complexity : O(1)
    size() – Returns the size of the stack – Time Complexity : O(1)
    top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
    push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
    pop() – Deletes the top most element of the stack – Time Complexity : O(1)
    
    stack <int> s; 
