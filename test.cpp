signed main()
{
    fastIO;
    int n, i;
    cin >> n;
    vi a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        b[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
