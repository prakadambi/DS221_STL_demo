#include<bits/stdc++.h>

using namespace std;

void vector_tutorial(){
    vector<int> v;
    cout << "Initial Capacity of vector: " << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    cout << "Max size of vector: " << v.max_size() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "Element at index 1: " << v[1] << endl;
    cout << "Element at front: " << v.front() << endl;
    cout << "Element at back: " << v.back() << endl;
    cout << "Is vector empty: " << v.empty() << endl;
    cout << "Last element before pop: " << v[v.size()-1] << endl;
    v.pop_back();
    cout << "Last element after pop: " << v[v.size()-1] << endl;
    cout << "Element at index 1: " << v[1] << endl;
    v.insert(v.begin() + 1, 4);
    cout << "Element at index 1: " << v[1] << endl;
    v.erase(v.begin() + 1);
    cout << "Element at index 1: " << v[1] << endl;
    v.clear();
    cout << "Is vector empty: " << v.empty() << endl;
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    cout << "Max size of vector: " << v.max_size() << endl;
    
}

void list_tutorial(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    cout << "Size of list: " << l.size() << endl;
    cout << "Max size of list: " << l.max_size() << endl;
    cout << "Element at front: " << l.front() << endl;
    cout << "Element at back: " << l.back() << endl;
    cout << "Is list empty: " << l.empty() << endl;
    cout << "Element at index 1: " << l.front() << endl;
    l.pop_back();
    cout << "Element at back: " << l.back() << endl;
    l.insert(l.begin() , 2);
    cout << "Element at index 1: " << l.front() << endl;
    l.erase(l.begin());
    cout << "Element at index 1: " << l.front() << endl;
    l.clear();
    cout << "Is list empty: " << l.empty() << endl;
    cout << "Size of list: " << l.size() << endl;
    cout << "Max size of list: " << l.max_size() << endl;
}

void vector_vs_list(){
    vector<int> v;
    list<int> l;
    for(int i = 0; i < 1000000; i++){
        v.push_back(i);
        l.push_back(i);
    }
    float time1 = clock();
    for(int i = 0; i < 1000000; i++){
        v[i] = v[i] + 2;
    }
    float time2 = clock();
    cout << "Time taken by vector: " << (time2 - time1) / CLOCKS_PER_SEC << endl;
    float time3 = clock();

    for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
        *it = *it + 2;
    }  
    
    float time4 = clock();
    cout << "Time taken by list: " << (time4 - time3) / CLOCKS_PER_SEC << endl;
}

void map_tutorial(){
    map<int, int> m;
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));
    cout << "Size of map: " << m.size() << endl;
    cout << "Max size of map: " << m.max_size() << endl;
    cout << "Element at key 1: " << m.at(1) << endl;
    cout << "Element at key before erase 1: " << m[1] << endl;
    cout << "Is map empty: " << m.empty() << endl;
    cout << "Element at key 5: " << m[5] << endl;
    m.erase(1);
    cout << "Element at key after erase 1: " << m[1] << endl;
    m.clear();
    cout << "Is map empty: " << m.empty() << endl;
    cout << "Size of map: " << m.size() << endl;
    cout << "Max size of map: " << m.max_size() << endl;
}


int main(){
    vector_tutorial();
    list_tutorial();
    vector_vs_list();
    map_tutorial();

    return 0;
}