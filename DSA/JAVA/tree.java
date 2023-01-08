// import java.util.*;

// class Node
// {
//     public int data;
//     public Node left;
//     public Node right;

//     public Node(int d)
//     {
//         this.data = d;
//         this.left = null;
//         this.right = null;
//     }
// }

// class Main
// {
//     public static Node buildTree(Node root)
//     {
//         Scanner sc = new Scanner(System.in);
//         // System.out.println("Enter the data: ");
//         int data = sc.nextInt();
//         root = new Node(data);

//         // System.out.println("Does node " + root.data + " have a left child? Enter 1 for yes, 0 for no: ");
//         boolean left = sc.nextBoolean();
//         // sc.nextInt();
//         if (left)
//         {
//             root.left = buildTree(root);
//         }

//         // System.out.println("Does node " + root.data + " have a right child? Enter 1 for yes, 0 for no: ");
//         boolean right = sc.nextBoolean();
//         // sc.nextInt();
//         if (right)
//         {
//             root.right = buildTree(root);
//         }

//         return root;
//     }

//     public static void levelOrderTraversal(Node root)
//     {
//         Queue<Node> q = new LinkedList<>();
//         q.add(root);
//         q.add(null);

//         while (!q.isEmpty())
//         {
//             Node temp = q.poll();

//             if (temp == null)
//             {
//                 System.out.println();
//                 if (!q.isEmpty())
//                 {
//                     q.add(null);
//                 }
//             }
//             else
//             {
//                 System.out.print(temp.data + " ");
//                 if (temp.left != null)
//                 {
//                     q.add(temp.left);
//                 }
//                 if (temp.right != null)
//                 {
//                     q.add(temp.right);
//                 }
//             }
//         }
//     }

//     public static void main(String[] args)
//     {
//         Node root = null;
//         root = buildTree(root);
//         levelOrderTraversal(root);
//     }
// }

import java.util.*;

class Node
{
    public int data;
    public Node left;
    public Node right;

    public Node(int d)
    {
        this.data = d;
        this.left = null;
        this.right = null;
    }
}

class tree
{
    public static Node buildTree(Scanner sc, Node root)
    {
        // System.out.println("Enter the data: ");
        int data = sc.nextInt();
        root = new Node(data);

        // System.out.println("Does node " + root.data + " have a left child? Enter 1 for yes, 0 for no: ");
        boolean left = sc.nextBoolean();
        if (left)
        {
            root.left = buildTree(sc, root);
        }

        // System.out.println("Does node " + root.data + " have a right child? Enter 1 for yes, 0 for no: ");
        boolean right = sc.nextBoolean();
        if (right)
        {
            root.right = buildTree(sc, root);
        }

        return root;
    }

    public static void levelOrderTraversal(Node root)
    {
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while (!q.isEmpty())
        {
            Node temp = q.poll();

            if (temp == null)
            {
                System.out.println();
                if (!q.isEmpty())
                {
                    q.add(null);
                }
            }
            else
            {
                System.out.print(temp.data + " ");
                if (temp.left != null)
                {
                    q.add(temp.left);
                }
                if (temp.right != null)
                {
                    q.add(temp.right);
                }
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        Node root = null;
        root = buildTree(sc, root);
        levelOrderTraversal(root);
    }
}