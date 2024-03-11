
class MergeSort {
    void merge(int arr[], int l, int m, int r)
    {
        int x = m - l + 1;
        int y = r - m;
 
        int L[] = new int[x];
        int R[] = new int[y];
 
        for (int i = 0; i < x; ++i)
            L[i] = arr[l + i];
        for (int j = 0; j < y; ++j)
            R[j] = arr[m + 1 + j];
 
      
        int i = 0, j = 0;
 
        int k = l;
        while (i < x && j < y) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
 
        while (i < x) {
            arr[k] = L[i];
            i++;
            k++;
        }
 
        while (j < y) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
 
    void sort(int arr[], int l, int r)
    {
        if (l < r) {
            
            int m = l + (r - l) / 2;
 
            
            sort(arr, l, m);
            sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
 
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
 
    public static void main(String args[])
    {
        int a[] = { 2,4,9,6,8,1 };
 

        MergeSort obj = new MergeSort();
        obj.sort(a, 0, a.length - 1);
 
        printArray(a);
    }
}