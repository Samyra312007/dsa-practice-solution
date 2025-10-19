class MedianFinder
{
public:
    priority_queue<int> Left;
    priority_queue<int, vector<int>, greater<int>> Right;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (Left.empty())
        {
            Left.push(num);
            return;
        }
        if (num > Left.top())
        {
            Right.push(num);
        }
        else
            Left.push(num);

        if (Left.size() > Right.size() + 1)
        {
            Right.push(Left.top());
            Left.pop();
        }
        else if (Right.size() > Left.size())
        {
            Left.push(Right.top());
            Right.pop();
        }
    }

    double findMedian()
    {
        double ans;
        if (Left.size() == Right.size())
        {
            ans = (Left.top() + Right.top()) / 2.0;
        }
        else if (Left.size() - 1 == Right.size())
        {
            ans = Left.top();
        }
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */