class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> result(2 * n - 1, 0);
        vector<bool> visited(n, false);
        backtrack(n, 0, visited, result);
        return result;
    }

private:
    bool backtrack(int n, int top, vector<bool>& visited, vector<int>& result) {
        // Find the next empty spot
        while (top < result.size() && result[top] != 0) {
            top++;
        }

        // If we've filled the whole result array, return true
        if (top == result.size()) {
            return true;
        }

        for (int i = n; i > 0; --i) {
            if (visited[i - 1]) continue;  // Skip if already visited
            if (i != 1 && top + i >= result.size()) continue;  // Skip if number won't fit

            if (i == 1) {
                result[top] = 1;
                visited[i - 1] = true;
                if (backtrack(n, top + 1, visited, result)) return true;
                visited[i - 1] = false;
                result[top] = 0;
            }
            else if (result[top + i] == 0) {
                visited[i - 1] = true;
                result[top] = result[top + i] = i;
                if (backtrack(n, top + 1, visited, result)) return true;
                visited[i - 1] = false;
                result[top + i] = result[top] = 0;
            }
        }
        return false;
    }
};