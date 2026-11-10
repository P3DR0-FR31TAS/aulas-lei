public class LinkedBinarySearchTree<T> {
    private BinaryTreeNode<T> root;
    private int count;

    public LinkedBinarySearchTree() {
        this.root = null;
        this.count = 0;
    }

    public void addELement(T element) {
        BinaryTreeNode<T> newNode = new BinaryTreeNode<T>(element);
        Comparable<T> comparableElement = (Comparable<T>) element;
        if (root == null) {
            root = newNode;
        } else {
            BinaryTreeNode<T> current = root;
            boolean added = false;
            while (!added) {
                // Decisão de ir para a esquerda
                if (comparableElement.compareTo(current.getElement()) < 0) {
                    if (current.getLeft() == null) {
                        current.setLeft(newNode); // Encontrou lugar vago
                        added = true;
                    } else {
                        current = current.getLeft(); // Continua a descer
                    }
                }
                // Decisão para ir para a direita
                else {
                    if (current.getRight() == null) {
                        current.setRight(newNode); // Encontrou lugar vago
                        added = true;
                    } else {
                        current = current.getRight(); // Continua a descer
                    }
                }
            }
        }
        count++;
    }

    public T removeElement(T targetElemet) {
        Comparable<T> comparableElemet = (Comparable<T>) targetElemet;

        if (root == null) {
            return null;
        }
        
        BinaryTreeNode<T> current = root;
        BinaryTreeNode<T> parent = null;
        boolean found = false;

        while (current != null && found == false) {

            int comparasion = comparableElemet.equals(current.getElement());

            if(comparasion == 0) {
                found = true;
            }

            else {
                parent = current;

                if (comparasion < 0) {
                    current = current.getLeft();
                }
                else {
                    current = current.getRight();
                }

            }
        }
    }
}
