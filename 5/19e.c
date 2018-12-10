int e(int a[], int s, int n)
{

        int m;
        int li = 0;
        int re = n + 1;
        while (li < re -1)
        {
                m = (li + re) / 2;
                if (s <= a[m])
                {
                        re = m;
                } else {
                        li = m;
                }
        }
        return re;
}
