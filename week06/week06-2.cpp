//week06-2
bool isPalindrome(int x) {
        int x2 = x;//�ƥ�x
        long long int r = 0;//�ϹL�Ӫ��Ʀr��ir�̭�
        while( x>0 ){
                r = r*10 + x%10;
                x = x/10;
        }
        //�p�Gx==r��̫�@�h�|����0
        if( x2==r )return true;
        else return false;
}
