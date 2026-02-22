#include<iostream>
using namespace std;
class engineer{
    protected:
    string name;
    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    } 
};
class youtuber{
    protected:
    int subscribers;
    public:
    void subscriber_count(){
        cout<<"I have "<<subscribers<<" subscribers."<<endl;
    }
};
class tech_influencer:public engineer,public youtuber{
    public:
    string channel_name;
    tech_influencer(string name,int subscribers,string channel_name){
        this->name=name;
        this->subscribers=subscribers;
        this->channel_name=channel_name;
    }
    void promote(){
        cout<<"I am a tech influencer on "<<channel_name<<" channel."<<endl;
    }
};
int main(){
    tech_influencer t("Bob",100000,"TechWorld");
    t.introduce();
    t.subscriber_count();
    t.promote();
    return 0;
}