//Operator Overloading hackerrank solution
//this is just the part you are requested to write,not the full code, since main ecc. its already provided.

class Matrix
{
 public:
    Matrix(): a() {}
    Matrix operator +(Matrix b)
    {Matrix new_mat;
     int row=b.a.size();
     int col=b.a[0].size();
     for (int i=0; i<row; i++){
        vector <int> tmp; 
		for (int j=0; j<col; j++){
			tmp.push_back(this->a[i][j]+b.a[i][j]);
		}
        new_mat.a.push_back(tmp); 
	}
     return new_mat; 
    }
    vector<vector<int>> a;  
};
