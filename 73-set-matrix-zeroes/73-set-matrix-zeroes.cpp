class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       // int row=matrix.size(), col=matrix[0].size();
       //  for(int i=0; i<row; i++){
       //      for(int j=0; j<col; j++){
       //         if(matrix[i][j]==0){
       //             int k=i-1;
       //             while(k>=0){ //upper
       //                if(matrix[k][j] != 0)
       //                    matrix[k][j] = -1;
       //                 k--;
       //             }
       //             k=i+1;
       //             while(k<row){  //lower
       //                if(matrix[k][j] != 0)
       //                    matrix[k][j] = -1;
       //                 k++;
       //             }
       //             k=j-1;
       //             while(k>=0){ //left
       //                if(matrix[i][k] != 0)
       //                    matrix[i][k] = -1;
       //                 k--;
       //             }
       //             k=j+1;
       //             while(k<col){ //right
       //                if(matrix[i][k] != 0)
       //                    matrix[i][k] = -1;
       //                 k++;
       //             }
       //         } 
       //      }
       //  }
       //  //covert -1 to 0
       //  for(int i=0; i<row; i++){
       //      for(int j=0; j<col; j++){
       //          if(matrix[i][j] == -1)
       //              matrix[i][j] = 0;
       //      }
       //  }
        
        /*second approach - better*/
        // int row=matrix.size(), col=matrix[0].size();
        // vector < int > dummy1(row,-1), dummy2(col,-1);
        // for(int i=0; i<row; i++)
        // {
        //     for(int j=0; j<col; j++)
        //     {
        //         if(matrix[i][j]==0){
        //             dummy1[i] =0;
        //             dummy2[j] =0;
        //         }
        //     }
        // }
        // for(int i=0; i<row; i++)
        // {
        //     for(int j=0; j<col; j++)
        //     {
        //         if (dummy1[i] == 0 || dummy2[j]==0) {
        //              matrix[i][j] = 0;
        //         }
        //     }
        // }
        
        /*third approach - optimization*/
        int col0 = 1;
        int row=matrix.size(), col=matrix[0].size();
        for(int i=0; i<row; i++){
            //checking if 0 is present in the 0th column or not
            if(matrix[i][0]==0)
                col0 = 0;
            for(int j=1; j<col; j++){
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        //traversing in the reverse direction and
        //checking if the row or col has 0 or not
        //and setting values of matrix accordingly
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=1; j--){
                if (matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 0)
                matrix[i][0] = 0;
        }
    } 
};