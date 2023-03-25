#include <bits/stdc++.h>
using namespace std;

class Matrix{
    private:
        vector<vector<int> > X;     //matrix 2 dimensi
        int row, col;               //ukuran baris dan kolom
    public:
        Matrix() {X.clear(); row=col=0;}
        void set();
        void print();
        Matrix& operator+=(Matrix p);
        Matrix& operator-=(Matrix p);
        void transpose();
        vector<vector<int> > getX(){
            return X;
        }
};
void Matrix::set(){
    int r, c, temp;
    vector<int> temp1;
    cin >> r >> c;
    row = r;
    col = c;
    for(int i=0; i < row; ++i){
        for(int j=0; j < col; ++j){
            cin >> temp;
            temp1.push_back(temp);
        }
        X.push_back(temp1);
        temp1.clear();
    }
}

void Matrix::print(){
    for(int i=0; i < row; ++i){
        for(int j=0; j < col; ++j){
            cout << X[i][j] << ' ';
        }
        cout << endl;
    }
}

Matrix& Matrix::operator+=(Matrix p){
    for(int i=0; i < row; ++i){
        for(int j=0; j < col; ++j){
            X[i][j]+=p.getX()[i][j];
        }
    }
    return *this;
}

Matrix& Matrix::operator-=(Matrix p){
    for(int i=0; i < row; ++i){
        for(int j=0; j < col; ++j){
            X[i][j]-=p.getX()[i][j];
        }
    }
    return *this;
}

void Matrix::transpose(){
    Matrix temp(*this);
    X.clear();
    vector<int> temp1;
    for(int j=0; j < row; ++j){
        for(int i=0; i < col; ++i){
            temp1.push_back(temp.getX()[i][j]);
        }
        X.push_back(temp1);
    }
    swap(col, row);
}

int main(){
    Matrix m;
    string input;
    cin >> input;
    while(input !="stop"){
        if(input=="matrik"){
            m.set();
        } else if(input=="print"){
            m.print();
        } else if(input=="tambah"){
            Matrix lain;
            lain.set();
            m += lain;
        } else if(input=="kurang"){
            Matrix lain;
            lain.set();
            m -= lain;
        } else if(input=="transpose"){
            m.transpose();
        }
        cin >> input;
    }
}
