
//          Copyright Christian Volmer 2022, 2023.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include "../standard_module.h"

namespace offt {
namespace backend {

/*
	Number of additions       : 692
	Number of multiplications : 148
*/

template<> StandardModuleComplexity const StandardModule<float, 23>::Complexity = { 692, 148 };
template<> StandardModuleComplexity const StandardModule<double, 23>::Complexity = { 692, 148 };

template<typename valueT>
static void ComputeCore(Phasors<valueT> const &phasors, valueT *pReal, valueT *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement)
{
	valueT t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
	valueT t10, t11, t12, t13, t14, t15, t16, t17, t18, t19;
	valueT t20, t21, t22, t23, t24, t25, t26, t27, t28, t29;
	valueT t30, t31, t32, t33, t34, t35, t36, t37, t38, t39;
	valueT t40, t41, t42, t43, t44, t45, t46, t47, t48, t49;
	valueT t50, t51, t52, t53, t54, t55, t56, t57, t58, t59;
	valueT t60, t61, t62, t63, t64, t65, t66, t67, t68, t69;
	valueT t70, t71, t72, t73, t74, t75, t76, t77, t78, t79;
	valueT t80, t81, t82, t83, t84, t85, t86, t87, t88, t89;
	valueT t90, t91, t92, t93, t94, t95, t96, t97, t98, t99;
	valueT t100, t101, t102, t103, t104, t105, t106, t107, t108, t109;
	valueT t110, t111, t112, t113, t114, t115, t116, t117, t118, t119;
	valueT t120, t121, t122, t123, t124, t125, t126, t127, t128, t129;
	valueT t130, t131, t132, t133, t134, t135, t136, t137, t138, t139;
	valueT t140, t141, t142, t143, t144, t145, t146, t147, t148, t149;

	phasors.Multiply(t0, t1, pReal[0 * stride], pImag[0 * stride], twiddleStart + 0 * twiddleIncrement);
	phasors.Multiply(t2, t3, pReal[1 * stride], pImag[1 * stride], twiddleStart + 1 * twiddleIncrement);
	phasors.Multiply(t4, t5, pReal[2 * stride], pImag[2 * stride], twiddleStart + 2 * twiddleIncrement);
	phasors.Multiply(t6, t7, pReal[3 * stride], pImag[3 * stride], twiddleStart + 3 * twiddleIncrement);
	phasors.Multiply(t8, t9, pReal[4 * stride], pImag[4 * stride], twiddleStart + 4 * twiddleIncrement);
	phasors.Multiply(t10, t11, pReal[5 * stride], pImag[5 * stride], twiddleStart + 5 * twiddleIncrement);
	phasors.Multiply(t12, t13, pReal[6 * stride], pImag[6 * stride], twiddleStart + 6 * twiddleIncrement);
	phasors.Multiply(t14, t15, pReal[7 * stride], pImag[7 * stride], twiddleStart + 7 * twiddleIncrement);
	phasors.Multiply(t16, t17, pReal[8 * stride], pImag[8 * stride], twiddleStart + 8 * twiddleIncrement);
	phasors.Multiply(t18, t19, pReal[9 * stride], pImag[9 * stride], twiddleStart + 9 * twiddleIncrement);
	phasors.Multiply(t20, t21, pReal[10 * stride], pImag[10 * stride], twiddleStart + 10 * twiddleIncrement);
	phasors.Multiply(t22, t23, pReal[11 * stride], pImag[11 * stride], twiddleStart + 11 * twiddleIncrement);
	phasors.Multiply(t24, t25, pReal[12 * stride], pImag[12 * stride], twiddleStart + 12 * twiddleIncrement);
	phasors.Multiply(t26, t27, pReal[13 * stride], pImag[13 * stride], twiddleStart + 13 * twiddleIncrement);
	phasors.Multiply(t28, t29, pReal[14 * stride], pImag[14 * stride], twiddleStart + 14 * twiddleIncrement);
	phasors.Multiply(t30, t31, pReal[15 * stride], pImag[15 * stride], twiddleStart + 15 * twiddleIncrement);
	phasors.Multiply(t32, t33, pReal[16 * stride], pImag[16 * stride], twiddleStart + 16 * twiddleIncrement);
	phasors.Multiply(t34, t35, pReal[17 * stride], pImag[17 * stride], twiddleStart + 17 * twiddleIncrement);
	phasors.Multiply(t36, t37, pReal[18 * stride], pImag[18 * stride], twiddleStart + 18 * twiddleIncrement);
	phasors.Multiply(t38, t39, pReal[19 * stride], pImag[19 * stride], twiddleStart + 19 * twiddleIncrement);
	phasors.Multiply(t40, t41, pReal[20 * stride], pImag[20 * stride], twiddleStart + 20 * twiddleIncrement);
	phasors.Multiply(t42, t43, pReal[21 * stride], pImag[21 * stride], twiddleStart + 21 * twiddleIncrement);
	phasors.Multiply(t44, t45, pReal[22 * stride], pImag[22 * stride], twiddleStart + 22 * twiddleIncrement);

	t46 = t2 - t44;
	t47 = t3 - t45;
	t2 += t44;
	t3 += t45;
	t44 = t4 - t42;
	t45 = t5 - t43;
	t4 += t42;
	t5 += t43;
	t42 = t6 - t40;
	t43 = t7 - t41;
	t6 += t40;
	t7 += t41;
	t40 = t8 - t38;
	t41 = t9 - t39;
	t8 += t38;
	t9 += t39;
	t38 = t10 - t36;
	t39 = t11 - t37;
	t10 += t36;
	t11 += t37;
	t36 = t12 - t34;
	t37 = t13 - t35;
	t12 += t34;
	t13 += t35;
	t34 = t14 - t32;
	t35 = t15 - t33;
	t14 += t32;
	t15 += t33;
	t32 = t16 - t30;
	t33 = t17 - t31;
	t16 += t30;
	t17 += t31;
	t30 = t18 - t28;
	t31 = t19 - t29;
	t18 += t28;
	t19 += t29;
	t28 = t20 - t26;
	t29 = t21 - t27;
	t20 += t26;
	t21 += t27;
	t26 = t22 - t24;
	t27 = t23 - t25;
	t22 += t24;
	t23 += t25;
	t24 = t46 + t44 + t42 + t40 - t38 + t36 - t34 + t32 + t30 - t28 - t26;
	t25 = t47 + t45 + t43 + t41 - t39 + t37 - t35 + t33 + t31 - t29 - t27;
	t46 -= t30;
	t47 -= t31;
	t48 = t2 + t4 + t6 + t8 + t10 + t12 + t14 + t16 + t18 + t20 + t22;
	t49 = t3 + t5 + t7 + t9 + t11 + t13 + t15 + t17 + t19 + t21 + t23;
	t2 -= t18;
	t3 -= t19;
	t44 -= t30;
	t45 -= t31;
	t4 -= t18;
	t5 -= t19;
	t42 -= t30;
	t43 -= t31;
	t6 -= t18;
	t7 -= t19;
	t40 -= t30;
	t41 -= t31;
	t8 -= t18;
	t9 -= t19;
	t38 += t30;
	t39 += t31;
	t10 -= t18;
	t11 -= t19;
	t36 -= t30;
	t37 -= t31;
	t12 -= t18;
	t13 -= t19;
	t34 += t30;
	t35 += t31;
	t14 -= t18;
	t15 -= t19;
	t32 -= t30;
	t33 -= t31;
	t16 -= t18;
	t17 -= t19;
	t28 = t30 + t28;
	t29 = t31 + t29;
	t30 += t26;
	t31 += t27;
	t20 = t18 - t20;
	t21 = t19 - t21;
	t18 -= t22;
	t19 -= t23;
	t22 = t46 - t38;
	t23 = t47 - t39;
	t26 = t46 - t28;
	t27 = t47 - t29;
	t28 = t46 + t28;
	t29 = t47 + t29;
	t50 = t2 - t10;
	t51 = t3 - t11;
	t52 = t2 - t20;
	t53 = t3 - t21;
	t20 = t2 + t20;
	t21 = t3 + t21;
	t54 = t42 - t34;
	t55 = t43 - t35;
	t34 = t42 + t34;
	t35 = t43 + t35;
	t56 = t42 + t32;
	t57 = t43 + t33;
	t58 = t6 - t14;
	t59 = t7 - t15;
	t14 = t6 + t14;
	t15 = t7 + t15;
	t60 = t6 - t16;
	t61 = t7 - t17;
	t62 = t40 - t38;
	t63 = t41 - t39;
	t64 = t40 + t38;
	t65 = t41 + t39;
	t66 = t8 - t10;
	t67 = t9 - t11;
	t68 = t8 + t10;
	t69 = t9 + t11;
	t70 = t32 - t30;
	t71 = t33 - t31;
	t72 = t32 + t30;
	t73 = t33 + t31;
	t74 = t16 - t18;
	t75 = t17 - t19;
	t76 = t16 + t18;
	t77 = t17 + t19;
	t78 = t26 - t44;
	t79 = t27 - t45;
	t26 += t44 + t62;
	t27 += t45 + t63;
	t80 = t28 - t44;
	t81 = t29 - t45;
	t82 = t28 + t44 + t64;
	t83 = t29 + t45 + t65;
	t28 -= t64;
	t29 -= t65;
	t84 = t52 - t4;
	t85 = t53 - t5;
	t86 = t52 + t4 + t68;
	t87 = t53 + t5 + t69;
	t52 -= t68;
	t53 -= t69;
	t88 = t20 - t4;
	t89 = t21 - t5;
	t20 += t4 + t66;
	t21 += t5 + t67;
	t62 = t44 - t62;
	t63 = t45 - t63;
	t44 -= t64;
	t45 -= t65;
	t66 = t4 - t66;
	t67 = t5 - t67;
	t4 -= t68;
	t5 -= t69;
	t64 = t54 - t36;
	t65 = t55 - t37;
	t54 += t36 + t70;
	t55 += t37 + t71;
	t68 = t34 - t36;
	t69 = t35 - t37;
	t90 = t34 + t36 - t72;
	t91 = t35 + t37 - t73;
	t34 += t72;
	t35 += t73;
	t92 = t58 - t12;
	t93 = t59 - t13;
	t58 += t12 - t76;
	t59 += t13 - t77;
	t94 = t14 - t12;
	t95 = t15 - t13;
	t96 = t14 + t12 + t74;
	t97 = t15 + t13 + t75;
	t14 -= t74;
	t15 -= t75;
	t70 = t36 - t70;
	t71 = t37 - t71;
	t36 += t72;
	t37 += t73;
	t74 = t12 - t74;
	t75 = t13 - t75;
	t12 += t76;
	t13 += t77;
	t72 = t78 - t62;
	t73 = t79 - t63;
	t76 = t88 - t66;
	t77 = t89 - t67;
	t98 = t64 - t70;
	t99 = t65 - t71;
	t100 = t92 - t12;
	t101 = t93 - t13;
	t0 += t48;
	t1 += t49;
	t102 = t46 + t42;
	t103 = t47 + t43;
	t104 = t22 + t56;
	t105 = t23 + t57;
	t106 = t78 + t64;
	t107 = t79 + t65;
	t108 = t72 + t98;
	t109 = t73 + t99;
	t110 = t26 + t54;
	t111 = t27 + t55;
	t112 = t80 + t68;
	t113 = t81 + t69;
	t114 = t82 + t90;
	t115 = t83 + t91;
	t116 = t28 + t34;
	t117 = t29 + t35;
	t118 = t2 - t6;
	t119 = t3 - t7;
	t120 = t50 - t60;
	t121 = t51 - t61;
	t122 = t84 - t94;
	t123 = t85 - t95;
	t124 = t86 - t96;
	t125 = t87 - t97;
	t126 = t52 - t14;
	t127 = t53 - t15;
	t128 = t88 - t92;
	t129 = t89 - t93;
	t130 = t76 - t100;
	t131 = t77 - t101;
	t132 = t20 - t58;
	t133 = t21 - t59;
	t134 = t62 + t70;
	t135 = t63 + t71;
	t136 = t44 + t36;
	t137 = t45 + t37;
	t138 = t66 - t12;
	t139 = t67 - t13;
	t140 = t4 - t74;
	t141 = t5 - t75;
	t142 = t40 - t30;
	t143 = t41 - t31;
	t144 = t8 + t18;
	t145 = t9 + t19;
	t146 = t38 - t32;
	t147 = t39 - t33;
	t148 = t10 - t16;
	t149 = t11 - t17;
	t25 *= valueT(0.21799234196875997916);
	t24 *= valueT(0.21799234196875997916);
	t47 *= valueT(2.7645945225911093906);
	t46 *= valueT(2.7645945225911093906);
	t103 *= valueT(1.3350147875716650622);
	t102 *= valueT(1.3350147875716650622);
	t23 *= valueT(3.7728068375656269667);
	t22 *= valueT(3.7728068375656269667);
	t105 *= valueT(1.7960539806927648926);
	t104 *= valueT(1.7960539806927648926);
	t79 *= valueT(0.95488588512274355824);
	t78 *= valueT(0.95488588512274355824);
	t107 *= valueT(0.22139329290838662101);
	t106 *= valueT(0.22139329290838662101);
	t73 *= valueT(0.88148554897000088739);
	t72 *= valueT(0.88148554897000088739);
	t109 *= valueT(0.53113233935198911604);
	t108 *= valueT(0.53113233935198911604);
	t27 *= valueT(0.61891681321574106252);
	t26 *= valueT(0.61891681321574106252);
	t111 *= valueT(0.24448537100605559632);
	t110 *= valueT(0.24448537100605559632);
	t81 *= valueT(0.034379663070158720829);
	t80 *= valueT(0.034379663070158720829);
	t113 *= valueT(0.22030224702215803893);
	t112 *= valueT(0.22030224702215803893);
	t83 *= valueT(0.25453675648342974547);
	t82 *= valueT(0.25453675648342974547);
	t115 *= valueT(0.40359265945440124347);
	t114 *= valueT(0.40359265945440124347);
	t29 *= valueT(0.2218137382036903787);
	t28 *= valueT(0.2218137382036903787);
	t117 *= valueT(0.017866059838636898966);
	t116 *= valueT(0.017866059838636898966);
	t48 *= valueT(1.0454545454545454545);
	t49 *= valueT(1.0454545454545454545);
	t2 *= valueT(0.7507955565833250588);
	t3 *= valueT(0.7507955565833250588);
	t118 *= valueT(1.0605004792966461433);
	t119 *= valueT(1.0605004792966461433);
	t50 *= valueT(0.50843790875019616533);
	t51 *= valueT(0.50843790875019616533);
	t120 *= valueT(0.78013633516750093113);
	t121 *= valueT(0.78013633516750093113);
	t84 *= valueT(0.44121649074213775555);
	t85 *= valueT(0.44121649074213775555);
	t122 *= valueT(0.25478585838854962442);
	t123 *= valueT(0.25478585838854962442);
	t86 *= valueT(0.0037979779850209202293);
	t87 *= valueT(0.0037979779850209202293);
	t124 *= valueT(0.12173644819145031252);
	t125 *= valueT(0.12173644819145031252);
	t52 *= valueT(0.10299658541449607685);
	t53 *= valueT(0.10299658541449607685);
	t126 *= valueT(0.22642397284585271417);
	t127 *= valueT(0.22642397284585271417);
	t88 *= valueT(1.1520811934512563819);
	t89 *= valueT(1.1520811934512563819);
	t128 *= valueT(1.2459694293038749946);
	t129 *= valueT(1.2459694293038749946);
	t76 *= valueT(0.64155533892720625081);
	t77 *= valueT(0.64155533892720625081);
	t130 *= valueT(0.73225828250607722709);
	t131 *= valueT(0.73225828250607722709);
	t20 *= valueT(0.30863808493063553068);
	t21 *= valueT(0.30863808493063553068);
	t132 *= valueT(0.13518730296159495598);
	t133 *= valueT(0.13518730296159495598);
	t63 *= valueT(1.6895707617872591039);
	t62 *= valueT(1.6895707617872591039);
	t135 *= valueT(1.3720037251475807271);
	t134 *= valueT(1.3720037251475807271);
	t45 *= valueT(0.25619340127384909953);
	t44 *= valueT(0.25619340127384909953);
	t137 *= valueT(0.20243618718352113996);
	t136 *= valueT(0.20243618718352113996);
	t66 *= valueT(0.77258482333036237053);
	t67 *= valueT(0.77258482333036237053);
	t138 *= valueT(0.95080541821435668667);
	t139 *= valueT(0.95080541821435668667);
	t4 *= valueT(0.3382199053276416787);
	t5 *= valueT(0.3382199053276416787);
	t140 *= valueT(0.48120983123440233859);
	t141 *= valueT(0.48120983123440233859);
	t43 *= valueT(1.7824398894730114956);
	t42 *= valueT(1.7824398894730114956);
	t65 *= valueT(0.19453226266629193939);
	t64 *= valueT(0.19453226266629193939);
	t99 *= valueT(0.47745176623445429584);
	t98 *= valueT(0.47745176623445429584);
	t55 *= valueT(0.28945800373693071684);
	t54 *= valueT(0.28945800373693071684);
	t69 *= valueT(0.2346676935704091727);
	t68 *= valueT(0.2346676935704091727);
	t91 *= valueT(0.88210737190418308715);
	t90 *= valueT(0.88210737190418308715);
	t35 *= valueT(0.14703683881719679277);
	t34 *= valueT(0.14703683881719679277);
	t57 *= valueT(2.3432271025461826383);
	t56 *= valueT(2.3432271025461826383);
	t6 *= valueT(0.97916730375705359692);
	t7 *= valueT(0.97916730375705359692);
	t92 *= valueT(1.3303017883352506981);
	t93 *= valueT(1.3303017883352506981);
	t100 *= valueT(0.77435606130188038498);
	t101 *= valueT(0.77435606130188038498);
	t58 *= valueT(0.0070195920621051755738);
	t59 *= valueT(0.0070195920621051755738);
	t94 *= valueT(0.040792328818091398501);
	t95 *= valueT(0.040792328818091398501);
	t96 *= valueT(0.041485093084529874071);
	t97 *= valueT(0.041485093084529874071);
	t14 *= valueT(1.0911367804774475258);
	t15 *= valueT(1.0911367804774475258);
	t60 *= valueT(0.75946127429516550514);
	t61 *= valueT(0.75946127429516550514);
	t41 *= valueT(0.98376005299914845343);
	t40 *= valueT(0.98376005299914845343);
	t143 *= valueT(0.47808481915510562032);
	t142 *= valueT(0.47808481915510562032);
	t8 *= valueT(0.26663719880631517604);
	t9 *= valueT(0.26663719880631517604);
	t144 *= valueT(0.92266181791115952847);
	t145 *= valueT(0.92266181791115952847);
	t39 *= valueT(3.7728068375656269667);
	t38 *= valueT(3.7728068375656269667);
	t147 *= valueT(1.7960539806927648926);
	t146 *= valueT(1.7960539806927648926);
	t10 *= valueT(0.50843790875019616533);
	t11 *= valueT(0.50843790875019616533);
	t148 *= valueT(0.78013633516750093113);
	t149 *= valueT(0.78013633516750093113);
	t71 *= valueT(1.6268875613696548269);
	t70 *= valueT(1.6268875613696548269);
	t37 *= valueT(0.38170453238760596548);
	t36 *= valueT(0.38170453238760596548);
	t74 *= valueT(1.1319291092955389243);
	t75 *= valueT(1.1319291092955389243);
	t12 *= valueT(0.99276639557039045688);
	t13 *= valueT(0.99276639557039045688);
	t33 *= valueT(2.3432271025461826383);
	t32 *= valueT(2.3432271025461826383);
	t16 *= valueT(0.75946127429516550514);
	t17 *= valueT(0.75946127429516550514);
	t31 *= valueT(2.4548376760279676944);
	t30 *= valueT(2.4548376760279676944);
	t18 *= valueT(0.65096339149385476267);
	t19 *= valueT(0.65096339149385476267);
	t48 = t0 - t48;
	t49 = t1 - t49;
	t47 -= t103;
	t46 -= t102;
	t103 -= t43;
	t102 -= t42;
	t23 -= t105;
	t22 -= t104;
	t105 -= t57;
	t104 -= t56;
	t79 -= t107;
	t78 -= t106;
	t107 += t65;
	t106 += t64;
	t73 -= t109;
	t72 -= t108;
	t109 -= t99;
	t108 -= t98;
	t27 -= t111;
	t26 -= t110;
	t111 -= t55;
	t110 -= t54;
	t81 += t113;
	t80 += t112;
	t113 += t69;
	t112 += t68;
	t83 -= t115;
	t82 -= t114;
	t115 -= t91;
	t114 -= t90;
	t29 -= t117;
	t28 -= t116;
	t117 -= t35;
	t116 -= t34;
	t2 += t118;
	t3 += t119;
	t118 += t6;
	t119 += t7;
	t50 -= t120;
	t51 -= t121;
	t120 -= t60;
	t121 -= t61;
	t84 += t122;
	t85 += t123;
	t122 += t94;
	t123 += t95;
	t86 -= t124;
	t87 -= t125;
	t124 -= t96;
	t125 -= t97;
	t52 -= t126;
	t53 -= t127;
	t126 += t14;
	t127 += t15;
	t88 -= t128;
	t89 -= t129;
	t128 += t92;
	t129 += t93;
	t76 -= t130;
	t77 -= t131;
	t130 += t100;
	t131 += t101;
	t20 -= t132;
	t21 -= t133;
	t132 += t58;
	t133 += t59;
	t63 -= t135;
	t62 -= t134;
	t135 -= t71;
	t134 -= t70;
	t45 += t137;
	t44 += t136;
	t137 += t37;
	t136 += t36;
	t66 -= t138;
	t67 -= t139;
	t138 += t12;
	t139 += t13;
	t4 += t140;
	t5 += t141;
	t140 += t74;
	t141 += t75;
	t41 += t143;
	t40 += t142;
	t143 += t31;
	t142 += t30;
	t8 += t144;
	t9 += t145;
	t144 -= t18;
	t145 -= t19;
	t39 -= t147;
	t38 -= t146;
	t147 += t33;
	t146 += t32;
	t10 -= t148;
	t11 -= t149;
	t148 -= t16;
	t149 -= t17;
	t79 -= t73;
	t78 -= t72;
	t107 -= t109;
	t106 -= t108;
	t73 += t63;
	t72 += t62;
	t109 += t135;
	t108 += t134;
	t88 -= t76;
	t89 -= t77;
	t128 -= t130;
	t129 -= t131;
	t76 += t66;
	t77 += t67;
	t130 += t138;
	t131 += t139;
	t6 = t79 - t73 + t27 - t81 - t83 - t45;
	t7 = t78 - t72 + t26 - t80 - t82 - t44;
	t79 -= t27;
	t78 -= t26;
	t12 = t107 - t109 + t111 + t113 - t115 + t137;
	t13 = t106 - t108 + t110 + t112 - t114 + t136;
	t107 -= t111;
	t106 -= t110;
	t73 += t27;
	t72 += t26;
	t109 += t111;
	t108 += t110;
	t81 -= t83 - t29;
	t80 -= t82 - t28;
	t113 += t115 - t117;
	t112 += t114 - t116;
	t83 += t29 - t45;
	t82 += t28 - t44;
	t115 += t117 + t137;
	t114 += t116 + t136;
	t14 = t84 + t86 - t52;
	t15 = t85 + t87 - t53;
	t84 -= t86 + t88 - t76 - t20 - t4;
	t85 -= t87 + t89 - t77 - t21 - t5;
	t16 = t122 - t124 + t126;
	t17 = t123 - t125 + t127;
	t122 += t124 + t128 - t130 - t132 + t140;
	t123 += t125 + t129 - t131 - t133 + t141;
	t86 += t52 + t4;
	t87 += t53 + t5;
	t124 += t126 - t140;
	t125 += t127 - t141;
	t88 += t20;
	t89 += t21;
	t128 += t132;
	t129 += t133;
	t76 -= t20;
	t77 -= t21;
	t130 -= t132;
	t131 -= t133;
	t47 -= t23 + t79 - t81;
	t46 -= t22 + t78 - t80;
	t103 -= t105 + t107 + t113;
	t102 -= t104 + t106 + t112;
	t23 -= t73 + t83 - t39;
	t22 -= t72 + t82 - t38;
	t105 -= t109 + t115 - t147;
	t104 -= t108 + t114 - t146;
	t79 += t81;
	t78 += t80;
	t107 -= t113;
	t106 -= t112;
	t73 -= t83 + t41;
	t72 -= t82 + t40;
	t109 -= t115 - t143;
	t108 -= t114 - t142;
	t2 += t50 - t14 + t88;
	t3 += t51 - t15 + t89;
	t118 -= t120 + t16 + t128;
	t119 -= t121 + t17 + t129;
	t50 += t86 - t76 + t10;
	t51 += t87 - t77 + t11;
	t120 += t124 - t130 + t148;
	t121 += t125 - t131 + t149;
	t14 += t88;
	t15 += t89;
	t16 -= t128;
	t17 -= t129;
	t86 += t76 + t8;
	t87 += t77 + t9;
	t124 += t130 - t144;
	t125 += t131 - t145;
	t4 = t48 + t2;
	t5 = t49 + t3;
	t2 = t48 - t2 + t118 + t50 + t120 + t14 - t84 - t16 + t122 + t86 + t124;
	t3 = t49 - t3 + t119 + t51 + t121 + t15 - t85 - t17 + t123 + t87 + t125;
	t118 = t48 - t118;
	t119 = t49 - t119;
	t50 = t48 - t50;
	t51 = t49 - t51;
	t120 = t48 - t120;
	t121 = t49 - t121;
	t14 = t48 - t14;
	t15 = t49 - t15;
	t84 = t48 + t84;
	t85 = t49 + t85;
	t16 = t48 + t16;
	t17 = t49 + t17;
	t122 = t48 - t122;
	t123 = t49 - t123;
	t86 = t48 - t86;
	t87 = t49 - t87;
	t48 -= t124;
	t49 -= t125;
	t8 = t25 + t47;
	t9 = t24 + t46;
	t47 = t25 - t47 + t103 + t23 - t105 - t6 + t79 + t12 - t107 - t73 + t109;
	t46 = t24 - t46 + t102 + t22 - t104 - t7 + t78 + t13 - t106 - t72 + t108;
	t103 = t25 - t103;
	t102 = t24 - t102;
	t23 = t25 - t23;
	t22 = t24 - t22;
	t105 = t25 + t105;
	t104 = t24 + t104;
	t6 = t25 + t6;
	t7 = t24 + t7;
	t79 = t25 - t79;
	t78 = t24 - t78;
	t12 = t25 - t12;
	t13 = t24 - t13;
	t107 = t25 + t107;
	t106 = t24 + t106;
	t73 = t25 + t73;
	t72 = t24 + t72;
	t25 -= t109;
	t24 -= t108;
	pReal[0 * stride] = t0;
	pImag[0 * stride] = t1;
	pReal[1 * stride] = t4 - t8;
	pImag[1 * stride] = t5 + t9;
	pReal[2 * stride] = t84 - t6;
	pImag[2 * stride] = t85 + t7;
	pReal[3 * stride] = t118 - t103;
	pImag[3 * stride] = t119 + t102;
	pReal[4 * stride] = t86 - t73;
	pImag[4 * stride] = t87 + t72;
	pReal[5 * stride] = t50 + t23;
	pImag[5 * stride] = t51 - t22;
	pReal[6 * stride] = t122 - t12;
	pImag[6 * stride] = t123 + t13;
	pReal[7 * stride] = t16 + t107;
	pImag[7 * stride] = t17 - t106;
	pReal[8 * stride] = t120 - t105;
	pImag[8 * stride] = t121 + t104;
	pReal[9 * stride] = t2 - t47;
	pImag[9 * stride] = t3 + t46;
	pReal[10 * stride] = t14 + t79;
	pImag[10 * stride] = t15 - t78;
	pReal[11 * stride] = t48 + t25;
	pImag[11 * stride] = t49 - t24;
	pReal[12 * stride] = t48 - t25;
	pImag[12 * stride] = t49 + t24;
	pReal[13 * stride] = t14 - t79;
	pImag[13 * stride] = t15 + t78;
	pReal[14 * stride] = t2 + t47;
	pImag[14 * stride] = t3 - t46;
	pReal[15 * stride] = t120 + t105;
	pImag[15 * stride] = t121 - t104;
	pReal[16 * stride] = t16 - t107;
	pImag[16 * stride] = t17 + t106;
	pReal[17 * stride] = t122 + t12;
	pImag[17 * stride] = t123 - t13;
	pReal[18 * stride] = t50 - t23;
	pImag[18 * stride] = t51 + t22;
	pReal[19 * stride] = t86 + t73;
	pImag[19 * stride] = t87 - t72;
	pReal[20 * stride] = t118 + t103;
	pImag[20 * stride] = t119 - t102;
	pReal[21 * stride] = t84 + t6;
	pImag[21 * stride] = t85 - t7;
	pReal[22 * stride] = t4 + t8;
	pImag[22 * stride] = t5 - t9;
}

template<> void StandardModule<float, 23>::Compute(float *pReal, float *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

template<> void StandardModule<double, 23>::Compute(double *pReal, double *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

}
}
