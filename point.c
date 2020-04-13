#include "point.h"
#include <math.h>

double distance_between_points(Point point_A, Point point_B){
  int x_pow = point_A.x - point_B.x;
  int y_pow = point_A.y - point_B.y;
  double distance = sqrt(x_pow + y_pow);
  return distance;
}


void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  double shortest_distance = distance_between_points(current_location, food_points[0]);
  *closest_food_location = food_points[0];

  for(int index = 1; index <= points_length; index++){
    double distance_to_corrent_food = distance_between_points(current_location, food_points[index]);
    if(distance_to_corrent_food < shortest_distance){
      shortest_distance = distance_to_corrent_food;
      *closest_food_location = food_points[index];
    }
  }
}
