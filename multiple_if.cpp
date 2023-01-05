#include<stdio.h>
int main()
{
	int user_id,password;
	printf("Enter your user_id:");
	scanf("%d",&user_id);
	
	if(user_id==2001297119)
	{
	printf("Enter your passsword:");
	scanf("%d",&password);
		if(password==5858)
		{
			printf("login successful");
			
		}
		else
		{
			printf("password is incorrect");
		}
	}
		else
		{
			printf("user_id is incorrect");
		}
	
	return 0;
}
