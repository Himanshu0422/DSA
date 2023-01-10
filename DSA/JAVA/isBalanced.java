import java.util.*;
public class isBalanced {

	static Scanner scn = new Scanner(System.in);
	boolean ans = true;

	public static void main(String[] args) {
		isBalanced m = new isBalanced();
		BinaryTree bt = m.new BinaryTree();
		System.out.println(bt.isBalanced());
	}

	private class BinaryTree {
		private class Node {
			int data;
			Node left;
			Node right;
		}

		private Node root;
		private int size;


		public BinaryTree() {
			this.root = this.takeInput(null, false);
		}

		public Node takeInput(Node parent, boolean ilc) {

			int cdata = scn.nextInt();
			Node child = new Node();
			child.data = cdata;
			this.size++;

			// left
			boolean hlc = scn.nextBoolean();

			if (hlc) {
				child.left = this.takeInput(child, true);
			}

			// right
			boolean hrc = scn.nextBoolean();

			if (hrc) {
				child.right = this.takeInput(child, false);
			}

			// return
			return child;
		}

		public boolean isBalanced() {
			return this.isBalanced(this.root).isBalanced;
		}

		private BalancedPair isBalanced(Node node) {
			BalancedPair p = new BalancedPair();
            if (node == null) {
                p.height = 0;
                p.isBalanced = true;
                return p;
            }


            BalancedPair left = isBalanced(node.left);
            BalancedPair right = isBalanced(node.right);

            p.height = Math.max(left.height, right.height) + 1;
            p.isBalanced = left.isBalanced && right.isBalanced && (Math.abs(left.height - right.height) <= 1);

            return p;
		}

		private class BalancedPair {
			int height;
			boolean isBalanced;
		}

	}
}