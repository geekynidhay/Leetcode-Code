class Solution {
public:
    int captureForts(vector<int>& forts) 
    {
        int cnt=0;
        int mx=0;
        
        // check for every index
        for(int i=0;i<forts.size();i++)
        {
            // if it is mine fort
            if(forts[i]==1)
            {
                // now I'll try to move my army(1) to left and right \
                //and try to move it from enemines fort(0) to an empty fort(-1)
                // move to left
                for(int j=i-1;j>=0;j--)
                {
                    if(forts[j]==0)
                    {
                        cnt++;
                    }
                    else if(forts[j]==-1)
                    {
                        mx = max(mx,cnt);
                        cnt=0;
                        break;
                    }
					// 1 to 1 is not possible so just break
                    else
                    {
                        break;
                    }
                }
                
                
                // move to right
                cnt=0;
                for(int j=i+1;j<forts.size();j++)
                {
                    if(forts[j]==0)
                    {
                        cnt++;
                    }
                    else if(forts[j]==-1)
                    {
                        mx = max(mx,cnt);
                        cnt=0;
                        break;
                    }
					// 1 to 1 is not possible so just break
                    else
                    {
                        break;
                    }
                }
            }
        }
        return mx;
    }
};

