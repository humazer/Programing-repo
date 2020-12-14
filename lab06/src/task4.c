int main()
{
    char mas[] = "Hello mom, I have a good programming teacher";
    
    int i, 
        count = 0, 
        Word = 0;
    
    for (i = 0; mas[i] != '\0'; i++) 
    {
        if (mas[i] != ' ' && Word == 0) 
        {
            count += 1;
            Word = 1;
        } else if (mas[i] == ' ') 
        {
            Word = 0;
        }
    }

}
