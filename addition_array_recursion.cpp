#include<stdio.h>
	int addmatrix(mat1,mat2,result_mat,i=0,j=0)
	{
		if(j>=mat1[0].size)
		return result_mat;
		result_mat[i][j]=mat1[i][j]+mat[i][j];
		i++;
	}
	if(i==mat1.size)
	{i=0;
	j++;
	}
	return addmatrix(mat1,mat2,result_mat);
}
int main()
{  int result_mat;
	result=addmatrix(mat1)
}
