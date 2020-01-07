/**
 * Bloch's Stack example from page 60, 3rd edition CONVERTED to ImmutableStack
 * @author Haramrit Singh Khurana
 */

package ImmutableStack;

// import java.util.*;

public class ImmutableStack {

    private Object[] elements;
    int size = 0;
    private static final int DEFAULT_INITIAL_CAPACITY = 16;

    public ImmutableStack() {
        this.elements = new Object[DEFAULT_INITIAL_CAPACITY];
    }

    private ImmutableStack(int size) {
        this.elements = new Object[size];
    }

    public ImmutableStack push(Object e) {
        ImmutableStack newStack = new ImmutableStack(size + 1);
        System.arraycopy(elements, 0, newStack.elements, 0, size);
        newStack.size = size + 1;
        newStack.elements[size] = e;
        return newStack;
    }

    public ImmutableStack pop() {
        if (size == 0)
            throw new IllegalStateException("ImmutableStack is empty!");

        ImmutableStack newStack = new ImmutableStack(size + 1);
        System.arraycopy(elements, 0, newStack.elements, 0, size);
        newStack.elements[size - 1] = null;
        newStack.size = size - 1;
        return newStack;
    }

    public Object viewTopElement() {
        if (size == 0)
            throw new IllegalStateException("ImmutableStack is empty");
        return elements[size - 1];
    }

    @Override
    public String toString() {
        String aF = "";
        for (int i = size-1; i >= 0; i--) {
            aF= aF+" | "+elements[i];
            if(i == size - 1)
                aF+= " <- TOP";                    
            aF+= "\n";
        }
        // System.out.println(stack);
        return aF; 
    }

    public static void main(String[] args) {
        ImmutableStack is = new ImmutableStack().push("car").push("bike").push("plane").pop();
        System.out.println(is.toString());
    }

}
