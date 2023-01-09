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

public class bottomviewoftree {
    public static Node buildTree(Scanner sc, Node root) {
        int data = sc.nextInt();
        root = new Node(data);

        if (data == -1) {
            return null;
        }

        root.left = buildTree(sc, root.left);
        root.right = buildTree(sc, root.right);

        return root;
    }

    // public static List<Integer> bottomView(Node root) {
    // List<Integer> list = new ArrayList<>();
    // Map<Integer, Integer> mpp = new TreeMap<>(Collections.reverseOrder());
    // Queue<Node> q = new LinkedList<>();
    // if (root == null) {
    // return null;
    // }
    // root.hd = 0;
    // q.add(root);
    // while (!q.isEmpty()) {
    // Node y = q.remove();
    // int hd = y.hd;
    // mpp.put(hd, y.data);
    // if (y.left != null) {
    // y.left.hd = hd - 1;
    // q.add(y.left);
    // }
    // if (y.right != null) {
    // y.right.hd = hd + 1;
    // q.add(y.right);
    // }
    // }
    // for (Map.Entry<Integer, Integer> e : mpp.entrySet()) {
    // list.add(e.getValue());
    // }
    // return list;
    // }

    public static ArrayList<Integer> bottomView(Node root) {
        ArrayList<Integer> list = new ArrayList<>();
        Map<Integer, Integer> mpp = new LinkedHashMap<>();
        if (root == null) {
            return null;
        }
        int hd = 0;
        root.hd = hd;
        mpp.put(hd, root.data);
        bottomViewUtil(root.left, mpp, hd - 1);
        bottomViewUtil(root.right, mpp, hd + 1);
        for (Map.Entry<Integer, Integer> e : mpp.entrySet()) {
            list.add(e.getValue());
        }
        return list;
    }

    public static void bottomViewUtil(Node root, Map<Integer, Integer> mpp, int hd) {
        if (root == null) {
            return;
        }
        root.hd = hd;
        if (!mpp.containsKey(hd) || mpp.get(hd) < root.data) {  // add this line
            mpp.put(hd, root.data);
        }
        bottomViewUtil(root.left, mpp, hd - 1);
        bottomViewUtil(root.right, mpp, hd + 1);
    }

    public static void main(String[] args) {
        Node root = null;
        Scanner sc = new Scanner(System.in);
        root = buildTree(sc, root);
        ArrayList<Integer> list = new ArrayList<>();
        list = bottomView(root);
        System.out.print(list);
    }
}