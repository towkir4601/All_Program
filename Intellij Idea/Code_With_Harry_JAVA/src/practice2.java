public class practice2 {
    public static void main(String[] args) {
        int[][] towkir = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
        };
        for(int i = 0; i<towkir.length;i++){
            for(int j = 0; j<towkir[i].length;j++){
                System.out.print(towkir[i][j]+" ");
            }
            System.out.println();
        }

    }
}