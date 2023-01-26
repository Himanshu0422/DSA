import java.util.*;
public class levelordertree {

	static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
		levelordertree m = new levelordertree();
		BinaryTree bt = m.new BinaryTree();
		bt.levelOrderZZ();
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

		public void levelOrderZZ() {
			if (this.root == null) {
				return;
			}

			Queue<Node> q = new LinkedList<>();
			q.add(this.root);
			boolean zigzag = false;

			while (!q.isEmpty()) {
				int size = q.size();
				List<Integer> level = new ArrayList<>();
				for (int i = 0; i < size; i++) {
					Node temp = q.poll();
					level.add(temp.data);
					if (temp.left != null) {
						q.add(temp.left);
					}
					if (temp.right != null) {
						q.add(temp.right);
					}
				}
				if (zigzag) {
					Collections.reverse(level);
				}
				zigzag = !zigzag;
				for (int i=0; i<level.size(); i++) {
					int curr = level.get(i);
					System.out.print(curr + " ");
				}
			}
		}
	}

}
