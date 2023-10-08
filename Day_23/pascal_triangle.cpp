#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int elementOfPascalTrianle(int n , int r){   // n(C)r
    long long res = 1 ;
    for(int i = 0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

vector<int> genrateRowOfPascalTrianle(int row){
    vector<int> resRow;
    long long ans = 1;
    resRow.push_back(1);

    for(int col = 1;col<row;col++){
        ans = ans * (row-col);
        ans = ans / (col);
        resRow.push_back(ans);
    }
    return resRow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i = 1;i<N;i++){
        
        ans.push_back(genrateRowOfPascalTrianle(i));
    }
    return ans;
}

int main(){

    // int row,col;
    // cout<<"Enter the row and col , of which you want to find element in Pascal's Triangle : "<<endl;
    // cin>>row>>col;
    // cout<<endl;
    // int ans  = elementOfPascalTrianle(row-1,col-1);
    // cout<<ans;

    int n ;
    cout<<"The row you want to print : "<<endl;
    cin>>n;
  
    vector<int> rowList;
    rowList = genrateRowOfPascalTrianle(n);
    
    print(rowList);



    
    return 0;
}