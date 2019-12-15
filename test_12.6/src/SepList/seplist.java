package SepList;

import java.util.Arrays;

public class seplist {
    private int []num;
    private int size;
    public seplist(int length){
        num=new int[length];
    }
    //打印顺序表
    public void display(){
        for (int i = 0; i <size ; i++) {
            System.out.print(num[i]+"、");
        }
        System.out.println();
    }
    //在pos位置新增元素
    public void add(int data,int pos) {
        if (pos == size) {
            if (pos == num.length) {
                num = Arrays.copyOf(num, num.length << 1);
            }
            num[pos] = data;
            size++;
        }
        if (pos < 0 || pos > size) {
            System.out.println("索引非法！");
            return;
        }
         else if(pos==num.length) {
            num = Arrays.copyOf(num, num.length << 1);
        }
            //在中间插入元素
            System.arraycopy(num, pos, num, pos + 1, size - pos);
            num[pos] = data;
            size++;
        }
    //判定是否包含某个元素
    public boolean contains(int tofind){
        return false;
    }
    //查找某个元素对应的位置
    public int search(int tofind){
        return -1;
    }
    //获取pos位置元素
    public int getpos(int pos){
        return -1;
    }
    //给pos位置的元素设为value
    public void setpos(int pos,int value){

    }
    //删除第一次出现的关键字key
    public void remove(int toremove){

    }
    //获取顺序表长度
    public int size(){
        return size;
    }
    //清空顺序表
    public void clear(){
        Arrays.fill(num,0);
    }
}
