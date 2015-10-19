void polar2cartesian(float *r, float *theta) {
    float x, y;
    x = *r * cos(*theta), y = *r * sin(*theta), *r = x; *theta = y;
}
