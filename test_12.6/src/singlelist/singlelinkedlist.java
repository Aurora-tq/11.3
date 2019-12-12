package singlelist;
//负责具体存储元素内容，以及下个存储节点的地址（车厢）
//Node类是  singlelinkedlist来使用
class Node {
    //每个节点内部存储的元素值
    private int data;
    //存储下一个节点的地址
     Node next;

    public Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }
     public Node (int x){
        data=x;
    }

    public int getData() {
        return data;
    }

    public void setData(int data) {
        this.data = data;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }
}
//负责提供给用户使用，用户使用此类来存储元素（火车）
    public class singlelinkedlist {
    private int size;
    private Node last;
    private Node first;
        public void add(int data) {
        addLast(data);
        }
        //尾插法
        public void addLast(int data){
            //产生一个新的节点
            Node node=new Node(data,null);
            //此时火车还没有挂载车厢
            if(last==null){
                last= first =node;
                size++;
                return;
            }
            last.next=node;
            last=node;
            size++;
        }
        //头插法
        public void addfirst(int data){
           Node node=new Node(data,null);
           if(first==null){
               last=first=node;
               size++;
               return;
           }
           first=node.next;
           first=node;
           size++;
        }
        //向指定索引位置插入新的节点
    public void add(int index,int data){
            if(index<0||index>size){
                System.out.println("索引非法！");
                return;
            }
            if(index==size){
                addLast(data);
                size++;
            }else if(index==0){
                addfirst(data);
                size++;
            }else{
                Node newnode=new Node(data,null);
                Node prev=getIndex(index-1);
                newnode.next=prev.next;
                prev.next=newnode;
                size++;
            }
    }
    //删除一个节点
    public void remove(int data) {
        //判断要删除的第一个是不是头节点
//        if (first.getData() == data) {
//            first = first.next;
//            size--;
//            return;
//        } else {
//            Node prev = first;
//            while (prev.next != null) {
//                //判断完之后链表不为空
//                if (prev.next.getData() == data) {
//                    prev.next = prev.next.next;
//                    size--;
//                    return;
//                } else {
//                    prev = prev.next;
//                }
//            }
//        }
        //引入虚拟头节点
        Node dammyHead=new Node(data-1,null);
        //虚拟头节点.next指向first
        dammyHead.next=first;
        //判断要删除的元素所需要的条件
        Node temp =first;
        while(temp.next!=null){
            if(temp.next.getData()==data){
                temp.next=temp.next.next;
                size--;
                break;
            }else{
                temp=temp.next;
            }
        }
    }
    //删除出现的所有节点数据
    public void removeall(int data){
            //1->1->3->4->5
            //所删除元素在中间
//        while(first!=null&&first.getData()==data){
//            first=first.next;
//            size--;
//        }
//        //删除完之后链表为空
//        if(first==null){
//            return;
//        }else{
//            //此时一定不为空
//            Node prev=first;
//            if(prev.next.getData()==data){
//                prev.next=prev.next.next;
//                size--;
//            }else{
//                prev=prev.next;
//            }
//        }
        //引入虚拟头结点
        Node dammyHead=new Node(data-1,null);
        dammyHead.next=first;
        Node temp=dammyHead;
        while (temp.next!=null) {
            if (temp.next.getData() == data) {
                temp.next = temp.next.next;
                size--;
            } else {
                temp = temp.next;
            }
        }
            first = dammyHead.next;
    }
    // 回文链表
    // 原链表: 1->2->3->4->5->null
    // 回文链表: 5->4->3->2->1->null
    // 将原链表遍历一次，边遍历边头插新的链表
    public Node reverse(Node head){
        //判断边界
        if (head==null||head.next==null){
            return head;
        }
        // 当前链表不为空,遍历当前链表,产生新节点头插另一个链表
        Node newhead=new Node(head.getData(),null);
        // 遍历原先链表
        while(head.next!=null){
            // 产生新节点
            Node node=new Node(head.next.getData(),null);
            // 将新节点头插到新链表头部
            node.next=newhead;
            newhead=node;
            head=head.next;
        }
        return newhead;
    }

    //求链表的总长度
    private int getlength(Node node){
            int count=0;
            Node temp=node;
            while(temp!=null){
                temp=temp.next;
                count++;
            }
            return count;
    }
    //给定一个带头节点head的非空链表，返回链表的中间结点。如果有两个中间结点，则返回第二个中间结点。
    public Node reback(Node head){
            //给定一个带头节点head的非空链表
        int len=getlength(head);
        int midlen=len/2;
        Node node=head;
        if(head==null){
            System.out.println("出现错误！");
            return null;
        }else if(head.next==null){
            return head;
        }
        for (int i = 0; i <midlen ; i++) {
            node=node.next;
        }
        return node;
    }
    //将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
    //1->2->3
    //1->4->5
    //1->1->2->3->4->5
    public Node combine(Node node1,Node node2){
           if(node1==null){
               return node2;
           }
           if(node2==null){
               return node1;
           }
            //合并后的新链表的头部
        //永远指向新链表的尾部
        Node resnode=new Node(0);
           //Node resnode=null;
        //永远指向新链表的头部
        Node cur=resnode;
        //遍历node1 node2
        while (node1!=null&&node2!=null) {
            if (node1.getData() <= node2.getData()) {
                Node node=new Node(node1.getData());
                if(cur==null){
                    cur=resnode=node;
                }else {
                    cur.next = node1;
                    cur = cur.next;
                    node1 = node1.next;
                }
            } else {
                cur.next = node2;
                cur = cur.next;
                node2 = node2.next;
            }
        }
        if(node1!=null){
            cur.next=node2;
        }
        if(node2!=null){
            cur.next=node2;
        }
        return resnode.next;
    }

        //遍历一个链表
        public void print(){
            //从火车头开始以此遍历直到火车尾
//            Node temp=first;
//            while (temp!=null){
//                System.out.print(temp.getData());
//                //继续向下一个节点遍历
//                temp=temp.Next;
//            }
            for(Node x=first;x!=null;x=x.next){
                System.out.print(x.getData()+"、");
            }
        }
        //封装一个方法找到插入位置的前驱节点
    private Node getIndex(int index){
           Node prev=first;
        for (int i = 0; i <index ; i++) {
            prev=prev.next;
        }
        return prev;
    }

    }

