import java.util.*;
public class arraylistbt {

	static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
		arraylistbt m = new arraylistbt();
		BinaryTree bt1 = m.new BinaryTree();
		System.out.println(bt1.levelArrayList());
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

		public ArrayList<ArrayList<Integer>> levelArrayList() {
			ArrayList<ArrayList<Integer>> finalAns = new ArrayList<ArrayList<Integer>>();

			Deque<Node> q = new ArrayDeque<>();
			if(this.root == null){
				return finalAns;
			}
			q.add(this.root);

			while(!q.isEmpty()){
				int size = q.size();
				ArrayList<Integer> ans = new ArrayList<>();
				for(int i = 0; i<size; i++){
					Node curr = q.poll();
					ans.add(curr.data);
					if(curr.left != null){
						q.add(curr.left);
					}
					if(curr.right != null){
						q.add(curr.right);
					}
				}
				finalAns.add(ans);
			}
			return finalAns;
		}

	}

}
