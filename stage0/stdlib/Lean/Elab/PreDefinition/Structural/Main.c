// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Main
// Imports: Init Lean.Elab.PreDefinition.Structural.Basic Lean.Elab.PreDefinition.Structural.FindRecArg Lean.Elab.PreDefinition.Structural.Preprocess Lean.Elab.PreDefinition.Structural.BRecOn Lean.Elab.PreDefinition.Structural.IndPred Lean.Elab.PreDefinition.Structural.Eqns Lean.Elab.PreDefinition.Structural.SmartUnfolding
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_addAsAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural_Main___hyg_1045_(lean_object*);
static lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_findRecArg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4;
uint8_t lean_usize_dec_lt(size_t, size_t);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2;
extern lean_object* l_Lean_levelZero;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTRAux___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1(lean_object*);
lean_object* l_Lean_Elab_Structural_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3;
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_Lean_Elab_Structural_structuralRecursion___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition;
lean_object* lean_array_to_list(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7;
static lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
lean_object* l_Lean_Meta_mapErrorImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2;
static lean_object* l_Lean_Elab_Structural_structuralRecursion___closed__4;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Structural_structuralRecursion___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forEachExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Structural_structuralRecursion___closed__1;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2;
lean_object* l_Lean_Elab_Structural_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2;
lean_object* l_IO_mkRef___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_4, x_3);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_uget(x_2, x_4);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 2);
lean_inc(x_19);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_5);
lean_ctor_set(x_21, 1, x_10);
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_23 = lean_ctor_get(x_15, 2);
lean_dec(x_23);
x_24 = lean_ctor_get(x_15, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_15, 0);
lean_dec(x_25);
x_26 = lean_array_fget(x_17, x_18);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_18, x_27);
lean_dec(x_18);
lean_ctor_set(x_15, 1, x_28);
x_29 = lean_ctor_get(x_6, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_6, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_6, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_6, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_6, 4);
lean_inc(x_33);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
uint8_t x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = 2;
x_36 = 0;
lean_ctor_set_uint8(x_29, 5, x_35);
lean_ctor_set_uint8(x_29, 9, x_36);
x_37 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_37, 0, x_29);
lean_ctor_set(x_37, 1, x_30);
lean_ctor_set(x_37, 2, x_31);
lean_ctor_set(x_37, 3, x_32);
lean_ctor_set(x_37, 4, x_33);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_38 = l_Lean_Meta_isExprDefEq(x_13, x_26, x_37, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_38, 0);
lean_dec(x_42);
x_43 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
lean_ctor_set(x_5, 0, x_43);
lean_ctor_set(x_38, 0, x_5);
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
lean_ctor_set(x_5, 0, x_45);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_5);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; size_t x_48; size_t x_49; 
x_47 = lean_ctor_get(x_38, 1);
lean_inc(x_47);
lean_dec(x_38);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_48 = 1;
x_49 = lean_usize_add(x_4, x_48);
x_4 = x_49;
x_10 = x_47;
goto _start;
}
}
else
{
uint8_t x_51; 
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_38);
if (x_51 == 0)
{
return x_38;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_38, 0);
x_53 = lean_ctor_get(x_38, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_38);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_55 = lean_ctor_get_uint8(x_29, 0);
x_56 = lean_ctor_get_uint8(x_29, 1);
x_57 = lean_ctor_get_uint8(x_29, 2);
x_58 = lean_ctor_get_uint8(x_29, 3);
x_59 = lean_ctor_get_uint8(x_29, 4);
x_60 = lean_ctor_get_uint8(x_29, 6);
x_61 = lean_ctor_get_uint8(x_29, 7);
x_62 = lean_ctor_get_uint8(x_29, 8);
x_63 = lean_ctor_get_uint8(x_29, 10);
x_64 = lean_ctor_get_uint8(x_29, 11);
x_65 = lean_ctor_get_uint8(x_29, 12);
x_66 = lean_ctor_get_uint8(x_29, 13);
lean_dec(x_29);
x_67 = 2;
x_68 = 0;
x_69 = lean_alloc_ctor(0, 0, 14);
lean_ctor_set_uint8(x_69, 0, x_55);
lean_ctor_set_uint8(x_69, 1, x_56);
lean_ctor_set_uint8(x_69, 2, x_57);
lean_ctor_set_uint8(x_69, 3, x_58);
lean_ctor_set_uint8(x_69, 4, x_59);
lean_ctor_set_uint8(x_69, 5, x_67);
lean_ctor_set_uint8(x_69, 6, x_60);
lean_ctor_set_uint8(x_69, 7, x_61);
lean_ctor_set_uint8(x_69, 8, x_62);
lean_ctor_set_uint8(x_69, 9, x_68);
lean_ctor_set_uint8(x_69, 10, x_63);
lean_ctor_set_uint8(x_69, 11, x_64);
lean_ctor_set_uint8(x_69, 12, x_65);
lean_ctor_set_uint8(x_69, 13, x_66);
x_70 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_30);
lean_ctor_set(x_70, 2, x_31);
lean_ctor_set(x_70, 3, x_32);
lean_ctor_set(x_70, 4, x_33);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_71 = l_Lean_Meta_isExprDefEq(x_13, x_26, x_70, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_unbox(x_72);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_75 = x_71;
} else {
 lean_dec_ref(x_71);
 x_75 = lean_box(0);
}
x_76 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
lean_ctor_set(x_5, 0, x_76);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_5);
lean_ctor_set(x_77, 1, x_74);
return x_77;
}
else
{
lean_object* x_78; size_t x_79; size_t x_80; 
x_78 = lean_ctor_get(x_71, 1);
lean_inc(x_78);
lean_dec(x_71);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_79 = 1;
x_80 = lean_usize_add(x_4, x_79);
x_4 = x_80;
x_10 = x_78;
goto _start;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_82 = lean_ctor_get(x_71, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_71, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_84 = x_71;
} else {
 lean_dec_ref(x_71);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; lean_object* x_107; uint8_t x_108; uint8_t x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_15);
x_86 = lean_array_fget(x_17, x_18);
x_87 = lean_unsigned_to_nat(1u);
x_88 = lean_nat_add(x_18, x_87);
lean_dec(x_18);
x_89 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_89, 0, x_17);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_19);
x_90 = lean_ctor_get(x_6, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_6, 1);
lean_inc(x_91);
x_92 = lean_ctor_get(x_6, 2);
lean_inc(x_92);
x_93 = lean_ctor_get(x_6, 3);
lean_inc(x_93);
x_94 = lean_ctor_get(x_6, 4);
lean_inc(x_94);
x_95 = lean_ctor_get_uint8(x_90, 0);
x_96 = lean_ctor_get_uint8(x_90, 1);
x_97 = lean_ctor_get_uint8(x_90, 2);
x_98 = lean_ctor_get_uint8(x_90, 3);
x_99 = lean_ctor_get_uint8(x_90, 4);
x_100 = lean_ctor_get_uint8(x_90, 6);
x_101 = lean_ctor_get_uint8(x_90, 7);
x_102 = lean_ctor_get_uint8(x_90, 8);
x_103 = lean_ctor_get_uint8(x_90, 10);
x_104 = lean_ctor_get_uint8(x_90, 11);
x_105 = lean_ctor_get_uint8(x_90, 12);
x_106 = lean_ctor_get_uint8(x_90, 13);
if (lean_is_exclusive(x_90)) {
 x_107 = x_90;
} else {
 lean_dec_ref(x_90);
 x_107 = lean_box(0);
}
x_108 = 2;
x_109 = 0;
if (lean_is_scalar(x_107)) {
 x_110 = lean_alloc_ctor(0, 0, 14);
} else {
 x_110 = x_107;
}
lean_ctor_set_uint8(x_110, 0, x_95);
lean_ctor_set_uint8(x_110, 1, x_96);
lean_ctor_set_uint8(x_110, 2, x_97);
lean_ctor_set_uint8(x_110, 3, x_98);
lean_ctor_set_uint8(x_110, 4, x_99);
lean_ctor_set_uint8(x_110, 5, x_108);
lean_ctor_set_uint8(x_110, 6, x_100);
lean_ctor_set_uint8(x_110, 7, x_101);
lean_ctor_set_uint8(x_110, 8, x_102);
lean_ctor_set_uint8(x_110, 9, x_109);
lean_ctor_set_uint8(x_110, 10, x_103);
lean_ctor_set_uint8(x_110, 11, x_104);
lean_ctor_set_uint8(x_110, 12, x_105);
lean_ctor_set_uint8(x_110, 13, x_106);
x_111 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_91);
lean_ctor_set(x_111, 2, x_92);
lean_ctor_set(x_111, 3, x_93);
lean_ctor_set(x_111, 4, x_94);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_112 = l_Lean_Meta_isExprDefEq(x_13, x_86, x_111, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; uint8_t x_114; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_unbox(x_113);
lean_dec(x_113);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_116 = x_112;
} else {
 lean_dec_ref(x_112);
 x_116 = lean_box(0);
}
x_117 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
lean_ctor_set(x_5, 1, x_89);
lean_ctor_set(x_5, 0, x_117);
if (lean_is_scalar(x_116)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_116;
}
lean_ctor_set(x_118, 0, x_5);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
else
{
lean_object* x_119; size_t x_120; size_t x_121; 
x_119 = lean_ctor_get(x_112, 1);
lean_inc(x_119);
lean_dec(x_112);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_89);
lean_ctor_set(x_5, 0, x_1);
x_120 = 1;
x_121 = lean_usize_add(x_4, x_120);
x_4 = x_121;
x_10 = x_119;
goto _start;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_89);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_123 = lean_ctor_get(x_112, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_112, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_125 = x_112;
} else {
 lean_dec_ref(x_112);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_5, 1);
