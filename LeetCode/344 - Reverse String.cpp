class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size();
        for (int i = 0, j = len - 1; i < j; ++i, --j) {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }
};