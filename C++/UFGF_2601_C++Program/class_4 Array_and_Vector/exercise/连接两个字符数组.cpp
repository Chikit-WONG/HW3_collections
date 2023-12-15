#include<iostream>
using namespace std;
void concatenate()
{
    string str1;
    string str2;
    cout<<"enter a word:";
    cin>>str1;
    cout<<"enter another word:";
    cin>>str2;
    char arr1[str1.length()+1];
    char arr2[str2.length()+1];
    char sum[sizeof(arr1)+sizeof(arr2)+1];
    int temp=0;
    for(int i=0;i<str1.length();i++)
    {
        arr1[i]=str1[i];
    }

    for(int i=0;i<str2.length();i++)
    {
        arr2[i]=str2[i];
    }

    for(int i=0;i<sizeof(arr1)-1;i++)
    {
        sum[i]=arr1[i];
        temp++;
    }
   
    for(int j=0;j<sizeof(arr2)-1;j++)
    {
        sum[temp]=arr2[j];
        temp++;
    }
    
    cout<<sum<<endl;
    // for(int k=0;k<sizeof(sum);k++)
    // {
    //     cout<<sum[k];
    // }
}
int main()
{
    
    concatenate();
    return 0;
}

// #include<iostream>
// using namespace std;
// void concatenate()
// {
//     char arr1[]="Hello";
//     char arr2[]="World";
//     char sum[sizeof(arr1)+sizeof(arr2)+1];
//     int temp=0;
//     for(int i=0;i<sizeof(arr1)-1;i++)
//     {
//         sum[i]=arr1[i];
//         temp++;
//     }
//     for(int j=0;j<sizeof(arr2)-1;j++)
//     {
//         sum[temp]=arr2[j];
//         temp++;
//     }
//      // 将 '\0' 结束符添加到最后一个字符的位置上
//     cout<<sum<<endl;
// }
// int main()
// {
//     concatenate();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void concatenate() { string str1; string str2;

// cout << "Enter a word: ";
// cin >> str1;

// cout << "Enter another word: ";
// cin >> str2;

// char arr1[str1.length() + 1];
// char arr2[str2.length() + 1];
// char sum[str1.length() + str2.length() + 1];

// int temp = 0;

// for(int i = 0; i < str1.length(); i++)
// {
//     arr1[i] = str1[i];
// }

// for(int i = 0; i < str2.length(); i++)
// {
//     arr2[i] = str2[i];
// }

// for(int i = 0; i < str1.length(); i++)
// {
//     sum[i] = arr1[i];
//     temp++;
// }

// for(int j = 0; j < str2.length(); j++)
// {
//     sum[temp] = arr2[j];
//     temp++;
// }

// cout << "Concatenated string: " << sum << endl;
// }

// int main() { concatenate(); return 0; }
