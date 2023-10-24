public class Main
{
	public static void main(String[] args) {
		int arr[] = { 15,20,10,30,50,18,5,45};
		int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int c = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > c) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = c;
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
	}
}
