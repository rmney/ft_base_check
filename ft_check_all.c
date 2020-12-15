
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

int     ft_check_all(char *base)
{
        int i;
        char *str;
        int len = ft_strlen(base);

        i = 0;
        str = "0123456789abcdef";
        while(base[i] && i < len)
        {
                if(base[i] == str[i])
                i++;
        else
                return(0);

        }

        return(1);
}
