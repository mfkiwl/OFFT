
//          Copyright Christian Volmer 2022.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include "../standard_module.h"

namespace offt {
namespace backend {

using std::size_t;
using std::ptrdiff_t;

/*
	Number of additions       : 428
	Number of multiplications : 80
*/

template<> StandardModuleComplexity const StandardModule<float, 26>::Complexity = { 428, 80 };
template<> StandardModuleComplexity const StandardModule<double, 26>::Complexity = { 428, 80 };

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
	valueT t80, t81, t82, t83;

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
	phasors.Multiply(t46, t47, pReal[23 * stride], pImag[23 * stride], twiddleStart + 23 * twiddleIncrement);
	phasors.Multiply(t48, t49, pReal[24 * stride], pImag[24 * stride], twiddleStart + 24 * twiddleIncrement);
	phasors.Multiply(t50, t51, pReal[25 * stride], pImag[25 * stride], twiddleStart + 25 * twiddleIncrement);

	t52 = t2 - t50;
	t53 = t3 - t51;
	t2 += t50;
	t3 += t51;
	t50 = t4 - t48;
	t51 = t5 - t49;
	t4 += t48;
	t5 += t49;
	t48 = t6 - t46;
	t49 = t7 - t47;
	t6 += t46;
	t7 += t47;
	t46 = t8 - t44;
	t47 = t9 - t45;
	t8 += t44;
	t9 += t45;
	t44 = t10 - t42;
	t45 = t11 - t43;
	t10 += t42;
	t11 += t43;
	t42 = t12 - t40;
	t43 = t13 - t41;
	t12 += t40;
	t13 += t41;
	t40 = t14 - t38;
	t41 = t15 - t39;
	t14 += t38;
	t15 += t39;
	t38 = t16 - t36;
	t39 = t17 - t37;
	t16 += t36;
	t17 += t37;
	t36 = t18 - t34;
	t37 = t19 - t35;
	t18 += t34;
	t19 += t35;
	t34 = t20 - t32;
	t35 = t21 - t33;
	t20 += t32;
	t21 += t33;
	t32 = t22 - t30;
	t33 = t23 - t31;
	t22 += t30;
	t23 += t31;
	t30 = t24 - t28;
	t31 = t25 - t29;
	t24 += t28;
	t25 += t29;
	t28 = t52 - t48;
	t29 = t53 - t49;
	t48 = t52 + t48 + t36;
	t49 = t53 + t49 + t37;
	t52 -= t36;
	t53 -= t37;
	t36 = t2 - t10;
	t37 = t3 - t11;
	t2 += t10;
	t3 += t11;
	t10 = t50 - t42;
	t11 = t51 - t43;
	t50 += t42 - t38;
	t51 += t43 - t39;
	t54 = t4 - t20;
	t55 = t5 - t21;
	t4 += t20;
	t5 += t21;
	t20 = t6 - t22;
	t21 = t7 - t23;
	t6 += t22;
	t7 += t23;
	t22 = t46 + t34 + t30;
	t23 = t47 + t35 + t31;
	t46 -= t30;
	t47 -= t31;
	t56 = t8 - t12;
	t57 = t9 - t13;
	t8 += t12;
	t9 += t13;
	t12 = t44 + t40;
	t13 = t45 + t41;
	t44 -= t40 + t32;
	t45 -= t41 + t33;
	t42 += t38;
	t43 += t39;
	t40 -= t32;
	t41 -= t33;
	t32 = t14 - t18;
	t33 = t15 - t19;
	t14 += t18;
	t15 += t19;
	t18 = t16 - t24;
	t19 = t17 - t25;
	t16 += t24;
	t17 += t25;
	t34 -= t30;
	t35 -= t31;
	t24 = t28 + t52;
	t25 = t29 + t53;
	t30 = t48 + t44;
	t31 = t49 + t45;
	t38 = t36 - t20;
	t39 = t37 - t21;
	t20 = t36 + t20 - t32;
	t21 = t37 + t21 - t33;
	t36 += t32;
	t37 += t33;
	t32 = t2 - t6;
	t33 = t3 - t7;
	t58 = t2 + t6 + t14;
	t59 = t3 + t7 + t15;
	t2 -= t14;
	t3 -= t15;
	t60 = t10 - t42;
	t61 = t11 - t43;
	t62 = t50 - t22;
	t63 = t51 - t23;
	t64 = t54 - t56 + t18;
	t65 = t55 - t57 + t19;
	t54 -= t18;
	t55 -= t19;
	t66 = t4 - t8;
	t67 = t5 - t9;
	t68 = t4 + t8 + t16;
	t69 = t5 + t9 + t17;
	t4 -= t16;
	t5 -= t17;
	t6 -= t14;
	t7 -= t15;
	t14 = t46 + t34;
	t15 = t47 + t35;
	t56 += t18;
	t57 += t19;
	t8 -= t16;
	t9 -= t17;
	t16 = t12 + t40;
	t17 = t13 + t41;
	t0 += t68;
	t1 += t69;
	t18 = t28 - t12;
	t19 = t29 - t13;
	t70 = t24 - t16;
	t71 = t25 - t17;
	t72 = t52 - t40;
	t73 = t53 - t41;
	t74 = t38 + t36;
	t75 = t39 + t37;
	t26 = t58 + t26;
	t27 = t59 + t27;
	t76 = t10 - t46;
	t77 = t11 - t47;
	t78 = t60 - t14;
	t79 = t61 - t15;
	t80 = t54 - t56;
	t81 = t55 - t57;
	t82 = t42 + t34;
	t83 = t43 + t35;
	t29 *= valueT(0.10417870810104801192);
	t28 *= valueT(0.10417870810104801192);
	t19 *= valueT(0.42380699395323743523);
	t18 *= valueT(0.42380699395323743523);
	t25 *= valueT(0.73058834417912600679);
	t24 *= valueT(0.73058834417912600679);
	t71 *= valueT(0.087981928766792081008);
	t70 *= valueT(0.087981928766792081008);
	t49 *= valueT(0.40100212832186721636);
	t48 *= valueT(0.40100212832186721636);
	t31 *= valueT(0.57514072947400312137);
	t30 *= valueT(0.57514072947400312137);
	t53 *= valueT(2.0875863244363300084);
	t52 *= valueT(2.0875863244363300084);
	t73 *= valueT(0.1598612076528611922);
	t72 *= valueT(0.1598612076528611922);
	t38 *= valueT(1.0407474201500718718);
	t39 *= valueT(1.0407474201500718718);
	t74 *= valueT(0.52422663952658214901);
	t75 *= valueT(0.52422663952658214901);
	t20 *= valueT(0.30046260628866577443);
	t21 *= valueT(0.30046260628866577443);
	t36 *= valueT(0.53193249842967457518);
	t37 *= valueT(0.53193249842967457518);
	t32 *= valueT(0.57944001890096049323);
	t33 *= valueT(0.57944001890096049323);
	t58 *= valueT(1.0833333333333333333);
	t59 *= valueT(1.0833333333333333333);
	t2 *= valueT(0.15180597207438773197);
	t3 *= valueT(0.15180597207438773197);
	t11 *= valueT(1.5596006223820445613);
	t10 *= valueT(1.5596006223820445613);
	t77 *= valueT(0.1598612076528611922);
	t76 *= valueT(0.1598612076528611922);
	t61 *= valueT(1.0211729150707586474);
	t60 *= valueT(1.0211729150707586474);
	t79 *= valueT(0.087981928766792081008);
	t78 *= valueT(0.087981928766792081008);
	t51 *= valueT(0.74927933062613902637);
	t50 *= valueT(0.74927933062613902637);
	t63 *= valueT(0.57514072947400312137);
	t62 *= valueT(0.57514072947400312137);
	t64 *= valueT(0.30046260628866577443);
	t65 *= valueT(0.30046260628866577443);
	t54 *= valueT(1.0407474201500718718);
	t55 *= valueT(1.0407474201500718718);
	t80 *= valueT(0.52422663952658214901);
	t81 *= valueT(0.52422663952658214901);
	t66 *= valueT(0.42763404682657276126);
	t67 *= valueT(0.42763404682657276126);
	t68 *= valueT(1.0833333333333333333);
	t69 *= valueT(1.0833333333333333333);
	t4 *= valueT(0.57944001890096049323);
	t5 *= valueT(0.57944001890096049323);
	t6 *= valueT(0.42763404682657276126);
	t7 *= valueT(0.42763404682657276126);
	t23 *= valueT(0.40100212832186721636);
	t22 *= valueT(0.40100212832186721636);
	t47 *= valueT(2.0875863244363300084);
	t46 *= valueT(2.0875863244363300084);
	t15 *= valueT(0.73058834417912600679);
	t14 *= valueT(0.73058834417912600679);
	t56 *= valueT(0.53193249842967457518);
	t57 *= valueT(0.53193249842967457518);
	t8 *= valueT(0.15180597207438773197);
	t9 *= valueT(0.15180597207438773197);
	t13 *= valueT(1.503918122830231381);
	t12 *= valueT(1.503918122830231381);
	t17 *= valueT(1.0211729150707586474);
	t16 *= valueT(1.0211729150707586474);
	t45 *= valueT(0.74927933062613902637);
	t44 *= valueT(0.74927933062613902637);
	t43 *= valueT(1.503918122830231381);
	t42 *= valueT(1.503918122830231381);
	t83 *= valueT(0.42380699395323743523);
	t82 *= valueT(0.42380699395323743523);
	t41 *= valueT(1.5596006223820445613);
	t40 *= valueT(1.5596006223820445613);
	t35 *= valueT(0.10417870810104801192);
	t34 *= valueT(0.10417870810104801192);
	t68 = t0 - t68;
	t69 = t1 - t69;
	t29 += t19;
	t28 += t18;
	t19 -= t13;
	t18 -= t12;
	t25 += t71;
	t24 += t70;
	t71 -= t17;
	t70 -= t16;
	t53 -= t73;
	t52 -= t72;
	t73 += t41;
	t72 += t40;
	t38 -= t74;
	t39 -= t75;
	t74 -= t36;
	t75 -= t37;
	t58 -= t26;
	t59 -= t27;
	t11 -= t77;
	t10 -= t76;
	t77 += t47;
	t76 += t46;
	t61 += t79;
	t60 += t78;
	t79 -= t15;
	t78 -= t14;
	t54 -= t80;
	t55 -= t81;
	t80 += t56;
	t81 += t57;
	t43 += t83;
	t42 += t82;
	t83 += t35;
	t82 += t34;
	t12 = t68 - t66 + t4;
	t13 = t69 - t67 + t5;
	t66 = t68 + t66 - t8;
	t67 = t69 + t67 - t9;
	t68 -= t4 - t8;
	t69 -= t5 - t9;
	t29 -= t25;
	t28 -= t24;
	t19 -= t71;
	t18 -= t70;
	t25 -= t53;
	t24 -= t52;
	t71 += t73;
	t70 += t72;
	t49 -= t31;
	t48 -= t30;
	t31 -= t45;
	t30 -= t44;
	t4 = t38 - t74 + t20;
	t5 = t39 - t75 + t21;
	t38 -= t20;
	t39 -= t21;
	t74 += t20;
	t75 += t21;
	t8 = t32 - t58 - t2;
	t9 = t33 - t59 - t3;
	t32 += t58 + t6;
	t33 += t59 + t7;
	t58 -= t2 + t6;
	t59 -= t3 + t7;
	t11 -= t61;
	t10 -= t60;
	t77 += t79;
	t76 += t78;
	t61 += t43;
	t60 += t42;
	t79 += t83;
	t78 += t82;
	t51 -= t63;
	t50 -= t62;
	t63 += t23;
	t62 += t22;
	t2 = t64 + t54;
	t3 = t65 + t55;
	t54 = t64 - t54 + t80;
	t55 = t65 - t55 + t81;
	t64 -= t80;
	t65 -= t81;
	t6 = t12 - t2;
	t7 = t13 - t3;
	t12 += t2;
	t13 += t3;
	t2 = t66 + t64;
	t3 = t67 + t65;
	t66 -= t64;
	t67 -= t65;
	t14 = t68 - t54;
	t15 = t69 - t55;
	t68 += t54;
	t69 += t55;
	t16 = t29 - t25 + t49;
	t17 = t28 - t24 + t48;
	t29 -= t49;
	t28 -= t48;
	t20 = t19 - t71 - t31;
	t21 = t18 - t70 - t30;
	t19 += t31;
	t18 += t30;
	t25 += t49;
	t24 += t48;
	t71 -= t31;
	t70 -= t30;
	t22 = t4 + t8;
	t23 = t5 + t9;
	t4 -= t8;
	t5 -= t9;
	t8 = t38 + t32;
	t9 = t39 + t33;
	t38 -= t32;
	t39 -= t33;
	t30 = t74 + t58;
	t31 = t75 + t59;
	t74 -= t58;
	t75 -= t59;
	t32 = t11 - t61 - t51;
	t33 = t10 - t60 - t50;
	t11 += t51;
	t10 += t50;
	t34 = t77 + t79 - t63;
	t35 = t76 + t78 - t62;
	t77 += t63;
	t76 += t62;
	t61 -= t51;
	t60 -= t50;
	t79 += t63;
	t78 += t62;
	t36 = t6 - t79;
	t37 = t7 + t78;
	t6 += t79;
	t7 -= t78;
	t40 = t12 + t11;
	t41 = t13 - t10;
	t12 -= t11;
	t13 += t10;
	t10 = t2 + t32;
	t11 = t3 - t33;
	t2 -= t32;
	t3 += t33;
	t32 = t66 - t77;
	t33 = t67 + t76;
	t66 += t77;
	t67 -= t76;
	t42 = t14 + t34;
	t43 = t15 - t35;
	t14 -= t34;
	t15 += t35;
	t34 = t68 - t61;
	t35 = t69 + t60;
	t68 += t61;
	t69 -= t60;
	t44 = t16 + t22;
	t45 = t17 - t23;
	t16 -= t22;
	t17 += t23;
	t22 = t29 + t8;
	t23 = t28 - t9;
	t29 -= t8;
	t28 += t9;
	t8 = t20 + t30;
	t9 = t21 - t31;
	t20 -= t30;
	t21 += t31;
	t30 = t19 + t4;
	t31 = t18 - t5;
	t19 -= t4;
	t18 += t5;
	t4 = t25 + t74;
	t5 = t24 - t75;
	t25 -= t74;
	t24 += t75;
	t46 = t71 + t38;
	t47 = t70 - t39;
	t71 -= t38;
	t70 += t39;
	pReal[0 * stride] = t0 + t26;
	pImag[0 * stride] = t1 + t27;
	pReal[1 * stride] = t12 + t71;
	pImag[1 * stride] = t13 - t70;
	pReal[2 * stride] = t32 + t4;
	pImag[2 * stride] = t33 - t5;
	pReal[3 * stride] = t10 + t8;
	pImag[3 * stride] = t11 - t9;
	pReal[4 * stride] = t34 - t30;
	pImag[4 * stride] = t35 + t31;
	pReal[5 * stride] = t36 + t22;
	pImag[5 * stride] = t37 - t23;
	pReal[6 * stride] = t42 + t44;
	pImag[6 * stride] = t43 - t45;
	pReal[7 * stride] = t14 + t16;
	pImag[7 * stride] = t15 - t17;
	pReal[8 * stride] = t6 + t29;
	pImag[8 * stride] = t7 - t28;
	pReal[9 * stride] = t68 - t19;
	pImag[9 * stride] = t69 + t18;
	pReal[10 * stride] = t2 + t20;
	pImag[10 * stride] = t3 - t21;
	pReal[11 * stride] = t66 + t25;
	pImag[11 * stride] = t67 - t24;
	pReal[12 * stride] = t40 + t46;
	pImag[12 * stride] = t41 - t47;
	pReal[13 * stride] = t0 - t26;
	pImag[13 * stride] = t1 - t27;
	pReal[14 * stride] = t12 - t71;
	pImag[14 * stride] = t13 + t70;
	pReal[15 * stride] = t32 - t4;
	pImag[15 * stride] = t33 + t5;
	pReal[16 * stride] = t10 - t8;
	pImag[16 * stride] = t11 + t9;
	pReal[17 * stride] = t34 + t30;
	pImag[17 * stride] = t35 - t31;
	pReal[18 * stride] = t36 - t22;
	pImag[18 * stride] = t37 + t23;
	pReal[19 * stride] = t42 - t44;
	pImag[19 * stride] = t43 + t45;
	pReal[20 * stride] = t14 - t16;
	pImag[20 * stride] = t15 + t17;
	pReal[21 * stride] = t6 - t29;
	pImag[21 * stride] = t7 + t28;
	pReal[22 * stride] = t68 + t19;
	pImag[22 * stride] = t69 - t18;
	pReal[23 * stride] = t2 - t20;
	pImag[23 * stride] = t3 + t21;
	pReal[24 * stride] = t66 - t25;
	pImag[24 * stride] = t67 + t24;
	pReal[25 * stride] = t40 - t46;
	pImag[25 * stride] = t41 + t47;
}

template<> void StandardModule<float, 26>::Compute(float *pReal, float *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

template<> void StandardModule<double, 26>::Compute(double *pReal, double *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

}
}
