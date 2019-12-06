package class_test;
//
////this表示当前对象的引用
//public class homework {
//public homework (){
//    System.out.println("test中："+this);
//}
//public void test(){
//    System.out.println(this);
//}
//    public static void main(String[] args) {
//        homework hom1=new homework();
//        System.out.println("main中："+hom1);
//        hom1.test();
//        homework hom2=new homework();
//        System.out.println("main中："+hom2);
//        hom2.test();
//    }
//test方法（属性）是通过那个对象调用的，this就指的是谁
//}
//

//青蛙跳台阶问题
//public class homework {
//    public static void main(String[] args) {
//    int n=15;
//    int ret =frogjump(n);
//        System.out.print("青蛙一共有"+ret+"种跳法。 " );
//    }
//
//    public static int frogjump(int n) {
//     if(n==1){
//         return 1;
//     }
//     if(n==2){
//         return 2;
//     }
//     return frogjump(n-1)+frogjump(n-2) ;
//    }
//}

//汉诺塔问题
//public class homework {
//    static int count=0;
//    public static void main(String[] args) {
//        int n = 3;
//        char [] towers={'A','B','C'};
//        hannuotower(n,towers[0],towers[1],towers[2]);
//    }
//    //将编号为diskNumber的盘子由sourceTower移动到destTower
//   public static void move(int diskNumber,char sourceTower,char destTower){
//        count++;
//       System.out.println("移动次数为"+count+"编号为"+diskNumber+"的盘子从"+sourceTower+"移动到"+destTower);
//}
////实现汉诺塔游戏
//    public static void hannuotower(int ndisks,char towerA,char towerB,char towerC){
//        if(ndisks==1){
//            //将唯一的盘子从A->C
//            move(1,towerA,towerC);
//        }else{
//            //n>=2
//            //先将n-1个盘子从A->B,C作为辅助
//            hannuotower(ndisks-1,towerA,towerC,towerB);
//            //将编号为n从A->C
//            move(ndisks,towerA,towerC);
//            //将之前的n-1个盘子从B->C,A作为辅助
//            hannuotower(ndisks-1,towerB,towerA,towerC);
//        }
//    }
//}
