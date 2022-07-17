import java.awt.Point;
import java.io.*;
import java.math.BigInteger;
import java.util.*;
import static java.lang.Math.*;

public class Solution implements Runnable {

    BufferedReader in;
    PrintWriter out;
    StringTokenizer tok = new StringTokenizer("");

    public void run() {
        try {
            // long t1 = System.currentTimeMillis();
            // if (System.getProperty("ONLINE_JUDGE") != null) {
            in = new BufferedReader(new InputStreamReader(System.in));
            out = new PrintWriter(System.out);
            // } else {
            // in = new BufferedReader(new FileReader("input.txt"));
            // out = new PrintWriter("output.txt");
            // }
            Locale.setDefault(Locale.US);
            solve();
            in.close();
            out.close();
            long t2 = System.currentTimeMillis();
            // System.err.println("Time = " + (t2 - t1));
        } catch (Throwable t) {
            t.printStackTrace(System.err);
            System.exit(-1);
        }

    }

    public static void main(String[] args) {
        new Thread(null, new Solution(), "", 256 * (1L << 20)).start();
    }

    String readString() throws IOException {
        while (!tok.hasMoreTokens()) {
            tok = new StringTokenizer(in.readLine());
        }
        return tok.nextToken();
    }

    int readInt() throws IOException {
        return Integer.parseInt(readString());
    }

    long readLong() throws IOException {
        return Long.parseLong(readString());
    }

    double readDouble() throws IOException {
        return Double.parseDouble(readString());
    }

    void solve() throws IOException {
        // var sc = new Scanner(System.in);
        var nums = new ArrayList<Integer>();
        int n = (int) Math.pow(2, readInt());
        int m = readInt();
        DBG.prnt(n);
        while (n > 0) {
            int temp = readInt();
            nums.add(temp);
            n--;
        }
        DBG.prnt(nums);
        var st = new ST(nums);
        while (m > 0) {
            int pos = readInt();
            int val = readInt();
            st.update(1, 1, nums.size(), pos, val);
            System.out.println(st.st.get(1).val);
            m--;
        }
        // sc.close();
    }
}

class DBG {
    public static void prnt(Object o) {
        // System.err.println(o);
    }
}

class Node {
    String type;
    int val;

    public Node(String ty, int v) {
        val = v;
        type = ty;
    }
}

class ST {
    public ArrayList<Node> st;

    void merge(int idx) {
        var cur = st.get(idx);
        var childType = st.get(idx * 2).type;
        if (childType == "L" || childType == "^") {
            cur.type = "|";
        } else {
            cur.type = "^";
        }
        var c1 = st.get(idx * 2);
        var c2 = st.get(idx * 2 + 1);
        if (cur.type == "|") {
            cur.val = c1.val | c2.val;
        } else if (cur.type == "^") {
            cur.val = c1.val ^ c2.val;
        }
    }

    void buildST(int idx, int l, int r, ArrayList<Integer> nums) {
        if (l == r) {
            st.set(idx, new Node("L", nums.get(l - 1)));
            return;
        }
        if (l < r) {
            int mid = l + (r - l) / 2;
            buildST(2 * idx, l, mid, nums);
            buildST(2 * idx + 1, mid + 1, r, nums);
            merge(idx);
        }
    }

    public ST(ArrayList<Integer> nums) {
        st = new ArrayList<>(4 * nums.size());
        for (int i = 0; i < 4 * nums.size(); i++) {
            st.add(new Node("", 0));
        }
        buildST(1, 1, nums.size(), nums);
    }

    void update(int idx, int l, int r, int pos, int val) {
        if (l == r && pos == l) {
            st.get(idx).val = val;
            return;
        }
        if (l <= pos && pos <= r) {
            int mid = l + (r - l) / 2;
            update(idx * 2, l, mid, pos, val);
            update(idx * 2 + 1, mid + 1, r, pos, val);
            merge(idx);
        }

    }
}
