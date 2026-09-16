class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        List<Integer> list = new ArrayList<>();
        int r = matrix.length;
        int c = matrix[0].length;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
               list.add(matrix[i][j]);
            }
        }
        Collections.sort(list);
       
        return list.get(k-1);
    }
}