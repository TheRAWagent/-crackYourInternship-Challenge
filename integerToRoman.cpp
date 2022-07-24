class Solution {
public:
    string intToRoman(int x) {
        string s="";
        while(x>=1000)
        {
            s.push_back('M');
            x-=1000;
        }
        if(x/100==9)
        {
            s.append("CM");
            x-=900;
        }
        else if(x>=500)
        {
            x-=500;
            s.push_back('D');
        }
        else if(x/100==4)
        {
            s.append("CD");
            x-=400;
        }
        while(x>=100)
        {
            s.push_back('C');
            x-=100;
        }
        if(x/10==9)
        {
            s.append("XC");
            x-=90;
        }
        else if(x>=50)
        {
            x-=50;
            s.push_back('L');
        }
        else if(x/10==4)
        {
            s.append("XL");
            x-=40;
        }
        while(x>=10)
        {
            s.push_back('X');
            x-=10;
        }
        if(x==9)
        {
            s.append("IX");
            x-=9;
        }
        else if(x>=5)
        {
            x-=5;
            s.push_back('V');
        }
        else if(x==4)
        {
            s.append("IV");
            x-=4;
        }
        while(x>=1)
        {
            s.push_back('I');
            x--;
        }
        return s;
        
    }
};