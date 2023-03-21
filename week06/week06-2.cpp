//week06-2
bool isPalindrome(int x) {
        int x2 = x;//備份x
        long long int r = 0;//反過來的數字放進r裡面
        while( x>0 ){
                r = r*10 + x%10;
                x = x/10;
        }
        //如果x==r到最後一層會等於0
        if( x2==r )return true;
        else return false;
}
