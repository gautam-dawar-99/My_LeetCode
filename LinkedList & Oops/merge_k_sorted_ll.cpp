#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// brute force
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for(auto it:lists){
            ListNode* temp=it;
            while(temp!=NULL){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* ans=new ListNode(0);
        ListNode* temp1=ans;  
        for(int i=0;i<arr.size();i++){
            ListNode* temp2=new ListNode(arr[i]);
            temp1->next = temp2;  
            temp1=temp1->next;  
        }
        return ans->next;  
    }
};


#include <queue>
#include <vector>
#include <utility> // for std::pair

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct Compare {
    bool operator()(pair<int, ListNode*> a, pair<int, ListNode*> b) {
        return a.first > b.first;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, Compare> pq;
    int n = lists.size();
    for (int i = 0; i < n; i++) {
        if (lists[i] != nullptr) {
            pq.push({lists[i]->val, lists[i]});
        }
    }

    ListNode* newNode = new ListNode(-1);
    ListNode* tmp = newNode;

    while (!pq.empty()) {
        pair<int, ListNode*> p = pq.top();
        pq.pop();
        tmp->next = p.second;
        tmp = tmp->next;

        if (p.second->next) {
            pq.push({p.second->next->val, p.second->next});
        }
    }

    return newNode->next;
}

class Compare {
    bool operator()(pair<int, ListNode*> a, pair<int, ListNode*> b) {
        return a.first > b.first;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
        // priority_queue<int,ListNode*> pq;
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, Compare> pq;
    
        int n=lists.size();
        for(int i=0;i<n;i++){
            if(lists[i]!=nullptr){
                pq.push({lists[i]->val,lists[i]});
        }

        ListNode* newNode=new ListNode(-1);
        ListNode* tmp=newNode;

        while(!pq.empty()){
            pair<int,ListNode*>p=pq.top();
            tmp->next=p.second;
            pq.pop();

            if(p.second->next){
                pq.push({p.second->val,p.second->next});
            
            tmp=tmp->next;
            }
        }
        return newNode->next;
    }