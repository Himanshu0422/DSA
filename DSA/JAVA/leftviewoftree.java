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

public class leftviewoftree {
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

    public static void leftView(Node root, ArrayList<Integer> list, int level){
		if(root == null){
			return;
		}

		if(level == list.size()){
			list.add(root.data);
		}
		leftView(root.left, list, level+1);
		leftView(root.right, list, level+1);
    }

    public static void main(String[] args) {
        Node root = null;
        Scanner sc = new Scanner(System.in);
        root = buildTree(sc, root);
        ArrayList<Integer> list = new ArrayList<>();
        leftView(root, list, 0);
        // System.out.print(list);
        for(int i = 0; i<list.size(); i++){
            System.out.print(list.get(i) + " ");
        }
    }
}
