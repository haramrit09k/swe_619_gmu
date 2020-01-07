/**
 * Junit Theory for Bloch's Stack Example converted to an Immutable Stack
 * @author: Haramrit Singh Khurana, Aditya Sawant
 */

package ImmutableStack;

import org.junit.Test;
import org.junit.experimental.theories.DataPoints;
import org.junit.experimental.theories.FromDataPoints;
import org.junit.experimental.theories.Theories;
import org.junit.experimental.theories.Theory;
import static org.junit.Assert.*;
import static org.junit.Assume.assumeTrue;
import org.junit.runner.RunWith;

@RunWith(Theories.class)
public class ImmutableStackTest {

    int count = 0;

    @DataPoints("stack")
    public static ImmutableStack[] im = { new ImmutableStack().push(1).push(2), new ImmutableStack().push("ELEPHANT"),
            new ImmutableStack(), null };

    @DataPoints("items")
    public static Object[] items() {
        return new Object[] { 1, 2, 3, 3.14, 42.99, "CAT", "DOG", "MOUSE", false, true, null };
    }

    @Theory
    public void Theory_LastElementPushedIsStackTop(@FromDataPoints("items") Object item,
            @FromDataPoints("stack") ImmutableStack stack) {
        System.out.println("Stack is " + stack);
        System.out.println("Item is " + item);
        System.out.println();

        assumeTrue(stack != null);
        stack = stack.push(item);
        assertEquals(stack.viewTopElement(), item);
    }

    @Theory
    public void Theory_NewObjectReturnedAfterPushingItemOnStack(@FromDataPoints("items") Object item,
            @FromDataPoints("stack") ImmutableStack stack) {
        assumeTrue(stack != null);
        assertNotSame("The two stack objects are SAME", stack.push(item), stack);
    }

    @Theory
    public void Theory_NewObjectReturnedAfterPoppingItemOffStack(@FromDataPoints("stack") ImmutableStack stack) {
        assumeTrue(stack != null && stack.size > 0);
        assertNotSame("The two stack objects are SAME", stack.pop(), stack);
    }

    @Test
    public void Test_ImmutableStack_Push() {
        ImmutableStack st = new ImmutableStack().push("Cat");
        assertNotSame("New ImmutableStack object created with push operation", st.push("Cat"), st);
    }

    @Test
    public void Test_ImmutableStack_Pop() {
        ImmutableStack st = new ImmutableStack().push("Cat").push("Dog").push("Mouse").pop();
        assertNotSame("New ImmutableStack object returned after pop operation",
                st.push("Cat").push("Dog").push("Mouse").pop(), st);
    }

    @Test(expected = IllegalStateException.class)
    public void Test_ImmutableStack_EmptyStack_Pop() {
        new ImmutableStack().pop();
    }

    @Test
    public void Test_ImmutableStack_TopElement() {
        Object ob = new ImmutableStack().push("Cat").push("Dog").push("Mouse").viewTopElement();
        assertTrue("The top of the ImmutableStack is of type Object", ob instanceof Object);
    }

    @Test(expected = IllegalStateException.class)
    public void Test_ImmutableStack_EmptyStack_Top() {
        new ImmutableStack().viewTopElement();
    }

}
