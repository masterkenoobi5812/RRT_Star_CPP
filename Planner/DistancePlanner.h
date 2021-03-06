//
// Created by ashton on 11/27/18.
//

#ifndef RRT_STAR_CPP_DISTANCEPLANNER_H
#define RRT_STAR_CPP_DISTANCEPLANNER_H


#include "Planner.h"

class DistancePlanner : public Planner {
public:
    DistancePlanner(const WindowParamsDTO &screenParams, size_t numPoints, double epsilon, int neighborhoodSize,
                    double knnNeighborhoodRadiusFactor);
    virtual ~DistancePlanner();

protected:
    double cost(RobotState *startState, RobotState *endState) override;
    double cost(RobotState *startState, const Location &end) override;
};


#endif //RRT_STAR_CPP_DISTANCEPLANNER_H
