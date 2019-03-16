int main()
{
    *(int*)0 = 0;
}

// To generate core file
ulimit -c unlimited
