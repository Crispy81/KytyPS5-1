#include "common/abi.h"
#include "common/assert.h"
#include "libs/libs.h"
#include "loader/symbolDatabase.h"

namespace Libs {

LIB_VERSION("NpCppWebApi", 1, "NpCppWebApi", 1, 1);

namespace NpCppWebApi {

// sce::Np::CppWebApi::Common::InitParams C++ ctors/dtors. These thin C++
// wrappers own no resources, so the complete-object ctor simply has to hand back
// the already-allocated `this` pointer (otherwise callers null-deref it).
static void* KYTY_SYSV_ABI InitParamsC1(void* self, const void* params) {
	(void)params;
	return self;
}

static void* KYTY_SYSV_ABI InitParamsD1(void* self) {
	return self;
}

static void* KYTY_SYSV_ABI LibContextC1(void* self) {
	return self;
}

// sce::Np::CppWebApi::Common::initialize(const InitParams&, LibContext&) —
// nothing to do: report success so game-side init proceeds.
static int KYTY_SYSV_ABI initialize(const void* params, void* context) {
	(void)params;
	(void)context;
	return 0;
}

} // namespace NpCppWebApi

LIB_DEFINE(InitNpCppWebApi_1) {
	LIB_FUNC("Y295ygEccqk", NpCppWebApi::LibContextC1);
	LIB_FUNC("8x++mBOUeso", NpCppWebApi::InitParamsC1);
	LIB_FUNC("UYPxv8MIzGo", NpCppWebApi::initialize);
	LIB_FUNC("52AlYvq+dmk", NpCppWebApi::InitParamsD1);
}

} // namespace Libs
