    #include <iostream>

    int main()
    {
        int T = 0;
        std::cin >> T;

        for(int Test=0; T > Test; Test++)
        {
            int h;
            int w;
            int n;

            std::cin >> h >> w >> n;

            int answer;

            if(n%h == 0)
            {
                answer = h*100;
            }
            else
            {  
                answer = (n%h)*100;
                answer += 1;
            }

            answer += n/h; 

            std::cout << answer << std::endl;
        }
        return 0;
    }
