// stats.h
#ifndef STATS_H
#define STATS_H

#include <vector>

class Statistics {
public:
    struct Stats {
        float average;
        float min;
        float max;
    };

    static Stats ComputeStatistics(const std::vector<float>& numbers);
};

#endif // STATS_H

