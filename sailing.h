#ifndef SAILING_H
#define SAILING_H

typedef struct sailing_boat {
    char *name;

    /* coordinates of boat */
    double x, y;

    /* orientation of boat */
    double angle;
    double sail_angle;
    double rudder_angle;
    double sheet_length;

    /* is the sail free to move? */
    int sail_is_free;

    /* state variables */
    double v, rotational_velocity, ell;
    /* parameters */
    double drift_coefficient, mass, rudder_distance, mast_distance,
        rudder_lift, sail_lift, tangential_friction, angular_friction,
        sail_center_of_effort, inertia;
} Boat;

struct sailing_boat *sailing_boat_init();

void sailing_boat_free(Boat *boat);

char *sailing_boat_get_name(Boat *boat);

double sailing_boat_get_latitude(Boat *boat);

double sailing_boat_get_longitude(Boat *boat);

#endif
