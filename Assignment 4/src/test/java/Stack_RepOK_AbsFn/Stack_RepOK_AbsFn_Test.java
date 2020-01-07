/**
 * Junit Test Cases for Assignment 4
 * @author Haramrit Singh Khurana
 */
package Stack_RepOK_AbsFn;

import org.junit.Test;
import static org.junit.Assert.*;

public class Stack_RepOK_AbsFn_Test {

    /*
     * In the following test Test_Stack_RepOKFalse_EmptyStack the stack pushes an
     * element and pops it off, resulting in an empty stack onto the stack which
     * should result in repOk() returning false.
     */

    @Test
    public void Test_Stack_RepOKFalse_EmptyStack() {
        Stack s = new Stack();
        s.push("Haramrit");
        s.pop();
        assertFalse("Stack cannot be empty, rep-invariant not OK", s.repOk());
    }

    /*
     * In the following test Test_Stack_RepOKFalse_NullElement the stack pushes a
     * null element onto the stack which should result in repOk() returning false.
     * However, since the st.contains(null) condition is missing in the repOK()
     * function, it returns true which is faulty code.
     */

    @Test
    public void Test_Stack_RepOKFalse_NullElement() {
        Stack s = new Stack();
        s.push("Haramrit");
        s.push("SWE 619");
        s.push(null);
        assertFalse("Stack cannot have null elements, rep-invariant not OK", s.repOk());
    }

    @Test
    public void Test_Stack_RepOKTrue() {
        Stack s = new Stack();
        s.push("Haramrit");
        s.push("SWE 619");
        s.push("null");
        assertTrue("The rep-invariant is OK", s.repOk());
    }
}
