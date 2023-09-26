#include<bits/stdc++.h>
using namespace std;
class yt_channel
{
private:
	string channel_name,user_name;
	int subscribers;
	vector<string> playlists;
public:
	yt_channel(string channel_name,string user_name, int subscribers)
	{
		this->channel_name=channel_name;
		this->user_name=user_name;
		this->subscribers=subscribers;
	}
	void subscribe()
	{
		subscribers++;
	}
	void unsubscribe()
	{
		subscribers--;
	}
	void know_the_channel()
	{
		cout<<"User Name: "<<user_name<<endl;
		cout<<"Channel Name: "<< channel_name<<endl;
		cout<<"Subscribers: " <<subscribers<<endl;
		cout<<"Playlists: "<<endl;
		for (auto i:playlists)
		{
			cout<<"		--> "<<i<<endl;
		}
	}
void playlist(string pl)
{
	playlists.push_back(pl);
}
};
class you_tube:public yt_channel
{
private:
	int likes,dislikes,comments;
public:
	you_tube(int likes,int dislikes,int comments,string channel_name,string user_name,int subscribers):yt_channel(channel_name,user_name,subscribers)
	{
		this->likes=likes;
		this->dislikes=dislikes;
		this->comments=comments;
	}
	void full_info()
	{
		cout<<"likes: "<<likes<<endl;
		cout<<"dislikes: "<<dislikes<<endl;
		cout<<"comments: "<<comments<<endl;
	}
	void like()
	{
		likes++;
	}
	void dislike()
	{
		dislikes++;
	}
	void comment()
	{
		comments++;
	}
};
int main()
{
you_tube c1(111,3,66,"life_learning_with_me","Ramya",110);
c1.playlist("demo");
c1.playlist("Life is a miracle");
c1.playlist("Accept your mistakes");
c1.know_the_channel();
c1.full_info();
c1.subscribe();
c1.subscribe();
c1.subscribe();
c1.subscribe();
c1.subscribe();
c1.subscribe();
c1.unsubscribe();
c1.like();
c1.like();
c1.dislike();
c1.comment();
c1.comment();
c1.know_the_channel();
c1.full_info();
}