lean_inc(x_127);
lean_dec(x_5);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 2);
lean_inc(x_130);
x_131 = lean_nat_dec_lt(x_129, x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_1);
lean_ctor_set(x_132, 1, x_127);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_10);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; uint8_t x_148; uint8_t x_149; uint8_t x_150; uint8_t x_151; uint8_t x_152; uint8_t x_153; uint8_t x_154; uint8_t x_155; lean_object* x_156; uint8_t x_157; uint8_t x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 x_134 = x_127;
} else {
 lean_dec_ref(x_127);
 x_134 = lean_box(0);
}
x_135 = lean_array_fget(x_128, x_129);
x_136 = lean_unsigned_to_nat(1u);
x_137 = lean_nat_add(x_129, x_136);
lean_dec(x_129);
if (lean_is_scalar(x_134)) {
 x_138 = lean_alloc_ctor(0, 3, 0);
} else {
 x_138 = x_134;
}
lean_ctor_set(x_138, 0, x_128);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set(x_138, 2, x_130);
x_139 = lean_ctor_get(x_6, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_6, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_6, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_6, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_6, 4);
lean_inc(x_143);
x_144 = lean_ctor_get_uint8(x_139, 0);
x_145 = lean_ctor_get_uint8(x_139, 1);
x_146 = lean_ctor_get_uint8(x_139, 2);
x_147 = lean_ctor_get_uint8(x_139, 3);
x_148 = lean_ctor_get_uint8(x_139, 4);
x_149 = lean_ctor_get_uint8(x_139, 6);
x_150 = lean_ctor_get_uint8(x_139, 7);
x_151 = lean_ctor_get_uint8(x_139, 8);
x_152 = lean_ctor_get_uint8(x_139, 10);
x_153 = lean_ctor_get_uint8(x_139, 11);
x_154 = lean_ctor_get_uint8(x_139, 12);
x_155 = lean_ctor_get_uint8(x_139, 13);
if (lean_is_exclusive(x_139)) {
 x_156 = x_139;
} else {
 lean_dec_ref(x_139);
 x_156 = lean_box(0);
}
x_157 = 2;
x_158 = 0;
if (lean_is_scalar(x_156)) {
 x_159 = lean_alloc_ctor(0, 0, 14);
} else {
 x_159 = x_156;
}
lean_ctor_set_uint8(x_159, 0, x_144);
lean_ctor_set_uint8(x_159, 1, x_145);
lean_ctor_set_uint8(x_159, 2, x_146);
lean_ctor_set_uint8(x_159, 3, x_147);
lean_ctor_set_uint8(x_159, 4, x_148);
lean_ctor_set_uint8(x_159, 5, x_157);
lean_ctor_set_uint8(x_159, 6, x_149);
lean_ctor_set_uint8(x_159, 7, x_150);
lean_ctor_set_uint8(x_159, 8, x_151);
lean_ctor_set_uint8(x_159, 9, x_158);
lean_ctor_set_uint8(x_159, 10, x_152);
lean_ctor_set_uint8(x_159, 11, x_153);
lean_ctor_set_uint8(x_159, 12, x_154);
lean_ctor_set_uint8(x_159, 13, x_155);
x_160 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_140);
lean_ctor_set(x_160, 2, x_141);
lean_ctor_set(x_160, 3, x_142);
lean_ctor_set(x_160, 4, x_143);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_161 = l_Lean_Meta_isExprDefEq(x_13, x_135, x_160, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; uint8_t x_163; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_unbox(x_162);
lean_dec(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_164 = lean_ctor_get(x_161, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_165 = x_161;
} else {
 lean_dec_ref(x_161);
 x_165 = lean_box(0);
}
x_166 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1;
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_138);
if (lean_is_scalar(x_165)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_165;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_164);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; size_t x_171; size_t x_172; 
x_169 = lean_ctor_get(x_161, 1);
lean_inc(x_169);
lean_dec(x_161);
lean_inc(x_1);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_1);
lean_ctor_set(x_170, 1, x_138);
x_171 = 1;
x_172 = lean_usize_add(x_4, x_171);
x_4 = x_172;
x_5 = x_170;
x_10 = x_169;
goto _start;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_138);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_174 = lean_ctor_get(x_161, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_161, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_176 = x_161;
} else {
 lean_dec_ref(x_161);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_mkSort(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Expr_isAppOf(x_5, x_1);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = 1;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Expr_getAppNumArgsAux(x_5, x_15);
x_17 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1;
lean_inc(x_16);
x_18 = lean_mk_array(x_16, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_16, x_19);
lean_dec(x_16);
x_21 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_5, x_18, x_20);
x_47 = lean_st_ref_get(x_9, x_10);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_st_ref_take(x_4, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_array_get_size(x_21);
x_53 = lean_nat_dec_lt(x_52, x_50);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_52);
x_54 = lean_st_ref_set(x_4, x_50, x_51);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_22 = x_55;
goto block_46;
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_50);
x_56 = lean_st_ref_set(x_4, x_52, x_51);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_22 = x_57;
goto block_46;
}
block_46:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; 
x_23 = l_Array_toSubarray___rarg(x_2, x_15, x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_array_get_size(x_21);
x_27 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_28 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_29 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1(x_24, x_21, x_27, x_28, x_25, x_6, x_7, x_8, x_9, x_22);
lean_dec(x_21);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2;
x_34 = lean_box(0);
x_35 = lean_apply_6(x_33, x_34, x_6, x_7, x_8, x_9, x_32);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_36 = !lean_is_exclusive(x_29);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_29, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_31, 0);
lean_inc(x_38);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_38);
return x_29;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_dec(x_29);
x_40 = lean_ctor_get(x_31, 0);
lean_inc(x_40);
lean_dec(x_31);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_42 = !lean_is_exclusive(x_29);
if (x_42 == 0)
{
return x_29;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_29, 0);
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_29);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_2);
x_10 = lean_st_ref_get(x_7, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_9);
x_12 = l_IO_mkRef___rarg(x_9, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_13);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___boxed), 10, 4);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_9);
lean_closure_set(x_15, 3, x_13);
lean_inc(x_7);
x_16 = l_Lean_Meta_forEachExpr_x27(x_3, x_15, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_7, x_17);
lean_dec(x_7);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_13, x_19);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_7);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_1);
x_13 = lean_st_ref_set(x_6, x_9, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_9, 1);
x_21 = lean_ctor_get(x_9, 2);
x_22 = lean_ctor_get(x_9, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_22);
x_24 = lean_st_ref_set(x_6, x_23, x_10);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_1);
x_12 = l_Lean_Elab_Structural_ensureNoRecFn(x_1, x_2, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_array_get_size(x_15);
x_17 = lean_ctor_get(x_3, 2);
x_18 = lean_nat_add(x_16, x_17);
lean_dec(x_16);
x_19 = lean_ctor_get(x_4, 0);
x_20 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 4);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_19);
x_24 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_1);
lean_ctor_set(x_24, 4, x_23);
lean_ctor_set(x_24, 5, x_14);
lean_ctor_set_uint8(x_24, sizeof(void*)*6, x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_12, 0, x_25);
return x_12;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_26 = lean_ctor_get(x_12, 0);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_12);
x_28 = lean_ctor_get(x_3, 0);
x_29 = lean_array_get_size(x_28);
x_30 = lean_ctor_get(x_3, 2);
x_31 = lean_nat_add(x_29, x_30);
lean_dec(x_29);
x_32 = lean_ctor_get(x_4, 0);
x_33 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_34 = lean_ctor_get(x_4, 1);
x_35 = lean_ctor_get(x_4, 2);
x_36 = lean_ctor_get(x_4, 4);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_32);
x_37 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_35);
lean_ctor_set(x_37, 3, x_1);
lean_ctor_set(x_37, 4, x_36);
lean_ctor_set(x_37, 5, x_26);
lean_ctor_set_uint8(x_37, sizeof(void*)*6, x_33);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_27);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_12);
if (x_40 == 0)
{
return x_12;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_12, 0);
x_42 = lean_ctor_get(x_12, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_12);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("result: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = 1;
lean_inc(x_8);
x_15 = l_Lean_Meta_mkLambdaFVars(x_1, x_6, x_13, x_14, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_32 = lean_st_ref_get(x_11, x_17);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_18 = x_13;
x_19 = x_36;
goto block_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
lean_inc(x_5);
x_38 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__8(x_5, x_7, x_8, x_9, x_10, x_11, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_unbox(x_39);
lean_dec(x_39);
x_18 = x_41;
x_19 = x_40;
goto block_31;
}
block_31:
{
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_2, x_16, x_3, x_4, x_20, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_7);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_16);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_16);
x_23 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__7(x_5, x_26, x_7, x_8, x_9, x_10, x_11, x_19);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_2, x_16, x_3, x_4, x_28, x_7, x_8, x_9, x_10, x_11, x_29);
lean_dec(x_7);
lean_dec(x_28);
return x_30;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_15);
if (x_42 == 0)
{
return x_15;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_15, 0);
x_44 = lean_ctor_get(x_15, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_15);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
if (x_13 == 0)
{
lean_object* x_14; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_14 = l_Lean_Elab_Structural_mkBRecOn(x_2, x_6, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2(x_1, x_2, x_6, x_3, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_3);
lean_dec(x_6);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_22 = l_Lean_Elab_Structural_mkIndPredBRecOn(x_2, x_6, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2(x_1, x_2, x_6, x_3, x_4, x_23, x_7, x_8, x_9, x_10, x_11, x_24);
lean_dec(x_3);
lean_dec(x_6);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_22);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__3), 12, 5);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
lean_closure_set(x_14, 4, x_5);
x_15 = l_Lean_Elab_Structural_findRecArg___rarg(x_6, x_1, x_14, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numFixed: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix(x_1, x_2, x_3, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_32 = lean_st_ref_get(x_11, x_15);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = 0;
x_16 = x_37;
x_17 = x_36;
goto block_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
lean_inc(x_5);
x_39 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__8(x_5, x_7, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unbox(x_40);
lean_dec(x_40);
x_16 = x_42;
x_17 = x_41;
goto block_31;
}
block_31:
{
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4(x_2, x_1, x_4, x_5, x_3, x_14, x_18, x_7, x_8, x_9, x_10, x_11, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_14);
x_20 = l_Nat_repr(x_14);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
lean_inc(x_5);
x_27 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__7(x_5, x_26, x_7, x_8, x_9, x_10, x_11, x_17);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4(x_2, x_1, x_4, x_5, x_3, x_14, x_28, x_7, x_8, x_9, x_10, x_11, x_29);
lean_dec(x_28);
return x_30;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_13);
if (x_43 == 0)
{
return x_13;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_13, 0);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_13);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" :=\n");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_8);
x_11 = l_Lean_Elab_addAsAxiom(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_13);
x_14 = l_Lean_Elab_Structural_preprocess(x_4, x_13, x_8, x_9, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_41 = lean_st_ref_get(x_9, x_16);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 3);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get_uint8(x_43, sizeof(void*)*1);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = 0;
x_17 = x_46;
x_18 = x_45;
goto block_40;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
lean_inc(x_2);
x_48 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__8(x_2, x_5, x_6, x_7, x_8, x_9, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unbox(x_49);
lean_dec(x_49);
x_17 = x_51;
x_18 = x_50;
goto block_40;
}
block_40:
{
if (x_17 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5(x_13, x_3, x_15, x_1, x_2, x_19, x_5, x_6, x_7, x_8, x_9, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_inc(x_13);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_13);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_inc(x_3);
x_26 = lean_array_to_list(lean_box(0), x_3);
x_27 = lean_box(0);
x_28 = l_List_mapTRAux___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_26, x_27);
x_29 = l_Lean_MessageData_ofList(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
x_31 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_inc(x_15);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_15);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_22);
lean_inc(x_2);
x_36 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__7(x_2, x_35, x_5, x_6, x_7, x_8, x_9, x_18);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5(x_13, x_3, x_15, x_1, x_2, x_37, x_5, x_6, x_7, x_8, x_9, x_38);
return x_39;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_14);
if (x_52 == 0)
{
return x_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_14, 0);
x_54 = lean_ctor_get(x_14, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_14);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_11);
if (x_56 == 0)
{
return x_11;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_11, 0);
x_58 = lean_ctor_get(x_11, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_11);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 5);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6), 10, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = lean_st_ref_get(x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1(x_15, x_4, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_17);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1(x_15, x_4, x_5, x_6, x_7, x_8, x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set_tag(x_26, 1);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Elab");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("definition");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2;
x_2 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structural");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4;
x_2 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" := ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_8 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6;
x_28 = lean_st_ref_get(x_6, x_7);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get_uint8(x_30, sizeof(void*)*1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = 0;
x_9 = x_33;
x_10 = x_32;
goto block_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__8(x_8, x_2, x_3, x_4, x_5, x_6, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_unbox(x_36);
lean_dec(x_36);
x_9 = x_38;
x_10 = x_37;
goto block_27;
}
block_27:
{
if (x_9 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7(x_1, x_8, x_11, x_2, x_3, x_4, x_5, x_6, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 5);
lean_inc(x_14);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_14);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
x_23 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_IndPred_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__7(x_8, x_22, x_2, x_3, x_4, x_5, x_6, x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7(x_1, x_8, x_24, x_2, x_3, x_4, x_5, x_6, x_25);
lean_dec(x_24);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_7);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = lean_apply_5(x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structural recursion failed, produced type incorrect term");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_indentD(x_1);
x_3 = l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2;
x_4 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4;
x_6 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structural recursion does not handle mutually recursive functions");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Structural_structuralRecursion___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Structural_structuralRecursion___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_structuralRecursion___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = l_Lean_Elab_Structural_structuralRecursion___closed__2;
x_13 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = l_Lean_Elab_instInhabitedPreDefinition;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_get(x_14, x_1, x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion), 7, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = l_Lean_Elab_Structural_structuralRecursion___closed__3;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Elab_Structural_run___rarg(x_17, x_18, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_array_get_size(x_23);
x_27 = lean_nat_dec_lt(x_15, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_23);
x_28 = x_22;
goto block_50;
}
else
{
uint8_t x_51; 
x_51 = lean_nat_dec_le(x_26, x_26);
if (x_51 == 0)
{
lean_dec(x_26);
lean_dec(x_23);
x_28 = x_22;
goto block_50;
}
else
{
size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; 
x_52 = 0;
x_53 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_54 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_55 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(x_23, x_52, x_53, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_22);
lean_dec(x_23);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_28 = x_56;
goto block_50;
}
else
{
uint8_t x_57; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_55, 0);
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_55);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
block_50:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc(x_3);
lean_inc(x_2);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec), 8, 3);
lean_closure_set(x_29, 0, x_25);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_3);
x_30 = l_Lean_Elab_Structural_structuralRecursion___closed__4;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Meta_mapErrorImp___rarg(x_29, x_30, x_4, x_5, x_6, x_7, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_33 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_24);
lean_inc(x_16);
x_35 = l_Lean_Elab_Structural_addSmartUnfoldingDef(x_16, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Lean_Elab_Structural_registerEqnsInfo(x_16, x_24, x_6, x_7, x_36);
lean_dec(x_7);
lean_dec(x_6);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_33);
if (x_42 == 0)
{
return x_33;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_33, 0);
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_33);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_31);
if (x_46 == 0)
{
return x_31;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_31, 0);
x_48 = lean_ctor_get(x_31, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_31);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_19);
if (x_61 == 0)
{
return x_19;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_19, 0);
x_63 = lean_ctor_get(x_19, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_19);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural_Main___hyg_1045_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Preprocess(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndPred(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Main(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Preprocess(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_BRecOn(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_IndPred(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___spec__1___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_getFixedPrefix___lambda__2___closed__2);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__2);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__3);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__2___closed__4);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__5___closed__2);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__2);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__3);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___lambda__6___closed__4);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__1);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__2);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__3);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__4);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__5);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__6);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__7);
l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8 = _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimRecursion___closed__8);
l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1 = _init_l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__1);
l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2 = _init_l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___lambda__1___closed__2);
l_Lean_Elab_Structural_structuralRecursion___closed__1 = _init_l_Lean_Elab_Structural_structuralRecursion___closed__1();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___closed__1);
l_Lean_Elab_Structural_structuralRecursion___closed__2 = _init_l_Lean_Elab_Structural_structuralRecursion___closed__2();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___closed__2);
l_Lean_Elab_Structural_structuralRecursion___closed__3 = _init_l_Lean_Elab_Structural_structuralRecursion___closed__3();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___closed__3);
l_Lean_Elab_Structural_structuralRecursion___closed__4 = _init_l_Lean_Elab_Structural_structuralRecursion___closed__4();
lean_mark_persistent(l_Lean_Elab_Structural_structuralRecursion___closed__4);
res = l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural_Main___hyg_1045_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
