#ifndef _PLANE_H
#define _PLANE_H

#include "math.h"
#include "Object.h"
#include "Vect.h"
#include "Color.h"

class Plane : public Object {
    Vect normal;
    double distance;
    Color color;

    public:
    Plane ();
    Plane (Vect, double, Color);

    // method
    Vect getPlaneNormal () { return normal; }
    double getPlaneDistance () { return distance; }
    Color getColor () { return color; }

    // the normal of the intersect point is the normal of the plane
    Vect getNormalAt (Vect point) {
        return normal;
    }

    // distance from ray origin to the point of intersection
    double findIntersection (Ray ray) {
        Vect ray_direction = ray.getRayDirection();
        // 
        double a = ray_direction.dotProduct(normal);

        if (a == 0) {
            // ray is parallel to the plain
            // return negtive value -> never intersect
            return -1;
        } 
        else {
            double b = normal.dotProduct(ray.getRayOrigin().vectAdd(normal.vectMult(distance).negative()));
            // distance from the ray origin to the object intersection
            return -1 * b/a;
        }
    }

};

Plane::Plane () {
    normal = Vect(1,0,0);   // x-direction
    distance = 0;
    color = Color(0.5, 0.5, 0.5, 0);
}

Plane::Plane (Vect normalValue, double distanceValue, Color colorValue) {
    normal = normalValue;
    distance = distanceValue;
    color = colorValue;
}

#endif