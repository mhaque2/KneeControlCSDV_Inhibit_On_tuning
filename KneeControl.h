#include <stdint.h>        /* Includes uint16_t definition                    */
struct st_impedance
{
        int st;
        float impedance;
        float percent_new;
};
struct st_impedance KneeControl(float knee_angle, float knee_velocity,int16_t ac_x, float LoadCell_Sum, float LoadCell_Diff);
