#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[LENGTH] = FOOD_POINTS;
  Point current_location = ORGANISM_LOCATION;
  Point closest_food_location;

  get_closest_food(food_points, LENGTH, current_location, &closest_food_location);
  printf("Location of organism: [%d %d],  ", current_location.x, current_location.y);
  printf("Closest food target : [%d %d]\n", closest_food_location.x, closest_food_location.y);

  return 0;
}