/**
 * JUnit tests for MyString class
 * @author Haramrit Singh Khurana
 */

package MyString;

import org.junit.Test;
import static org.junit.Assert.*;

import java.util.Iterator;

public class MyStringTest {
    @Test public void testNextReturnsNextCharacter() {
        MyString mynewString = new MyString("cat");
        Iterator<String> itr = mynewString.iterator();
        assertEquals(true, itr.hasNext());
        assertEquals("Returned the next character in the MyString object", itr.next(), "c");
    }

    @Test public void testPalindrome(){
        MyString mynewString = new MyString("cat");
        String res = "";
        for (String m : mynewString) {
            res = m + res;
        }
        assertEquals(res, "tac");
    }

    @Test(expected = UnsupportedOperationException.class)
    public void testRemoveUnsupportedOperation(){
        MyString mynewString = new MyString("cat");
        Iterator<String> itr = mynewString.iterator();
        itr.remove();
    }
}
