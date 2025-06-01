#include <stdio.h>
#include <stdlib.h>

double total_sales;
float sales_volume;
 double asset_cost;
 double residual_value;

int main()
{

    const float days;

    printf("ENTER THE NEWEST TOTAL_SALES: \n" , total_sales); scanf("%lf" , &total_sales);

    printf("ENTER THE NEWEST NUMBER OF DAYS: \n" , days); scanf("%f" , &days);

    double formularAverage = total_sales/(double)days;
    printf("THE NEWEST AVERAGE SALES PER DAY IN A MONTH IS %.0lf\n" , formularAverage);

    double commissionRate;

    printf("ENTER THE NEWER SALES VOLUME: \n" , sales_volume); scanf("%f" , &sales_volume);

    printf("ENTER THE NEWEST COMMISSION RATE: \n" , commissionRate); scanf("%lf" , &commissionRate);


    double formularCommission = (double)sales_volume * commissionRate;
    printf("THE NEWEST COMMISSION OF THE SALES PERSON IS %.0lf\n" , formularCommission);

    float useful_life;

    printf("ENTER THE NEW ASSET COST: \n" , asset_cost); scanf("%lf" , &asset_cost);

    printf("ENTER THE NEW RESIDUAL VALUE: \n"); scanf("%lf" , &residual_value);

    printf("ENTER THE  NEW USEFUL LIFE: \n" , useful_life); scanf("%f" , &useful_life);


    const double formularDepreciation = (asset_cost - residual_value)/(double)useful_life;
    printf("THE NEW ANNUAL DEPRECIATION OF THE ASSET IS %.0lf\n" , formularDepreciation);

    double hourly_wage;
    float hours_per_week;
    double weeks_per_year;

    printf("ENTER HOURLY WAGE: \n" , hourly_wage); scanf("%lf" , &hourly_wage);


    printf("ENTER HOURS PER WEEK: \n" , hours_per_week); scanf("%f" , &hours_per_week);


    printf("ENTER WEEKS PER YEAR: \n" , weeks_per_year); scanf("%lf" , &weeks_per_year);


    double formularAnnualSalary = hourly_wage * (double)hours_per_week * weeks_per_year;
    printf("CONVERSION OF AN HOURLY WAGE TO ANNUAL IS %.0lf\n" , formularAnnualSalary);

    double customer1;
    double customer2;
    float customer3;

    printf("ENTER CUSTOMER1 REVENUE: \n"); scanf("%lf" , &customer1);
    printf("ENTER CUSTOMER2 REVENUE: \n"); scanf("%lf" , &customer2);
    printf("ENTER CUSTOMER3 REVENUE: \n"); scanf("%f" , &customer3);

    double formularTotalRevenue = customer1 + (double)customer2 + customer3;
    printf("THE CUMMULATIVE TOTAL REVENUE IS %.0lf\n" , formularTotalRevenue);







    return 0;
}
