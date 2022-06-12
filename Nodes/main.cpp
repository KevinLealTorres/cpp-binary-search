int main()
{
    int arr[11] = { 10,30,40,70,81,82,99,101,200,399,999  }, sizearr = sizeof(arr) / sizeof(arr[0]), wanted = 999, nextindex = sizearr / 2, nextvalue = arr[nextindex];
    while (nextvalue != wanted)
    {
        if (nextindex >= sizearr || nextindex <= 0) return -1;
        if (nextvalue < wanted) nextindex += sizearr / nextindex;
        else nextindex -= sizearr / nextindex;
        nextvalue = arr[nextindex];
    }
    return 0;
}