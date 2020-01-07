package Assignment;

import static org.junit.Assert.assertEquals;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.junit.Test;

public class BoundedQueueTest {

    @Test
    public void testPut() {
        BoundedQueue<String> bqueue = new BoundedQueue<>(5);
        bqueue.put("Haramrit");
        assertEquals(bqueue.get(), "Haramrit");
    }

    @Test
    public void testGet() {
        BoundedQueue<String> bqueue = new BoundedQueue<>(5);
        bqueue.put("Neel");
        assertEquals(bqueue.get(), "Neel");
    }

    @Test
    public void testGetAll() {
        BoundedQueue<String> bqueue = new BoundedQueue<>(5);
        List<String> expected = Arrays.asList("Neel", "Nabeel", "Ajit");
        bqueue.put("Neel");
        bqueue.put("Nabeel");
        bqueue.put("Ajit");
        assertEquals(expected, bqueue.getAll());
    }

    @Test
    public void testPutAll() {
        BoundedQueue<String> bqueue = new BoundedQueue<>(3);
        List<String> original = new ArrayList<>();
        original.add("Tejasvi");
        original.add("Rashi");
        original.add("Shruthi");
        bqueue.putAll(original);
        assertEquals(original, bqueue.getAll());
    }
}