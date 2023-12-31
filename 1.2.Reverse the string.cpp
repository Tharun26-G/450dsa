class Solution
{
public:
    string reverseWord(string &str)
    {
        int s = 0;
        int e = str.size() - 1;

        while (s < e)
        {
            swap(str[s], str[e]);
            s++;
            e--;
        }

        return str; // Add this line to return the reversed string
    }
};
