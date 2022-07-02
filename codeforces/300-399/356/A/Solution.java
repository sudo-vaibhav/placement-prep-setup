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

    // char readChar() throws IOException {
    // return Character.parse
    // }
    double readDouble() throws IOException {
        return Double.parseDouble(readString());
    }

    void solve() throws IOException {
        // var sc = new Scanner(System.in);
        // var sb = readString();
        // int m = readInt();
        // var st = new ST(sb);
        int n = readInt(), m = readInt();
        var alive = new TreeSet<Integer>();
        var ans = new int[n];
        for (int i = 1; i <= n; i++) {
            alive.add(i);
        }
        while (m > 0) {
            var toKill = new HashSet<Integer>();
            int l = readInt(), r = readInt(), w = readInt();
            var sub = alive.subSet(l, r + 1);
            for (var knight : sub) {
                if (knight != w) {
                    toKill.add(knight);
                }
            }
            for (var killed : toKill) {
                ans[killed - 1] = w;
                alive.remove(killed);
            }
            m--;
        }
        for (var x : ans) {
            System.out.print(x + " ");
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
    int[] counts;

    public Node() {
        counts = new int[26];
    }
}

class ST {
    public ArrayList<Node> st;

    Node merge(Node n1, Node n2) {
        var temp = new Node();
        for (int i = 0; i < 26; i++) {
            temp.counts[i] = n1.counts[i] + n2.counts[i];
        }
        return temp;
    }

    void buildST(int idx, int l, int r, String sb) {
        if (l > r)
            return;
        if (l == r) {
            st.set(idx, new Node());
            st.get(idx).counts[sb.charAt(l - 1) - 'a']++;
            return;
        }
        int mid = l + (r - l) / 2;
        buildST(2 * idx, l, mid, sb);
        buildST(2 * idx + 1, mid + 1, r, sb);
        st.set(idx, merge(
                st.get(2 * idx),
                st.get(2 * idx + 1)));
    }

    public ST(String sb) {
        st = new ArrayList<>(4 * sb.length());
        for (int i = 0; i < 4 * sb.length(); i++) {
            st.add(new Node());
        }
        buildST(1, 1, sb.length(), sb);
    }

    void update(int idx, int l, int r, int pos, char val) {
        if (l > pos || r < pos)
            return;
        if (l == r && pos == l) {
            st.set(idx, new Node());
            st.get(idx).counts[val - 'a']++;
            return;
        }
        // if (l <= pos && pos <= r) {
        int mid = l + (r - l) / 2;
        update(idx * 2, l, mid, pos, val);
        update(idx * 2 + 1, mid + 1, r, pos, val);
        st.set(idx, merge(st.get(idx * 2), st.get(idx * 2 + 1)));
        // }

    }

    public Node query(int idx, int l, int r, int lq, int rq) {
        if (l > rq || r < lq) {
            return new Node();
        }
        if (lq <= l && r <= rq) {
            return st.get(idx);
        }
        int mid = l + (r - l) / 2;
        return merge(
                query(2 * idx, l, mid, lq, rq),
                query(2 * idx + 1, mid + 1, r, lq, rq));
    }
}
