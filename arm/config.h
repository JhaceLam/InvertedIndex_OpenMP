#include <cstdio>
#include <sys/time.h>

const char dataPath[] = "/home/s2011283/InvertedIndex/Data";
const char indexPath[] = "/home/s2011283/InvertedIndex/Data/ExpIndex";
const char queryPath[] = "/home/s2011283/InvertedIndex/Data/ExpQuery";

const char textFile[] = "/home/s2011283/InvertedIndex/Data/textFile.txt";
const char binaryFile[] = "/home/s2011283/InvertedIndex/Data/binaryFile";
const char testIndexPath[] = "/home/s2011283/InvertedIndex/Data/testIndex";
const char testQueryPath[] = "/home/s2011283/InvertedIndex/Data/testQuery.txt";
const char testIndexEnlargePath[] = "/home/s2011283/InvertedIndex/Data/testIndex_Enlarge";

const int maxNumIndex = 2000, maxLenIndex = 30000 + 10;

class MyTimer {
    private:
        struct timeval start_time, finish_time;
        double timeMS;

    public:
        MyTimer() {
            timeMS = 0.0;
        }

        void start() {
            gettimeofday(&start_time, NULL);
        }

        void finish() {
            gettimeofday(&finish_time, NULL);
        }
        
        double getTime() {
            // ms
            double duration = 0.0;
            long long startUsec, finishUsec;
            startUsec = start_time.tv_sec * 1e6 + start_time.tv_usec;
            finishUsec = finish_time.tv_sec * 1e6 + finish_time.tv_usec;
            duration = (finishUsec - startUsec) / 1e3;
            return duration;
        }
};