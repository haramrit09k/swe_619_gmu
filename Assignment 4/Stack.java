import java.util.*;

/**
 * Bloch's Stack example page 60, 3rd edition
 */

public class Stack {

    private Object[] elements;
    private int size = 0;
    private static final int DEFAULT_INITIAL_CAPACITY = 16;

    public Stack() {
        this.elements = new Object[DEFAULT_INITIAL_CAPACITY];
    }

    public void push(Object e) {
        ensureCapacity();
        elements[size++] = e;
    }

    public Object pop() {
        if (size == 0)
            throw new IllegalStateException("Stack.pop");
        Object result = elements[--size];
        elements[size] = null;
        return result;
    }

    private void ensureCapacity() {
        if (elements.length == size) {
            Object oldElements[] = elements;
            elements = new Object[2 * size + 1];
            System.arraycopy(oldElements, 0, elements, 0, size);
        }
    }

    public boolean repOk() {
        boolean repOkVal = true;
        Object[] newElements = new Object[size];
        System.arraycopy(elements, 0, newElements, 0, size);
        List<Object> st = Arrays.asList(newElements);
        if (st == null || st.isEmpty() || st.contains(null)) {
            System.out.println(st == null);
            System.out.println(st.contains(null));
            System.out.println(st.size() == 0);
            repOkVal = false;
        }
        return repOkVal;
    }

    @Override
    public String toString() {
        if (!repOk()) {
            return "reP NOT OK";
        } else {
            String aF = "";
            for (int i = size - 1; i >= 0; i--) {
                aF = aF + " | " + elements[i];
                if (i == size - 1)
                    aF += " <- TOP";
                aF += "\n\n";
            }
            return aF;
        }
    }

    public static void main(String[] args) {
        Stack s = new Stack();
        s.push("amish");
        s.push("rushil");
        s.push(null);
        System.out.println(s.toString());
    }

}