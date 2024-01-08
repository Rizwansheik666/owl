class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node *ans=NULL;
        while(node1!=NULL and node2!=NULL){
            Node *node=new Node();
            if(node1->data >node2->data){
                node->data=node2->data;
                node2=node2->next;
            }
            else{
                node->data=node1->data;
                node1=node1->next;
            }
            node->next=ans;
            ans=node;
        }
        while(node1!=NULL){
            Node *k=new Node();
            k->data=node1->data;
            node1=node1->next;
            k->next=ans;
            ans=k;
        }
        while(node2!=NULL){
            Node *k2=new Node();
            k2->data=node2->data;
            node2=node2->next;
            k2->next=ans;
            ans=k2;
        }
        return ans;
    }  
};
