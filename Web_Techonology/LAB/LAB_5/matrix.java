import java.util.Scanner;
// add and multiply two matrix
public class matrix {
    int[][] mat;
    int row, col;
    void get(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        row = sc.nextInt();
        System.out.println("Enter the number of columns: ");
        col = sc.nextInt();
        mat = new int[row][col];
        System.out.println("Enter the elements of matrix: ");
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                mat[i][j] = sc.nextInt();
            }
        }

    }
    void display(){
        System.out.println("Matrix: ");
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
    void add(matrix m1, matrix m2){
        if(m1.row == m2.row && m1.col == m2.col){
            row = m1.row;
            col = m1.col;
            mat = new int[row][col];
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
                }
            }
        }
        else{
            System.out.println("Matrix addition not possible");
        }
    }
    void mul(matrix m1, matrix m2){
        if(m1.col == m2.row){
            row = m1.row;
            col = m2.col;
            mat = new int[row][col];
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    mat[i][j] = 0;
                    for(int k = 0; k < m1.col; k++){
                        mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
                    }
                }
            }
        }
        else{
            System.out.println("Matrix multiplication not possible");
        }
    }
    public static void main(String[] args) {
        
        matrix m1 = new matrix();
        matrix m2 = new matrix();
        matrix m3 = new matrix();
        matrix m4 = new matrix();
        m1.get();
        m2.get();
        m3.add(m1, m2);
        m3.display();
        m4.mul(m1, m2);
        m4.display();
    }
}
