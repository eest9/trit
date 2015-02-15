#ifndef TERNARY_INCLUDED
#define TERNARY_INCLUDED

void var_to_tryte(short in, short *out);

void var_to_tryte(short in, short *out)
{
    bool carry=0;
    if(in<0)
    {
        in*=(-1);
        for(char i=10;i>=0;i--)
        {
            out[i]=in%3+1+carry;
            in/=3;
            if(out[i]>2)
            {
                carry=1;
                out[i]-=3;
            }
            else
            {
                carry=0;
            }
            out[i]--;
            if(out[i]==-1)
                out[i]=1;
            else if(out[i]==1)
                out[i]=-1;
        }
    }
    else
    {
        for(char i=10;i>=0;i--)
        {
            out[i]=in%3+1+carry;
            in/=3;
            if(out[i]>2)
            {
                carry=1;
                out[i]-=3;
            }
            else
            {
                carry=0;
            }
            out[i]--;
        }
    }
}

#endif // TERNARY_INCLUDED
