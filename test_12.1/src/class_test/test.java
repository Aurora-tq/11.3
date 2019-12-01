package class_test;

//class Person {
//     String name="庞天琦";
//     int age =19;
//     String lover="hfj";
//     public void eat(){
//         System.out.println("吃饭！");
//     }
//     public void sleep(){
//         System.out.println("睡觉！");
//     }
//    public void show() {
//        System.out.println("我叫"+name+"，"+"今年"+age+"岁");
//    }
//    public void love (){
//        System.out.println("my lover is "+lover);
//    }
//}
//
//public class test {
//    public static void main(String[] args){
//        Person person =new Person();
//        person.show();
//        person.love();
//          person.eat();
//          person.sleep();
//    }
//}

//编写一个Calculator类，有两个属性num1,num2这两个数据的值，不能在定义的同时初始化，最后实现加减乘除。
//class Calculator{
//    int num1;
//    int num2;
//    {
//        num1=35;
//        num2=7;
//    }
//    public void plus(int num1,int num2){
//        System.out.println(num1+num2);
//    }
//    public void subtraction(int num1,int num2) {
//        if (num1 > num2) {
//            System.out.println(num1-num2);
//        }else {
//            System.out.println(num2 - num1);
//        }
//    }
//    public void multplication (int num1,int num2){
//        System.out.println(num1*num2);
//    }
//    public void division (int num1,int num2){
//        System.out.println(num1/num2);
//    }
//
//        }
//        public class test{
//    public static void main(String[] args){
//      Calculator cal=new Calculator();
//      cal.plus( 35,7);
//      cal.subtraction(35,7);
//      cal.multplication(35,7);
//      cal.division(35,7);
//    }
//}

//设计一个包含多个构造函数的类，并分别用这些构造函数来进行实例化对象。
//class multfuction{
//    int age;
//    String name;
//    String country;
//    public multfuction(){
//        this.age =18;
//        this.name="Aurora";
//        this.country="中国";
//    }
//    public multfuction (int age){
//        this.age =age;
//    }
//    public multfuction(String name,String country){
//        this.name=name;
//        this.country=country;
//    }
//    public void show(){
//        System.out.println("name:"+name+" country"+country);
//    }
//
//}
//public class test{
//    public static void main(String[] args){
//        multfuction mul=new multfuction("Aurora","中国");
//        mul.show();
//    }
//}

//普通代码块
//public class test{
//    public static void main(String[] args){
//        {
//            int x=10;
//            System.out.println("x1="+x);
//        }
//        int x=100;
//        System.out.println("x2="+x);
//    }
//}

//实例代码块
//class Person{
//    private String name;
//    private int age;
//    private String sex;
//    public Person(){
//        System.out.println("I am Person init()!");
//    }
//    //实例代码块
//    {
//        this.name="小明";
//        this.age=16;
//        this.sex="man";
//        System.out.println("I am instance init()!");
//    }
//    public void show(){
//        System.out.println("name:"+name+"age:"+age+"sex"+sex);
//    }
//
//}
//public class test{
//    public static void main(String[] args) {
//        Person p1=new Person();
//        p1.show();
//    }
//}

//静态代码块
//class Person{
//    private String name;
//    private int age;
//    private String sex;
//    private static int count=0;
//    public Person(){
//        System.out.println("I am Person init()!");
//    }
//
//    //静态代码块
//    static {
//        count=10;
//        System.out.println("I am static init()!");
//    }
//    public void show(){
//        System.out.println("name:"+name+"age:"+age+"sex"+sex);
//    }
//}
//public class test{
//    public static void main(String[] args) {
//        Person p1=new Person();
//       Person p2=new Person();
//    }
//}

//通过匿名对象调用方法
class Person{
    private String name;
    private int age;
public Person(String name,int age){
     this.age=age;
     this.name=name;
   }
   public void show(){
       System.out.println("name:"+name+"age:"+age);
   }
}

public  class test{
    public static void main(String[] args) {
        new Person ("caocao",19).show();
    }
}