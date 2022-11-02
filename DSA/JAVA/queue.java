public class queue {

    int data[];
    int front;
    int index;

    queue(){
        data = new int[5];
        front = 0;
        index = 0;
    }

    queue(int x){
        data = new int[x];
        front = 0;
        index = 0;
    }

    boolean isEmpty(){
        return index == 0;
    }

    boolean isFull(){
        return index == data.length;
    }

    int peek(){
        return data[front];
    }

    void enQueue(int x) throws Exception{
        if(isFull()){
            throw new Exception("Queue Full");
        }
        data[(index+front)%data.length] = x;
        index++;
    }

    int deQueue() throws Exception{
        if(isEmpty()){
            throw new Exception("Queue Empty");
        }
        int x = data[front];
        front++;
        index--;
        return x;
    }

    void display(){
        for(int i = front; i<index; i++){
            System.out.print(data[i] + " ");
            System.out.println();
        }
    }
    public static void main(String[] args) throws Exception {
        // System.out.println("Hlo");
        queue h = new queue();
        System.out.println(h.isEmpty());
        h.enQueue(10);
        h.enQueue(20);
        h.enQueue(30);
        h.enQueue(40);
        h.enQueue(50);
        System.out.println(h.isFull());
        h.display();
        System.out.println(h.peek());
        System.out.println(h.deQueue());
        System.out.println(h.peek());
    }
}