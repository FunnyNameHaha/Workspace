#define PI 3.14159265359

double sin(double x, int precision)
{
        int k;
        double y;
        y = x * (1.0 - (x * x / (PI * PI)));
        for (k = 2; k <= precision; k++)
        {
                y = y * (1.0 - (x * x / (k * k * PI * PI)));
        }
        return y;
}
