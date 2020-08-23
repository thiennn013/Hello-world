#include<bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	while(1)
	{int d=0;
		char ch;
		int x;
		scanf("%c",&ch);
		switch(ch) {
			case 'i':
				scanf("%d\n", &x);
				++n;
				a[n]=x;
				break;
			case 'd':
				scanf("%d\n", &x);
				if(x<1||x>n)
            	break ;
            	else
	            for(int i=x;i<n;i++)
	            a[i]=a[i+1];
	            --n;
				break;
			case 's':
				
	          for(int i=1;i<=n;i++)
               	{
	            	d+=a[i];
                 	}
				printf("%d\n", d);
				break;
			case '0':
				return 0;
		}
	}
}

