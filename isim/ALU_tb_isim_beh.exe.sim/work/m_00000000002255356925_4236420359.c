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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/final/finall/TB_ALU.v";
static const char *ng1 = "Testing ALU";
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "Op = %b, A = %b, B = %b, R = %b";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB4:    xsi_set_current_line(38, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 828);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 920);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 3, (char)118, t7, 4, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(96, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002255356925_4236420359_init()
{
	static char *pe[] = {(void *)Initial_37_0};
	xsi_register_didat("work_m_00000000002255356925_4236420359", "isim/ALU_tb_isim_beh.exe.sim/work/m_00000000002255356925_4236420359.didat");
	xsi_register_executes(pe);
}
