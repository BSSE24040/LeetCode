class Twitter {

public:
int time;
    unordered_map<int, vector<pair<int,int>>> tweets;
     unordered_map<int, unordered_set<int>> following;

    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {


      vector<int> result;

       priority_queue<
            tuple<int,int,int>
        > pq;

        following[userId].insert(userId);

   for(int followee: following[userId]){

       auto &tweetList = tweets[followee];

    if(!tweetList.empty()){

        int index = tweetList.size()-1;

        pq.push({
            tweetList[index].first,
            followee,
            index
        });

    }}

       while(!pq.empty()&&result.size()<10){

auto [time,user,index]=pq.top();

pq.pop();


 result.push_back(tweets[user][index].second);


if(index>0){

    index--;

      pq.push({
                    tweets[user][index].first,
                    user,
                    index
                });
}

       }
    return result;
        
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId)
            following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        
        following[followerId].erase(followeeId);

    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */