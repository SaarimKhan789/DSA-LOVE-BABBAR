import java.util.*;
public class Reverse {
    public static void main(String[] args) {
       
        Scanner sc=new Scanner(System.in);

       int n=sc.nextInt();
       int []arr=new int[n];
       
       for(int i=0;i<arr.length;i++){
           arr[i]=sc.nextInt();
       }
       reverse(arr,n);
       
       for(int val:arr){
           System.out.print(val+" ");
       }
   }
   public static void reverse(int []arr,int n){

    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        
        int temp=arr[lo];
        arr[lo]=arr[hi];
        arr[hi]=temp;
        lo++;
        hi--;

    }
}
}
