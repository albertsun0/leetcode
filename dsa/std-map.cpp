#include <vector>
#include <iostream>
using namespace std;

template <typename K, typename V> 
class Node{
    public:
        K key;
        V val;
        Node * next;
        
        Node(K k, V v){
            key = k;
            val = v;
            next = nullptr;
        }

        Node(){
            next = nullptr;
            key = INT_MIN;
            val = INT_MIN;
        }
};

/*
TODO:

Removing
Allow indexing
Implement iterator?
*/ 

template <typename K, typename V, typename H = hash<K> > 
class Map {
    public:
        int _size;
        int containerSize;
        Node<K,V> **container;
        
        Map(int cs = 10001){
            _size = 0;
            containerSize = cs;
            container = new Node<K,V>*[cs];
        }

        int size(){
            return _size;
        }

        int hash(K key){
            return H()(key) % containerSize;
        }

        void insert(K key, V value){
            int index = hash(key);
            Node<K,V> *cur = container[index];
            if (cur == nullptr){
                cur = new Node<K,V>();
                container[index] = cur;
            }
            while( true ){
                if(cur -> key == key){
                    cur -> val = value;
                    return;
                }
                if (cur->next == nullptr){
                    break;
                }
                cur = cur-> next;
            }
            // add to list
            cur -> next = new Node<K,V>(key, value);
            _size += 1;
        }

        V get(K key){
            int index = hash(key);
            Node<K,V> *cur = container[index];
            while(cur != nullptr){
                if(cur -> key == key){
                    return cur -> val;
                }
                cur = cur-> next;
            }
            return -1;
        }
    
};
int main () {
    Map<int, int> m;


    m.insert(20,100);
    m.insert(0,200);
    m.insert(20,300);

    for(int i = 0; i < 100000; i++){
        m.insert(i,i);
    }
    cout << m.size() << "\n";
    for(int i = 0; i < 100000; i++){
        if (m.get(i) != i){
            cout << "ERROR";
        }
    }
    
    return 0;
}