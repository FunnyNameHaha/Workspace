double circle_get_x(const CIRCLE *circle)
{
        return circle->x;
}

int circle_check_radius(double radius)
{
        if (radius > 0) {
                return 1;
        } else {
                return 0;
        }
}

int circle_set_radius(CIRCLE *circle, double radius)
{
        if (!circle_check_radius(radius)) {
                return 0;
        } else {
                circle->radius = radius;
                return 1;
        }
}

int circle_new(CIRCLE *circle, double x, double y, double radius)
{
        if (!circle_check_radius(radius)) {
                return 0;
        } else {
                circle->x = x;
                circle->y = y;
                circle->radius = radius;
                return 1;
        }
}

void circle_print(const CIRCLE *circle)
{
        printf("Kreis an der Position (%f, %f) mit dem Radius %f", circle->x, circle->y, circle->radius);
}

double circle_calc_area(const CIRCLE *circle)
{
        return M_PI * pow((*circle).radius, 2);
}
