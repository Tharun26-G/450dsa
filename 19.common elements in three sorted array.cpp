vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
    vector<int> result;
    int n1 = a.size();
    int n2 = b.size();
    int n3 = c.size();

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            result.push_back(a[i]);
            int commonElement = a[i];
            while (i < n1 && a[i] == commonElement) i++;
            while (j < n2 && b[j] == commonElement) j++;
            while (k < n3 && c[k] == commonElement) k++;
        } else {
            int minimum = min(a[i], min(b[j], c[k]));
            if (a[i] == minimum) i++;
            if (b[j] == minimum) j++;
            if (c[k] == minimum) k++;
        }
    }

    return result;
}
