#include<iostream>
#include<string>
using namespace std;

class Question
{
    public:
        Question();
        void set_text(string &question_text);
        void set_answer(string &correct_response);
        bool check_answer(const string &response) const;
        void display();
    private:
        string text;
        string answer;
};

Question::Question(){}
void Question::set_text(string &question_text)
{
    text=question_text;
}

void Question::set_answer(string &corret_response)
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

