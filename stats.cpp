#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <cmath>
#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    Statistics::Stats stats;
    if (numbers.empty()) {
        stats.average = std::numeric_limits<float>::quiet_NaN();
        stats.min = std::numeric_limits<float>::quiet_NaN();
        stats.max = std::numeric_limits<float>::quiet_NaN();
        return stats;
    }

    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    stats.average = sum / numbers.size();
    stats.min = *std::min_element(numbers.begin(), numbers.end());
    stats.max = *std::max_element(numbers.begin(), numbers.end());

    return stats;
}
