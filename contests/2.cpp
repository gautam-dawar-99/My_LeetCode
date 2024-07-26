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
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> del(nums.begin(),nums.end());

        ListNode*  newNode=new ListNode(0);
        newNode->next=head;
        ListNode* prev=newNode;
        ListNode* curr=head;

        while(curr!=nullptr){
            if(del.find(curr->val)!=del.end()){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }

        return newNode->next;
        
    }
};\







class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        // Sort the cut costs
        sort(horizontalCut.begin(), horizontalCut.end());
        sort(verticalCut.begin(), verticalCut.end());
        
        // Use min-heap to keep track of the next cut to make
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
        
        // Add all cuts to the priority queue
        for (int i = 0; i < horizontalCut.size(); i++) {
            pq.push({horizontalCut[i], 'H'});
        }
        for (int i = 0; i < verticalCut.size(); i++) {
            pq.push({verticalCut[i], 'V'});
        }
        
        // Initialize piece counters
        int horizontalPieces = 1;
        int verticalPieces = 1;
        int totalCost = 0;
        
        // Process the priority queue
        while (!pq.empty()) {
            auto [cost, type] = pq.top();
            pq.pop();
            
            if (type == 'H') {
                // Horizontal cut
                totalCost += cost * verticalPieces;
                horizontalPieces++;
            } else {
                // Vertical cut
                totalCost += cost * horizontalPieces;
                verticalPieces++;
            }
        }
        
        return totalCost;
    }
};
