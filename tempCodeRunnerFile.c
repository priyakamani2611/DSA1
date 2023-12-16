int display()
{
    int i = f;
    if (f < 0)
    {
        printf("<------------Queue Is Empty--------->\n");
    }
    else
    {
        do
        {
            printf("%d\t",a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}