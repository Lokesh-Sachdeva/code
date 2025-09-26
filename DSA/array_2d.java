import java.util.*;
public class array_2d {
    public static void printMatrix(int matrix[][]){
        for(int i=0; i < matrix.length ; i++){
            for (int j = 0 ; j < matrix[0].length ; j++){
                System.out.print(matrix[i][j]);
            }
            System.out.println();
        }
    }

    public static void transposeMatrix(int matrix[][]){
        int transpose[][]=new int[matrix[0].length][matrix.length];
        for(int i=0; i < matrix.length ; i++){
            for (int j = 0 ; j < matrix[0].length ; j++){
                transpose[j][i]=matrix[i][j];                
            }
        }

        for(int i=0; i < transpose.length ; i++){
            for (int j = 0 ; j < transpose[0].length ; j++){
                System.out.print(transpose[i][j]);
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        int matrix[][]={{4,7,8},{8,8,7}};

        transposeMatrix(matrix);
    }
}
