#include<bits/stdc++.h>
using namespace std;

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > A, int R, int C) 
    {
        vector<int> spiral;
        int left,right,top,bottom,size1=R*C,size2=0;
        top = 0;
        bottom = R-1;
        left = 0;
        right = C-1;
        
        while(size2 < size1)
        {
            for(int i=left;i<=right && size2 < size1;i++) //traversing left to right
            {
                spiral.push_back(A[top][i]);
                size2++;
            }
            top++;

            for(int i=top;i<=bottom && size2 < size1;i++) //traversing top to bottom
            {
                spiral.push_back(A[i][right]);
                size2++;
            }
            right--;

            for(int i=right;i>=left && size2 < size1;i--) //traversing right to left
            {
                spiral.push_back(A[bottom][i]);
                size2++;
            }
            bottom--;

            for(int i=bottom;i>=top && size2 < size1;i--) //traversing bottom to top
            {
                spiral.push_back(A[i][left]);
                size2++;
            }
            left++;
        }
        return spiral;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}