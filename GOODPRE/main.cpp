#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int fact(int x)
{
    if (x==0)
        return 0;
    else
    {
        //cout<<"X: "<<x;
        return (x + fact(x-1));
    }
}

bool w_c_calculator(char t[],int l, int h)
{
    int a_number=0, b_number=0;
    for(int q=0; q<=h; q++)
    {
        //cout<<t[q];
        if(t[q]=='a')
            a_number++;
        else
            b_number++;
    }
    //cout<<endl;

    if(a_number > b_number)
        return true;
    else
        return false;
}

int main()
{
    int n,t,result_val;
    cin>>t;
    while(t--)
    {
        char str[1000];//temp[1000];
        bool ans;
        int wrong_counter=0, right_counter=0, to_be_minus=0, to_be_add=0;
        cin>>str>>n;
        int len = strlen(str);
        int no_a = 0, no_b =0;
        for(int i=0; i<len; i++)
        {
            if(str[i]=='a')
                no_a++;
            else if(str[i]=='b')
                no_b++;
        }

        if((no_a < no_b && len==1) || (no_a == no_b && len==1))
            result_val = 0;
        /*else if(no_a = no_b)
        {
            for(int j=0; j<len; j++)
            {
                ans = w_c_calculator(str,0,j);
                if(ans == true)
                    right_counter++;
                else
                    wrong_counter++;
            }
            result_val = right_counter * n;
        }*/
        else if(no_a == no_b)
        {
            for(int j=0; j<len; j++)
            {
                ans = w_c_calculator(str,0,j);
                if(ans == true)
                    right_counter++;
                else
                    wrong_counter++;
                //cout<<"right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl<<endl;
            }
            //cout<<"Finally,,,...right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl;
            result_val = right_counter * n;

        }
        else if(no_a > no_b)
        {
            for(int j=0; j<len; j++)
            {
                ans = w_c_calculator(str,0,j);
                if(ans == true)
                    right_counter++;
                else
                    wrong_counter++;
                //cout<<"right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl<<endl;
            }
            //to_be_add = fact(no_a - 1);
            //result_val = right_counter + to_be_add;
            to_be_minus = fact(wrong_counter);
            result_val = (len * n) - to_be_minus;
        }
        else
        {

            if(str[0]=='a')
            {
                for(int j=0; j<len; j++)
                {
                    ans = w_c_calculator(str,0,j);
                    if(ans == true)
                        right_counter++;
                    else
                        wrong_counter++;
                //cout<<"right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl<<endl;
                }

                to_be_add = fact(right_counter-1);
                //cout<<"tobeminus "<<to_be_minus<<endl;
                result_val = to_be_add + 1;
            }
            //result_val = (len * n) - 1;
            //for(int i=0; i<len; i++)
            else
            {
                if(no_b == 0)
                {
                    result_val = len * n;
                }
                else
                {
                    for(int j=0; j<len; j++)
                    {
                        ans = w_c_calculator(str,0,j);
                        if(ans == true)
                            right_counter++;
                        else
                            wrong_counter++;
                        //cout<<"right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl<<endl;
                    }
                    //cout<<"Finally,,,...right counter: "<<right_counter<<"wrong counter: "<<wrong_counter<<endl;
                    if(right_counter == 0)
                    {
                        result_val = right_counter;
                    }
                    else
                    {
                        to_be_minus = fact(wrong_counter);
                        result_val = (len * n) - to_be_minus;
                    }
                }
            }
        }
        cout<<result_val<<endl;
    }
    return 0;
}
