#include<bits/stdc++.h>
using namespace std;
void fucn(vector<vector<int>>& mat){
    int rows = mat.size();
    int cols = mat[0].size();

    for(int j = 0; j<cols; j++){
        int sum = 0;
        for(int i = 0; i<rows; i++){
            sum += mat[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main(){
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>>mat(rows, vector<int>(cols));
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cin >>mat[i][j];
        }
    }
    fucn(mat);
    return 0;
}
