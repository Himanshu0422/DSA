import java.util.*;

class Node {
    public int data;
    public Node left;
    public Node right;
    public int hd; 

    public Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class topviewoftree {
    public static Node buildTree(Scanner sc,Node root) {
        Queue<Node> q = new LinkedList<>();
        // System.out.println("Enter data for root");
        // Scanner sc = new Scanner(System.in);
        int data = sc.nextInt();
        root = new Node(data);
        q.offer(root);

        while (!q.isEmpty()) {
            Node temp = q.poll();
            // System.out.println("Enter left node for: " + temp.data);
            int leftData = sc.nextInt();
            if (leftData != -1) {
                temp.left = new Node(leftData);
                q.offer(temp.left);
            }
            // System.out.println("Enter right node for: " + temp.data);
            int rightData = sc.nextInt();
            if (rightData != -1) {
                temp.right = new Node(rightData);
                q.offer(temp.right);
            }
        }
        return root;
    }

    public static ArrayList <Integer> topView(Node root){
        ArrayList<Integer> list = new ArrayList<>();
        TreeMap<Integer,Integer> mpp = new TreeMap<>();
        Queue<Node> q = new LinkedList<>();
        if(root == null){
            return null;
        }
        root.hd = 0;
        q.add(root);
        while(!q.isEmpty()){
            Node y = q.remove();
            int hd = y.hd;
            if(!mpp.containsKey(hd)){
                mpp.put(hd,y.data);
            }
            if(y.left != null){
                y.left.hd = hd - 1;
                q.add(y.left);
            }
            if(y.right != null){
                y.right.hd = hd + 1;
                q.add(y.right);
            }
        }
        for (Map.Entry<Integer, Integer> e : mpp.entrySet()) {
            list.add(e.getValue());
        }
        return list;
    }

    public static void main(String[] args) {
        Node root = null;
        Scanner sc = new Scanner(System.in);
        root = buildTree(sc, root);
        ArrayList<Integer> list = new ArrayList<>();
        list = topView(root);
        // System.out.print(list);
        for(int i = 0; i<list.size(); i++){
            System.out.print(list.get(i) + " ");
        }
    }
}
