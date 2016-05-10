/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004236785957_0791564622_init();
    work_m_00000000002113790429_0944788044_init();
    work_m_00000000003065592373_3461722539_init();
    work_m_00000000003065592373_2214984714_init();
    work_m_00000000000670688500_2244092194_init();
    work_m_00000000000079941273_1989334135_init();
    work_m_00000000001391966758_0871883250_init();
    work_m_00000000002292405306_2516217677_init();
    work_m_00000000002825245677_2587490486_init();
    work_m_00000000001966631979_3267345094_init();
    work_m_00000000003197021942_1783167462_init();
    work_m_00000000001876499009_3683860065_init();
    work_m_00000000003672507402_3638408222_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003672507402_3638408222");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
