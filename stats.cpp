#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <cmath>
#include "stats.h"

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    Stats computedStats;
    if (numbers.empty()) {
        computedStats.average = std::numeric_limits<float>::quiet_NaN();
        computedStats.min = std::numeric_limits<float>::quiet_NaN();
        computedStats.max = std::numeric_limits<float>::quiet_NaN();
        return computedStats;
    }

    computedStats.min = *std::min_element(numbers.begin(), numbers.end());
    computedStats.max = *std::max_element(numbers.begin(), numbers.end());
    computedStats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();

    return computedStats;
}
