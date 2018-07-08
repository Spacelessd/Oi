#include<cstdio>
#include<cstring>

using namespace std;

int n,m,ans;
int grap[1003][1003],jnmj[1003];
bool used[1003];

bool findx(int x)//�������xΪ��x���� 
{
	for(int i=0;i<n;i++)//ö�ٵ��ǽ������ 
	{
		if(grap[x][i] && !used[i])//����ʹ�����������Ʋ������û�б�ʹ�ù� 
		{
			used[i]=true;
			if(!jnmj[i] || findx(jnmj[i]))//��ǰ���Ϊ0(û������κ���Ŀ)��ݹ�����ҵ��µķ��� 
			{
				jnmj[i]=x;//�������Ŀ 
				return true;
			}
		}
	}
	return false;
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		grap[i][a]=grap[i][b]=true;
	}
	for(int i=1;i<=m;i++)
	{
		memset(used,0,sizeof(used));
		if(findx(i))
			ans++;
		else
			break;
	}
	printf("%d",ans);
	return 0;
}
