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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/mnt/sda1/DOC/23-24_HK02/ICSD/MIDTERM_PRJECT/SPI_/sender_receiver.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {8U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 255U};



static void Initial_68_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(68, ng0);

LAB2:    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_81_1(char *t0)
{
    char t7[8];
    char t22[8];
    char t38[8];
    char t53[8];
    char t61[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t133;

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6584);
    *((int *)t2) = 1;
    t3 = (t0 + 4560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2488U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t7) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB13;

LAB14:    memcpy(t61, t22, 8);

LAB15:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t4 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t2) == 0)
        goto LAB30;

LAB32:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;

LAB33:    t6 = (t7 + 4);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t7) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB34:    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t7);
    t27 = (t25 & t26);
    *((unsigned int *)t22) = t27;
    t21 = (t3 + 4);
    t23 = (t7 + 4);
    t29 = (t22 + 4);
    t28 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t23);
    t32 = (t28 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB36;

LAB37:
LAB38:    t36 = (t0 + 1208U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t59 = *((unsigned int *)t36);
    t62 = (~(t59));
    t63 = *((unsigned int *)t37);
    t64 = (t63 & t62);
    t68 = (t64 & 1U);
    if (t68 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t36) == 0)
        goto LAB39;

LAB41:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;

LAB42:    t52 = (t38 + 4);
    t54 = (t37 + 4);
    t69 = *((unsigned int *)t37);
    t70 = (~(t69));
    *((unsigned int *)t38) = t70;
    *((unsigned int *)t52) = 0;
    if (*((unsigned int *)t54) != 0)
        goto LAB44;

LAB43:    t77 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t77 & 1U);
    t78 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t78 & 1U);
    t60 = (t0 + 2488U);
    t65 = *((char **)t60);
    memset(t53, 0, 8);
    t60 = (t38 + 4);
    t66 = (t65 + 4);
    t79 = *((unsigned int *)t38);
    t81 = *((unsigned int *)t65);
    t82 = (t79 ^ t81);
    t83 = *((unsigned int *)t60);
    t85 = *((unsigned int *)t66);
    t86 = (t83 ^ t85);
    t87 = (t82 | t86);
    t88 = *((unsigned int *)t60);
    t90 = *((unsigned int *)t66);
    t91 = (t88 | t90);
    t92 = (~(t91));
    t93 = (t87 & t92);
    if (t93 != 0)
        goto LAB48;

LAB45:    if (t91 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t53) = 1;

LAB48:    t94 = *((unsigned int *)t22);
    t97 = *((unsigned int *)t53);
    t98 = (t94 & t97);
    *((unsigned int *)t61) = t98;
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t89 = (t61 + 4);
    t99 = *((unsigned int *)t75);
    t100 = *((unsigned int *)t76);
    t101 = (t99 | t100);
    *((unsigned int *)t89) = t101;
    t102 = *((unsigned int *)t89);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB49;

LAB50:
LAB51:    t122 = (t61 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t61);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB29:    goto LAB2;

LAB7:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = (t0 + 2488U);
    t37 = *((char **)t35);
    memset(t38, 0, 8);
    t35 = (t36 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t35);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB19;

LAB16:    if (t49 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t38) = 1;

LAB19:    memset(t53, 0, 8);
    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t54) != 0)
        goto LAB22;

LAB23:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t52 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t53) = 1;
    goto LAB23;

LAB22:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB23;

LAB24:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB26;

LAB27:    xsi_set_current_line(83, ng0);
    t95 = ((char*)((ng2)));
    t96 = (t0 + 3208);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 4);
    goto LAB29;

LAB30:    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB35:    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t18 | t19);
    goto LAB34;

LAB36:    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t29);
    *((unsigned int *)t22) = (t40 | t41);
    t30 = (t3 + 4);
    t35 = (t7 + 4);
    t42 = *((unsigned int *)t3);
    t43 = (~(t42));
    t44 = *((unsigned int *)t30);
    t45 = (~(t44));
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t35);
    t49 = (~(t48));
    t80 = (t43 & t45);
    t84 = (t47 & t49);
    t50 = (~(t80));
    t51 = (~(t84));
    t55 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t55 & t50);
    t56 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t56 & t51);
    t57 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t57 & t50);
    t58 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t58 & t51);
    goto LAB38;

LAB39:    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB44:    t71 = *((unsigned int *)t38);
    t72 = *((unsigned int *)t54);
    *((unsigned int *)t38) = (t71 | t72);
    t73 = *((unsigned int *)t52);
    t74 = *((unsigned int *)t54);
    *((unsigned int *)t52) = (t73 | t74);
    goto LAB43;

LAB47:    t67 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB48;

LAB49:    t104 = *((unsigned int *)t61);
    t105 = *((unsigned int *)t89);
    *((unsigned int *)t61) = (t104 | t105);
    t95 = (t22 + 4);
    t96 = (t53 + 4);
    t106 = *((unsigned int *)t22);
    t107 = (~(t106));
    t108 = *((unsigned int *)t95);
    t109 = (~(t108));
    t110 = *((unsigned int *)t53);
    t111 = (~(t110));
    t112 = *((unsigned int *)t96);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t118 & t116);
    t119 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t119 & t117);
    t120 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t120 & t116);
    t121 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t121 & t117);
    goto LAB51;

