#ifndef LAGR_POLYNOM_
#define LAGR_POLYNOM_
namespace LAGRANGE
{
    const int POINTS_1 = 7;
    //static int STEP_1 = 0.5;
    const int POINTS_2 = 51;
    //static int STEP_2 = 0.12;
    struct unit {
        double x_points[POINTS_1];
        double f_points[POINTS_1];
    };
    void set_units(unit &);
    struct point {
        double x_points[POINTS_2];
        double f_points[POINTS_2]; 
    };
    void set_points(point &);
    class Lagr_Polynom
    {
        private:
            int _order;
            double polynom_values[POINTS_2];
            void calculate_polynom(const unit &, const point &);
        public:
            Lagr_Polynom() {};
            Lagr_Polynom(int order, const unit &, const point &);
            double * get_polynom_arr();
            double get_polynom_value(int i); 
            bool write_to_file(const unit & u, const point & p);          
    };
}
#endif