#include <stdio.h>
void area(double a, double b)
{
    printf("The area of Triangle is = %.2lf\n\n", (0.5 * a * b));
    return;
}
int main()
{
    double height, width;
    printf("Enter the height = ");
    scanf("%lf", &height);
    printf("Enter the width = ");
    scanf("%lf", &width);
    area(height, width);

}