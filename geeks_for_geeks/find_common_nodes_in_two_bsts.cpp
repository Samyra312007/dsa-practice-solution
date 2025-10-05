class Solution
{
public:
    vector<int> findCommon(Node *r1, Node *r2)
    {
        vector<int> res;
        stack<Node *> s1, s2;
        while (r1)
        {
            s1.push(r1);
            r1 = r1->left;
        }
        while (r2)
        {
            s2.push(r2);
            r2 = r2->left;
        }
        while (!s1.empty() && !s2.empty())
        {
            if (s1.top()->data == s2.top()->data)
            {
                res.push_back(s1.top()->data);
                r1 = s1.top()->right;
                s1.pop();
                r2 = s2.top()->right;
                s2.pop();
            }
            else if (s1.top()->data > s2.top()->data)
            {
                r2 = s2.top()->right;
                s2.pop();
            }
            else
            {
                r1 = s1.top()->right;
                s1.pop();
            }
            while (r1)
            {
                s1.push(r1);
                r1 = r1->left;
            }
            while (r2)
            {
                s2.push(r2);
                r2 = r2->left;
            }
        }
        return res;
    }
};