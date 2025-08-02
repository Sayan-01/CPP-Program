#include <bits/stdc++.h>
using namespace std;
void mazeSol (vector<vector<int>>& maze, int row, int col, vector<string>& ans, string& curr) {
    int n = maze.size();
    if (row >= n || col >= n || maze[row][col] == 0) return;
    if (row == n-1 && col == n-1) {
        ans.push_back(curr);
        return;
    }
    if (row + 1 < n && maze[row + 1][col] == 1) {
        curr.append("D");
        mazeSol (maze, row+1, col, ans, curr);
        curr.pop_back();
    }
    if (col + 1 < n && maze[row][col + 1] == 1) {
        curr.append("R");
        mazeSol (maze, row, col+1, ans, curr);
        curr.pop_back();
    }
}
vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string> ans;
    string curr = ""; 
    mazeSol (maze, 0, 0, ans, curr);
    
    return ans;
}


int main() {
    vector<vector<int>> nums = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};


    string s = "daabcbaabcbc", part = "abcs";
    cout<<s.find(part);
    
    // while (s.find(part) != s.) {
    //     s.replace(s.find(part), part.length(), "");
    // }
    // cout<<s;

    return 0;
}