LAB52:    xsi_set_current_line(86, ng0);
    t128 = (t0 + 3208);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng3)));
    memset(t132, 0, 8);
    xsi_vlog_unsigned_add(t132, 4, t130, 4, t131, 4);
    t133 = (t0 + 3208);
    xsi_vlogvar_assign_value(t133, t132, 0, 0, 4);
    goto LAB54;

}

static void Always_88_2(char *t0)
{
    char t7[8];
    char t38[8];
    char t57[8];
    char t89[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6600);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB5;

LAB6:
LAB7:    t39 = (t0 + 2008U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t40 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t39) == 0)
        goto LAB8;

LAB10:    t46 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t46) = 1;

LAB11:    t47 = (t38 + 4);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = (~(t49));
    *((unsigned int *)t38) = t50;
    *((unsigned int *)t47) = 0;
    if (*((unsigned int *)t48) != 0)
        goto LAB13;

LAB12:    t55 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t55 & 1U);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & 1U);
    t58 = *((unsigned int *)t7);
    t59 = *((unsigned int *)t38);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t7 + 4);
    t62 = (t38 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB14;

LAB15:
LAB16:    t90 = (t0 + 1208U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t90 = (t91 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (~(t92));
    t94 = *((unsigned int *)t91);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t90) == 0)
        goto LAB17;

LAB19:    t97 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t97) = 1;

LAB20:    t98 = (t89 + 4);
    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = (~(t100));
    *((unsigned int *)t89) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB22;

LAB21:    t106 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t106 & 1U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 1U);
    t109 = *((unsigned int *)t57);
    t110 = *((unsigned int *)t89);
    t111 = (t109 & t110);
    *((unsigned int *)t108) = t111;
    t112 = (t57 + 4);
    t113 = (t89 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB23;

LAB24:
LAB25:    t140 = (t0 + 8816);
    memset(t140, 0, 8);
    t141 = 1U;
    t142 = t141;
    t143 = (t108 + 4);
    t144 = *((unsigned int *)t108);
    t141 = (t141 & t144);
    t145 = *((unsigned int *)t143);
    t142 = (t142 & t145);
    t146 = (t140 + 4);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t147 | t141);
    t148 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t148 | t142);
    t149 = (t0 + 4584);
    xsi_process_wait(t149, 500LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB5:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB7;

LAB8:    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB13:    t51 = *((unsigned int *)t38);
    t52 = *((unsigned int *)t48);
    *((unsigned int *)t38) = (t51 | t52);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t48);
    *((unsigned int *)t47) = (t53 | t54);
    goto LAB12;

LAB14:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t7 + 4);
    t72 = (t38 + 4);
    t73 = *((unsigned int *)t7);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t38);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB16;

LAB17:    *((unsigned int *)t89) = 1;
    goto LAB20;

LAB22:    t102 = *((unsigned int *)t89);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t89) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB21;

LAB23:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t57 + 4);
    t123 = (t89 + 4);
    t124 = *((unsigned int *)t57);
    t125 = (~(t124));
    t126 = *((unsigned int *)t122);
    t127 = (~(t126));
    t128 = *((unsigned int *)t89);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (~(t130));
    t132 = (t125 & t127);
    t133 = (t129 & t131);
    t134 = (~(t132));
    t135 = (~(t133));
    t136 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t136 & t134);
    t137 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t137 & t135);
    t138 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t138 & t134);
    t139 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t139 & t135);
    goto LAB25;

LAB26:    t150 = (t0 + 8816);
    t151 = (t0 + 3368);
    xsi_vlogvar_assign_value(t151, t150, 0, 0, 1);
    goto LAB2;

}

static void Cont_90_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_91_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6792);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_92_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t35 = (t0 + 6856);
    t42 = (t35 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t35, 0, 0);
    t54 = (t0 + 6616);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 2488U);
    t36 = *((char **)t35);
    goto LAB13;

LAB14:    t35 = (t0 + 2328U);
    t41 = *((char **)t35);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t36, 1, t41, 1);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

}

static void Cont_93_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t35 = (t0 + 6920);
    t42 = (t35 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t35, 0, 0);
    t54 = (t0 + 6632);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 2488U);
    t36 = *((char **)t35);
    goto LAB13;

LAB14:    t35 = (t0 + 2328U);
    t41 = *((char **)t35);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t36, 1, t41, 1);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

}

static void Cont_94_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 6016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t33, 8);

LAB20:    t39 = (t0 + 6984);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 255U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 7);
    t52 = (t0 + 6648);
    *((int *)t52) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2648U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = ((char*)((ng6)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t34, 8, t33, 8);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng6)));
    t3 = (t0 + 7048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}


extern void work_m_09229596487718868868_1296880646_init()
{
	static char *pe[] = {(void *)Initial_68_0,(void *)Always_81_1,(void *)Always_88_2,(void *)Cont_90_3,(void *)Cont_91_4,(void *)Cont_92_5,(void *)Cont_93_6,(void *)Cont_94_7,(void *)implSig1_execute};
	xsi_register_didat("work_m_09229596487718868868_1296880646", "isim/SPI_Interface_isim_beh.exe.sim/work/m_09229596487718868868_1296880646.didat");
	xsi_register_executes(pe);
}
