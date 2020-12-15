int     ft_check_decimal(char *base)
{
        int i;
        char *str;

        i = 0;
        str = "0123456789";
        while(base[i] && i <= 10)
        {
                if(base[i] == str[i])
                        i++;
                else
                        return(0);
        }
        return(1);
}
