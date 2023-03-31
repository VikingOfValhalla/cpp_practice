#include <iostream>
#include <vector>
#include <algorithm>

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

std::vector<Interval> merge(std::vector<Interval>& intervals) {
    std::vector<Interval> merged;
    if (intervals.empty()) {
        return merged;
    }
    std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){
        return a.start < b.start;
    });
    merged.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (merged.back().end >= intervals[i].start) {
            merged.back().end = std::max(merged.back().end, intervals[i].end);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main() {
    std::vector<Interval> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    std::vector<Interval> merged = merge(intervals);
    std:: cout << "Merged Intervals: ";
    for (const auto& interval : merged) {
        std::cout << "[" << interval.start << "," << interval.end << "] ";
    }
    std::cout << std::endl;
    return 0;
}