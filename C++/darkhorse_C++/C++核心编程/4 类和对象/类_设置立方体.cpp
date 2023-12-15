#include<iostream>
using namespace std;

class Cube
{
public:
   
   void setL(int l)
   {
        m_L=l;
   }
    int getL()
    {
        return m_L;
    }

      void setW(int w)
   {
        m_W=w;
   }

     int getW()
    {
        return m_W;
    }

     void setH(int h)
   {
        m_H=h;
   }

     int getH()
    {
        return m_H;
    }

    int calculateS()
    {
        return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;
    }

    int calculateV()
    {
        return m_L*m_W*m_H;
    }

    bool isSameByClass(Cube &c)
    {
        if(m_L==c.m_L&&m_W==c.m_W&&m_H&&c.m_H)
        {
            return true;
        }
        return false;
      
    }

private:
    int m_L;
    int m_W;
    int m_H;
};

bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getL()==c2.getL()&&c1.getW()==c2.getW()&&c1.getH()&&c2.getH())
    {
        return true;
    }
    return false;
}

int main()
{
        Cube c1;
        Cube c2;
        int c1_l,c1_w,c1_h;
        int c2_l,c2_w,c2_h;
        cout<<"Please enter the length,wieth,hight for the first cube"<<endl;
        cin>>c1_l;
        cin>>c1_w;
        cin>>c1_h;
        cout<<"Please enter the length,wieth,hight for the second cube"<<endl;
        cin>>c2_l;
        cin>>c2_w;
        cin>>c2_h;

        c1.setL(c1_l);
        c1.setW(c1_w);
        c1.setH(c1_h);
        cout<<c1.calculateS()<<endl;
        cout<<c1.calculateV()<<endl;
        c2.setL(c2_l);
        c2.setW(c2_w);
        c2.setH(c2_h);
        cout<<c2.calculateS()<<endl;
        cout<<c2.calculateV()<<endl;


        if(c1.isSameByClass(c2))
        {
            cout<<"(By class function)They are the same."<<endl;
        }
        else
        {
            cout<<"(By class function)They are not the same."<<endl;
        }

          if(isSame(c1,c2))
        {
            cout<<"They are the same."<<endl;
        }
        else
        {
            cout<<"They are not the same."<<endl;
        }
        return 0;
}