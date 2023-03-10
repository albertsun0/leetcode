import java.io.*;
import java.util.*;
// I coded up a recursive search solution to the following Kattis problem, but I'm getting WA on the sample case...
// https://open.kattis.com/problems/geppetto
public class bug
{
    
    int N, M;
    ArrayList[] bad;
    int ans = 0;
    
    public void search(HashSet<Integer> cur, int ind)
    {
        System.out.println("search");
        for(Integer i : cur ){
            System.out.print(i + " ");
        }
        System.out.println();
        System.out.println("ind = " + ind);

        if (ind == N)
        {
            System.out.println("works");
            ++ans;
            return;
        }
        
        search(cur, ind + 1);
        
        System.out.println();
        System.out.print("second half    ind = " + ind + " | ");
        for(Integer i : cur ){
            System.out.print(i + " ");
        }
        System.out.print("        ");
        boolean canAdd = true;
        
        for (Object bb : bad[ind])
        {
            Integer b = (Integer) bb;
            if (cur.contains(b))
            {
                canAdd = false;
            }
        }
        System.out.println(canAdd);
        if (canAdd)
        {
            cur.add(ind);
            search(cur, ind + 1);
            cur.remove(ind);
        }
    }
    
    public void run() throws Exception
    {
        Scanner in = new Scanner(System.in);
        N = in.nextInt();
        M = in.nextInt();
        bad = new ArrayList[N];
        
        for (int i = 0; i < N; ++i)
        {
            bad[i] = new ArrayList<Integer>();
        }
        
        for (int i = 0; i < M; ++i)
        {
            int a = in.nextInt(), b = in.nextInt();
            bad[a-1].add(b-1);
            bad[b-1].add(a-1);
        }
        
        search(new HashSet<Integer>(), 0);
        System.out.println(ans);        
        in.close();
    }
    
    public static void main(String[] args) throws Exception
    {
        new bug().run();
    }
}