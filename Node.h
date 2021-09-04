#ifndef NODE_H_
#define NODE_H_
#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
class Node{
public:
    string val;
    vector<Node*> sons;
    Node *father;
    int id;
    
    static int cur_id;
    static const int format_length = 2;
    
    Node(string s){
        val = s;
        if(s=="$");
        else id = ++cur_id;
    }
    
    void add_son(Node* son){
        son->father=this;
        sons.push_back(son);
    }
    
};

#endif