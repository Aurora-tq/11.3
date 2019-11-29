package test;

//递归求N的阶乘
//public class test {
//    public static void main(String[] args) {
//     int i=5;
//     int ret=factor(i);
//        System.out.println(ret);
//    }
//    public static int factor(int i){
//        if(i==1){
//            return 1;
//        }
//            return i*factor(i-1);
//    }
//}


//按顺序打印一个数字的每一位
//public class test {
//    public static void main(String[] args) {
//        int i=1234;
//        print(i);
//
//    }
//    public static void print(int i){
//        if(i>9){
//            print(i/10);
//
//        }
//        System.out.print( i%10+" ");
//    }
//    }

//递归求1+2+3+.....10
//public class test {
//    public static void main(String[] args) {
//        int n=10;
//        int ret =add(n);
//        System.out.print(ret+" ");
//    }
//    public static int add(int n){
//        if(n==1){
//            return 1;
//        }
//        return n+add(n-1);
//    }
//    }

//输入一个非负整数，返回组成它的数字之和（用递归）
//public class test {
//    public static void main(String[] args) {
//        int n = 123456;
//        int sum = numadd(n);
//        System.out.println(sum);
//    }
//
//    public static int numadd(int n) {
//        if (n <=9) {
//            return n;
//        }
//        return n%10+numadd(n/10);
//    }
//}

//求斐波那契数列的第n项
//public class test {
//    public static void main(String[] args) {
//        int n=6;
//        int ret =fibo(n);
//        System.out.println(ret);
//    }
//    public static int fibo(int n){
//        if(n<=2){
//            return 1;
//        }
//        return fibo(n-1)+fibo(n-2);
//    }
//    }

//打印数组内容
//public class test {
//    public static void main(String[] args) {
//        int []arr ={1,2,3,4,5};
//        int i=0;
//        for (i = 0; i <arr.length ; i++) {
//            System.out.println(arr[i]);
//            for (int i:arr) {
//                System.out.println(i);
//            }
//        }
//    }

//数组转字符串
//import java.util.Arrays;
//public class test {
//    public static void main(String[] args) {
//        int[] arr = {1, 2, 3, 4, 5};
//        String newarr = Arrays.toString(arr);
//        System.out.println(newarr);
//    }
//}

//自己实现数组转字符串
//public class test{
//    public static void main(String[] args){
//    int []arr={1,2,3,4,5};
//        System.out.println(tostring(arr));
//    }
//    public static String tostring(int []arr){
//        String ret ="[";
//        for(int i=0;i<arr.length;i++){
//            ret +=arr[i];
//            if(i!=arr.length-1) {
//                ret += ", ";
//            }
//        }
//        ret +="]";
//       return ret;
//    }
//}

//将原数组元素*2，但不改变原数组
//public class test {
//    public static void main(String[] args){
//        int [] arr={1,2,3,4,5};
//        int[] output = doublearray(arr);
//            print(output);
//    }
//    public static void print(int []arr){
//        for(int i=0;i<arr.length;i++){
//            System.out.print(arr[i]+" ");
//        }
//    }
//     public static int[] doublearray(int []arr){
//        int [] newarr=new int [arr.length];
//        for(int i=0;i<arr.length;i++){
//            newarr[i]=arr[i]*2;
//        }
//        return newarr;
//     }
//
//}

//复制原数组内容，产生新数组
//public class test {
//    public static void main(String[] args){
//        int [] arr={1,2,3,4,5};
//        int[] output = doublearray(arr);
//        for(int i=0;i<arr.length;i++) {
//            System.out.print(arr[i] + " ");
//        }
//        System.out.println();
//            print(output);
//    }
//    public static void print(int []arr){
//        for(int i=0;i<arr.length;i++){
//            System.out.print(arr[i]+" ");
//        }
//    }
//     public static int[] doublearray(int []arr){
//        int [] newarr=new int [arr.length];
//        for(int i=0;i<arr.length;i++){
//            newarr[i]=arr[i];
//        }
//        return newarr;
//     }
//找数组中的最大值
//public class test{
//    public static void main(String[] args){
//        int []arr={1,2,3,4,5};
//        System.out.println(max(arr));
//    }
//    public static int max(int []arr){
//        int max=arr[0];
//        for( int i=0;i<arr.length;i++){
//            if(arr[i]>max){
//                max=arr[i];
//            }
//        }
//        return max;
//    }
//}

//

//二分查找
//public class test {
//   public static void main(String[] args) {
//int []arr={1,2,3,4,5,6,7,8,9};
//       System.out.println(binarysearch(arr,6));
//   }
//
//   public static int binarysearch(int []arr ,int tofind){
//       int left=0;
//       int right =arr.length-1;
//       while(left<=right) {
//           int mid = (left + right) / 2;
//           for (int i = 0; i < arr.length; i++) {
//               if (tofind < arr[mid]) {
//                   right = mid - 1;
//            } else if (tofind > arr[mid]) {
//                   left = mid + 1;
//               } else {
//                   return mid;
//               }
//           }
//       }
//       return-1;
//   }
//   }


//给定一个数组，将里面的元素逆序排列
//public class test{
//    public static void main(String[] args){
//    int[]arr={1,2,3,4,5};
//    reverse(arr);
//    print(arr);
//    }
//    public static void reverse (int []arr){
//       int left=0;
//       int right=arr.length-1;
//        while(left<right){
//                int tmp=arr[left];
//                arr[left]=arr[right];
//                arr[right]=tmp;
//                right--;
//                left++;
//            }
//        }
//        public static void print(int []arr){
//            for (int x:arr) {
//                System.out.println(x);
//            }
//        }
//    }

import java.util.Arrays;

//给定一个整型数组，将所有的偶数放在前半部分，将所有的奇数放在数组的后半部分
//public class test{
//    public static void main(String[] args){
//     int []arr={1,4,5,2,3};
//     transfrom(arr);
//        String newarr = Arrays.toString(arr);
//        System.out.println(newarr);
//    }
//    public static void transfrom(int[]arr){
//        int left=0;
//        int right=arr.length-1;
//        while(left<right) {
//            while (arr[left] % 2 == 0 && left < right) {
//                left++;
//            }
//            while (arr[right] % 2 != 0 && left < right) {
//                right--;
//            }
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}



