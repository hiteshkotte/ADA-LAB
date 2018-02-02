#include &lt;iostream&gt;

using namespace std;
class sort
{
public: int a[50],n,i;

void read()
{

cout&lt;&lt;&quot;How many elements?&quot;;
cin&gt;&gt;n;
cout&lt;&lt;&quot;\nEnter array elements:&quot;;

for(i=0;i&lt;n;i++)
cin&gt;&gt;a[i];

}
void display(int m){
switch(m){
case 1: insertion(a,n);
break;
case 2: mergeSort(a,0,n-1);
break;
case 3: quick_sort(a,0,n-1);
break;

}}

void quick_sort(int b[],int l,int u)
{
int j;
if(l&lt;u)
{
j=partition(b,l,u);
quick_sort(b,l,j-1);
quick_sort(b,j+1,u);
}
cout&lt;&lt;&quot;\nQUICK SORT\n&quot;;
cout&lt;&lt;&quot;\nArray after sorting:&quot;&lt;&lt;endl;

for(i=0;i&lt;n;i++)
cout&lt;&lt;b[i]&lt;&lt;&quot; &quot;;

}

int partition(int b[],int l,int u)
{
int v,i,j,temp;
v=a[l];
i=l;
j=u+1;

do
{

do
i++;

while(b[i]&lt;v&amp;&amp;i&lt;=u);

do
j-- ;
while(v&lt;b[j]);

if(i&lt;j)
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}while(i&lt;j);

b[l]=b[j];
b[j]=v;

return(j);
}

void mergeSort(int arr[], int start, int end)
{
if (start &lt; end)
{

int middle =start+(end-start)/2;

mergeSort(arr, start, middle);
mergeSort(arr, middle+1, end);

merge(arr, start, middle, end);
}
}
void merge(int arr[], int start, int middle, int end)
{
int i, j, k;
int n1 = middle - start + 1;
int n2 = end - middle;

int L[30], R[30];

for (i = 0; i &lt; n1; i++)
L[i] = arr[start + i];
for (j = 0; j &lt; n2; j++)
R[j] = arr[middle + 1+ j];

i = 0;
j = 0;
k = start;
while (i &lt; n1 &amp;&amp; j &lt; n2)
{
if (L[i] &lt;= R[j])
{

arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}

while (i &lt; n1)
{
arr[k] = L[i];
i++;
k++;
}

while (j &lt; n2)
{
arr[k] = R[j];
j++;
k++;
}
cout&lt;&lt;&quot;\nMERGE SORT\n&quot;;

cout&lt;&lt;&quot;\n Array after sorting : &quot;&lt;&lt;endl;

for(i=0;i&lt;n;i++)
cout&lt;&lt;a[i]&lt;&lt;&quot; &quot;;
}

void insertion(int b[], int o)
{
int t,q,r;
cout&lt;&lt;&quot;\nINSERTION SORT\n&quot;;
for(t=1; t&lt;o; t++)
{
r=b[t];
q=t-1;
while((r&lt;b[q]) &amp;&amp; (q&gt;=0))
{
b[q+1]=b[q];
q=q-1;
}
b[q+1]=r;
}
cout&lt;&lt;&quot;Array after sorting : \n&quot;;
for(t=0; t&lt;o; t++)
{
cout&lt;&lt;b[t]&lt;&lt;&quot; &quot;;
}
cout&lt;&lt;&quot;\n Array after sorting by insertion sort : &quot;;

for(i=0;i&lt;n;i++)
cout&lt;&lt;a[i]&lt;&lt;&quot; &quot;;

}
};

int main()
{
int k,l;
sort obj;
do
{
cout&lt;&lt;&quot;\n1.Input\n2.Sort\n3.Exit\n&quot;;
cin&gt;&gt;k;
switch(k){
case 1: obj.read();
break;
case 2: cout&lt;&lt;&quot;\n1.Insertion sort\n2.Merge Sort\n3.Quick Sort &quot;;
cin&gt;&gt;l;
obj.display(l);
break;
case 3:break;
default:break;
}
}while(k!=3);
return 0;
}
