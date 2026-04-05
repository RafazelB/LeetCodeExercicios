/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(l3 == NULL)
        exit(1);
    l3->next = NULL;

    struct ListNode *w1 = l1, *w2 = l2;
    int carry = 0;

    while(w1 != NULL || w2 != NULL || carry > 0)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));;
        if(temp == NULL)
            exit(1);
        temp->next = NULL;   

        if(w1 == NULL && w2 == NULL)
        {
            temp->val = carry;
        }
        else if(w1 == NULL)
        {
            temp->val = w2->val + carry;
            w2 = w2->next;
        }
        else if(w2 == NULL)
        {
            temp->val = w1->val + carry;
            w1 = w1->next;
        }
        else
        {
            temp->val = w1->val + w2->val + carry;
            w1 = w1->next;
            w2 = w2->next;
        }
        carry = 0;

        if(temp->val >= 10)
        {
            carry = 1;
            temp->val -= 10;
        }

        struct ListNode *per = l3;
        while(per->next != NULL)
            per = per->next;
        temp->next = per->next;
        per->next = temp;
    }

    return l3->next;
}