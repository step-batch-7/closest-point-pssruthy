#include <math.h>
#include "point.h"

double distance_between_points(Point point_A, Point point_B){
  int x_range_pow = pow(point_A.x - point_B.x, 2);
  int y_range_pow = pow(point_A.y - point_B.y, 2);
  return sqrt(x_range_pow + y_range_pow);
}


void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  double previous_distance = distance_between_points(current_location, food_points[0]);
  *closest_food_location = food_points[0];

  for(int index = 1; index < points_length; index++){
    double corrent_distance = distance_between_points(current_location, food_points[index]);
    if(corrent_distance < previous_distance){
      previous_distance = corrent_distance;
      *closest_food_location = food_points[index];
    }
  }
}
