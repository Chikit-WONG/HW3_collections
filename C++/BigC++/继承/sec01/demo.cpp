#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Question
{
    public:
        Question();
        void set_text(const string &question_text);
        void set_answer(const string &correct_response);
        bool check_answer(const string &response) const;
        void display();
    private:
        string text;
        string answer;
};

Question::Question(){}
void Question::set_text(const string &question_text)
{
    text=question_text;
}

void Question::set_answer(const string &corret_response)
{
    answer=corret_response;
}

bool Question::check_answer(const string &response) const
{
    return answer==response;
}

void Question::display()
{
    cout<<text<<endl;
}

int main()
{
    cout<<boolalpha;
    Question q1;
    q1.set_text("Who was the inventor of C++?");
    q1.set_answer("Bjarne Stroustrup");
    q1.display();
    string response;
    getline(cin,response);
    cout<<q1.check_answer(response)<<endl;
    return 0;
}

