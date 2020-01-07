/**
 * MyString is an immutable class similar to String class.
 * It implements the Iterable interface.
 * @author Haramrit Singh Khurana
 */

package MyString;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;

public final class MyString implements Iterable<String> {

    private final String input;
    private final ArrayList<String> aList;

    public MyString(String input) {
        this.input = input;
        String str[] = input.split("");
        this.aList = new ArrayList<String>(Arrays.asList(str));
    }

    @Override
    public Iterator<String> iterator() {
        return new MyStringIterator();
    }

    private class MyStringIterator implements Iterator<String> {
        private int position = 0;

        @Override
        public boolean hasNext() {
            return position < input.length();
        }

        @Override
        public String next() {
            position++;
            return aList.get(position - 1);
        }

    }
}
