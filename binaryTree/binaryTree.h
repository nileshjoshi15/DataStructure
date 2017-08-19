#ifndef _binary_tree
#define _binary_tree


class BinaryTree{
	private:
		struct Node{
			int value;
			Node* leftNode;
			Node* rightNode;
		};
		Node* rootNode;
		Node* CreateNode(int value);
	public:
		BinaryTree();
		~BinaryTree();
		void InsertNode(int value);
		bool SearchNode(int value);
		int FindMin();
		int FindMax();
	
	

};
#endif
