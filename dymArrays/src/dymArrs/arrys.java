package dymArrs;
import java.util.Arrays;
public class arrys {
    int num[];
    int size;

    public arrys(int length) {
        this.num = new int[length];
    }
    /**
     * 向动态数组中添加元素，默认向数组末尾添加
     *
     * @param data
     */
    public void add(int data) {
        if (size == num.length) {
            grow();
        }
        num[size] = data;
        size++;
    }

    /**
     * 向动态数组的任意位置插入元素
     *
     * @param index 插入的目标索引
     * @param data
     */
    public void add(int index, int data) {
        //判断index是否合理
        if (index < 0 || index > size) {
            //只要index > size 都是非法的，因为数组无法取到数组长度的下标
            System.out.println("索引非法！");
            return;
        }
        //向有效数字的末尾插入元素
        if (index == size) {
            add(data);
        } else {
            // 数组中间位置插入
            // 判断内部数组是否满载
            if (size == num.length) {
               grow();
            }
            //将index以及之后元素向后搬移
            System.arraycopy(num, index, num, index + 1, size - index);
            num[index] = data;
            size++;
        }
    }
    /**
     * 在数组中查找是否有指定data的元素，若有返回索引
     * @param data
     * @return 找到返回元素下标，否则返回-1
     */
    public int find(int data) {
        for (int i = 0; i < size; i++) {
            if (num[i] == data) {
                System.out.println("找到了！");
                return i;
            }
        }
        System.out.println("指定元素不存在！");
        return -1;
    }
    /**
     * 在数组中查找是否有指定元素
     *
     * @param data
     * @return
     */
    public boolean contains(int data) {
        for (int i : num) {
            if ( i== data) {
                System.out.println("找到了！");
                return true;
            }
        }
        return false;
    }
    /**
     * 在数组中删除第一个出现的指定内容
     *
     * @param data
     * @return
     */
    public boolean remove(int data) {
        for (int i = 0; i < size; i++) {
            if (num[i] == data) {
                //此时i是待删除元素的下标
                System.arraycopy(num, i + 1, num, i, size - i - 1);
                size--;
                return true;
            }
        }
        return false;
    }
    /**
     * 取得指定位置的元素
     *
     * @param index
     * @return
     */
    public int get(int index) {
        if (rangecheck(index)) {
            System.out.println("找到了！");
            return num[index];
        }
        return -1;
    }
    /**
     * 修改指定索引的内容
     *
     * @param index 指定的元素下标
     * @param data  修改后的内容
     * @return
     */
    public boolean set(int index, int data) {
        if (rangecheck(index)) {
            num[index] = data;
            return true;
        }
        return false;
    }
    // 返回动态数组长度
    public int size() {
        return size;
    }
    // 打印动态数组内容
    public void print() {
        for (int i = 0; i < size; i++) {
            System.out.print(num[i] + "、");
        }
        System.out.println();
    }
    // 清空所有数组元素
    public void clear() {
//        for (int i = 0; i <size; i++) {
//            num[i]=0;
//            size--;
        //将num中每个元素值改为0
        Arrays.fill(num, 0);
    }
    //内部数组扩容方法
    //此方法只有本类使用，因此将其封装
    private void grow() {
        num = Arrays.copyOf(num, num.length << 1);
    }
    //内部检验访问index是否合法
    private  boolean rangecheck(int index){
        if(index<0||index>=size){
            System.out.println("索引非法！");
            return false;
        }
        return true;
    }

}
