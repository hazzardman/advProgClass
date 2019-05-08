

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
char ** letterCasePermutation(char * S, int* returnSize) {
	char* tmp="";
	strcpy(tmp,S);
	
	char** result = (char**)malloc(sizeof(char*)*144);
	for (int i = 0; i < 144; i++)
	{
		result[i] = (char*)malloc(sizeof(char)*strlen(S));
	}
	int counter = 0;
	strcpy(tmp, result[counter++]);
	
	for (int i = 0;i<strlen(S); i++)
	{
		for(int j=i;j<strlen(S);j++)
		{
			if (S[j] >= 'A'&&S[j] <= 'Z')
			{
				tmp[j] = S[j] + 32;
				strcpy(result[counter++],tmp);
			}
			else if (S[j] >= 'a'&&S[j] <= 'z')
			{
				tmp[j] = S[j] - 32;
				strcpy(result[counter++],tmp);
			}

		}
	}
	*returnSize = counter;
	return result;
}

