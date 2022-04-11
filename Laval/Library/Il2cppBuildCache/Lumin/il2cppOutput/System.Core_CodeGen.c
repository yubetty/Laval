#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (void);
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000015 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000016 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000018 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000019 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001D System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001F System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000021 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000022 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000031 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000040 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000041 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000042 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000043 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000044 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000045 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000004A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000050 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000051 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000055 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000058 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000061 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000062 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[99] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[99] = 
{
	4459,
	4692,
	4692,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4523,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 23 } },
	{ 0x02000011, { 170, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000023, { 74, 2 } },
	{ 0x06000028, { 83, 2 } },
	{ 0x0600002D, { 95, 2 } },
	{ 0x06000033, { 108, 3 } },
	{ 0x06000038, { 120, 3 } },
	{ 0x0600003D, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[172] = 
{
	{ (Il2CppRGCTXDataType)2, 2217 },
	{ (Il2CppRGCTXDataType)3, 8314 },
	{ (Il2CppRGCTXDataType)2, 3583 },
	{ (Il2CppRGCTXDataType)2, 3067 },
	{ (Il2CppRGCTXDataType)3, 14859 },
	{ (Il2CppRGCTXDataType)2, 2328 },
	{ (Il2CppRGCTXDataType)2, 3074 },
	{ (Il2CppRGCTXDataType)3, 14894 },
	{ (Il2CppRGCTXDataType)2, 3069 },
	{ (Il2CppRGCTXDataType)3, 14871 },
	{ (Il2CppRGCTXDataType)2, 2218 },
	{ (Il2CppRGCTXDataType)3, 8315 },
	{ (Il2CppRGCTXDataType)2, 3606 },
	{ (Il2CppRGCTXDataType)2, 3079 },
	{ (Il2CppRGCTXDataType)3, 14909 },
	{ (Il2CppRGCTXDataType)2, 2353 },
	{ (Il2CppRGCTXDataType)2, 3087 },
	{ (Il2CppRGCTXDataType)3, 15073 },
	{ (Il2CppRGCTXDataType)2, 3083 },
	{ (Il2CppRGCTXDataType)3, 14984 },
	{ (Il2CppRGCTXDataType)2, 783 },
	{ (Il2CppRGCTXDataType)3, 38 },
	{ (Il2CppRGCTXDataType)3, 39 },
	{ (Il2CppRGCTXDataType)2, 1368 },
	{ (Il2CppRGCTXDataType)3, 5708 },
	{ (Il2CppRGCTXDataType)2, 785 },
	{ (Il2CppRGCTXDataType)3, 50 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)2, 1378 },
	{ (Il2CppRGCTXDataType)3, 5713 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)3, 967 },
	{ (Il2CppRGCTXDataType)3, 968 },
	{ (Il2CppRGCTXDataType)2, 1980 },
	{ (Il2CppRGCTXDataType)2, 1524 },
	{ (Il2CppRGCTXDataType)2, 1628 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)2, 1981 },
	{ (Il2CppRGCTXDataType)2, 1525 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)3, 5709 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)3, 5707 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)3, 5706 },
	{ (Il2CppRGCTXDataType)2, 1523 },
	{ (Il2CppRGCTXDataType)2, 1627 },
	{ (Il2CppRGCTXDataType)2, 1522 },
	{ (Il2CppRGCTXDataType)3, 17765 },
	{ (Il2CppRGCTXDataType)3, 5029 },
	{ (Il2CppRGCTXDataType)2, 1250 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)2, 1730 },
	{ (Il2CppRGCTXDataType)2, 1823 },
	{ (Il2CppRGCTXDataType)3, 8316 },
	{ (Il2CppRGCTXDataType)3, 8318 },
	{ (Il2CppRGCTXDataType)2, 576 },
	{ (Il2CppRGCTXDataType)3, 8317 },
	{ (Il2CppRGCTXDataType)3, 8326 },
	{ (Il2CppRGCTXDataType)2, 2221 },
	{ (Il2CppRGCTXDataType)2, 3070 },
	{ (Il2CppRGCTXDataType)3, 14872 },
	{ (Il2CppRGCTXDataType)3, 8327 },
	{ (Il2CppRGCTXDataType)2, 1668 },
	{ (Il2CppRGCTXDataType)2, 1760 },
	{ (Il2CppRGCTXDataType)3, 5719 },
	{ (Il2CppRGCTXDataType)3, 17730 },
	{ (Il2CppRGCTXDataType)2, 3084 },
	{ (Il2CppRGCTXDataType)3, 14985 },
	{ (Il2CppRGCTXDataType)3, 8319 },
	{ (Il2CppRGCTXDataType)2, 2220 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)3, 14860 },
	{ (Il2CppRGCTXDataType)3, 5718 },
	{ (Il2CppRGCTXDataType)3, 8320 },
	{ (Il2CppRGCTXDataType)3, 17729 },
	{ (Il2CppRGCTXDataType)2, 3080 },
	{ (Il2CppRGCTXDataType)3, 14910 },
	{ (Il2CppRGCTXDataType)3, 8333 },
	{ (Il2CppRGCTXDataType)2, 2222 },
	{ (Il2CppRGCTXDataType)2, 3075 },
	{ (Il2CppRGCTXDataType)3, 14895 },
	{ (Il2CppRGCTXDataType)3, 8998 },
	{ (Il2CppRGCTXDataType)3, 3788 },
	{ (Il2CppRGCTXDataType)3, 5720 },
	{ (Il2CppRGCTXDataType)3, 3787 },
	{ (Il2CppRGCTXDataType)3, 8334 },
	{ (Il2CppRGCTXDataType)3, 17731 },
	{ (Il2CppRGCTXDataType)2, 3088 },
	{ (Il2CppRGCTXDataType)3, 15074 },
	{ (Il2CppRGCTXDataType)3, 8347 },
	{ (Il2CppRGCTXDataType)2, 2224 },
	{ (Il2CppRGCTXDataType)2, 3086 },
	{ (Il2CppRGCTXDataType)3, 14987 },
	{ (Il2CppRGCTXDataType)3, 8348 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)2, 1763 },
	{ (Il2CppRGCTXDataType)3, 5724 },
	{ (Il2CppRGCTXDataType)3, 5723 },
	{ (Il2CppRGCTXDataType)2, 3072 },
	{ (Il2CppRGCTXDataType)3, 14874 },
	{ (Il2CppRGCTXDataType)3, 17736 },
	{ (Il2CppRGCTXDataType)2, 3085 },
	{ (Il2CppRGCTXDataType)3, 14986 },
	{ (Il2CppRGCTXDataType)3, 8340 },
	{ (Il2CppRGCTXDataType)2, 2223 },
	{ (Il2CppRGCTXDataType)2, 3082 },
	{ (Il2CppRGCTXDataType)3, 14912 },
	{ (Il2CppRGCTXDataType)3, 5722 },
	{ (Il2CppRGCTXDataType)3, 5721 },
	{ (Il2CppRGCTXDataType)3, 8341 },
	{ (Il2CppRGCTXDataType)2, 3071 },
	{ (Il2CppRGCTXDataType)3, 14873 },
	{ (Il2CppRGCTXDataType)3, 17735 },
	{ (Il2CppRGCTXDataType)2, 3081 },
	{ (Il2CppRGCTXDataType)3, 14911 },
	{ (Il2CppRGCTXDataType)3, 8354 },
	{ (Il2CppRGCTXDataType)2, 2225 },
	{ (Il2CppRGCTXDataType)2, 3090 },
	{ (Il2CppRGCTXDataType)3, 15076 },
	{ (Il2CppRGCTXDataType)3, 8999 },
	{ (Il2CppRGCTXDataType)3, 3790 },
	{ (Il2CppRGCTXDataType)3, 5726 },
	{ (Il2CppRGCTXDataType)3, 5725 },
	{ (Il2CppRGCTXDataType)3, 3789 },
	{ (Il2CppRGCTXDataType)3, 8355 },
	{ (Il2CppRGCTXDataType)2, 3073 },
	{ (Il2CppRGCTXDataType)3, 14875 },
	{ (Il2CppRGCTXDataType)3, 17737 },
	{ (Il2CppRGCTXDataType)2, 3089 },
	{ (Il2CppRGCTXDataType)3, 15075 },
	{ (Il2CppRGCTXDataType)3, 5716 },
	{ (Il2CppRGCTXDataType)3, 5717 },
	{ (Il2CppRGCTXDataType)3, 5730 },
	{ (Il2CppRGCTXDataType)2, 3614 },
	{ (Il2CppRGCTXDataType)2, 1179 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)2, 3609 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)2, 1738 },
	{ (Il2CppRGCTXDataType)3, 5047 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)3, 6153 },
	{ (Il2CppRGCTXDataType)3, 6154 },
	{ (Il2CppRGCTXDataType)3, 6159 },
	{ (Il2CppRGCTXDataType)2, 1831 },
	{ (Il2CppRGCTXDataType)3, 6156 },
	{ (Il2CppRGCTXDataType)3, 18404 },
	{ (Il2CppRGCTXDataType)2, 1213 },
	{ (Il2CppRGCTXDataType)3, 3776 },
	{ (Il2CppRGCTXDataType)1, 1597 },
	{ (Il2CppRGCTXDataType)2, 3620 },
	{ (Il2CppRGCTXDataType)3, 6155 },
	{ (Il2CppRGCTXDataType)1, 3620 },
	{ (Il2CppRGCTXDataType)1, 1831 },
	{ (Il2CppRGCTXDataType)2, 3675 },
	{ (Il2CppRGCTXDataType)2, 3620 },
	{ (Il2CppRGCTXDataType)3, 13397 },
	{ (Il2CppRGCTXDataType)3, 6160 },
	{ (Il2CppRGCTXDataType)3, 6161 },
	{ (Il2CppRGCTXDataType)3, 6158 },
	{ (Il2CppRGCTXDataType)3, 6157 },
	{ (Il2CppRGCTXDataType)2, 444 },
	{ (Il2CppRGCTXDataType)3, 3791 },
	{ (Il2CppRGCTXDataType)2, 585 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	99,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	172,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
