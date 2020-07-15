#include<bits/stdc++.h>

using namespace std;

struct point
{
    int x, y;
};

int n;
struct point points[110], pointsTemp[110], strip[110];

bool comp(struct point p1, struct point p2)
{
    return p1.x < p2.x;
}

int buildStrip(int start, int end, int referenceX, double minDist)
{
    int stripIndex = 0;
    while(start <= end)
    {
        if(abs(referenceX - points[start].x) <= minDist)
            strip[stripIndex++] = points[start];
        ++start;
    }
    return stripIndex;
}

void mergePoints(int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;

    while(i <= mid && j <= end)
    {
        if(points[i].y <= points[j].y)
            pointsTemp[k++] = points[i++];
        else
            pointsTemp[k++] = points[j++];
    }

    while(i <= mid)
        pointsTemp[k++] = points[i++];

    while(j <= end)
        pointsTemp[k++] = points[j++];

    for(i = start; i <= end; ++i)
        points[i] = pointsTemp[i];

    return ;
}

double pointDistance(struct point p1, struct point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

double findMinDistance(int stripIndex, double minDist)
{
    for(int i = 0; i < stripIndex; ++i)
        for(int j = i + 1; (j < stripIndex) && (strip[i].y - strip[j].y < minDist); ++j)
            minDist = min(pointDistance(strip[i], strip[j]), minDist);
    return minDist;
}

double closestPair(int start, int end)
{
    if(start == end)
    {
        //points[i] = points[i];
        return INT_MAX;
    }

    int mid = (start + end) / 2;
    int midX = points[mid].x;
    double leftClosest = closestPair(start, mid);
    double rightClosest = closestPair(mid + 1, end);

    mergePoints(start, mid, end);

    double minDist = min(leftClosest, rightClosest);
    int stripIndex = buildStrip(start, end, midX, minDist);

    return findMinDistance(stripIndex, minDist);
}

int main()
{
    int t, i;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; ++i)
        {
            scanf("%d %d", &points[i].x, &points[i].y);
        }

        sort(points, points + n, comp);

        printf("%lf\n", closestPair(0, n - 1));
    }
    return 0;
}

