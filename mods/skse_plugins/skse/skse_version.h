#ifndef __SKSE_VERSION_H__
#define __SKSE_VERSION_H__

// these have to be macros so they can be used in the .rc
#define SKSE_VERSION_INTEGER		1
#define SKSE_VERSION_INTEGER_MINOR	4
#define SKSE_VERSION_INTEGER_BETA	7
#define SKSE_VERSION_VERSTRING		"0, 1, 4, 7"
#define SKSE_VERSION_PADDEDSTRING	"0001"
#define SKSE_VERSION_RELEASEIDX		8

#define MAKE_SKYRIM_VERSION_EX(major, minor, build, sub)	(((major & 0xFF) << 24) | ((minor & 0xFF) << 16) | ((build & 0xFFF) << 4) | (sub & 0xF))
#define MAKE_SKYRIM_VERSION(major, minor, build)			MAKE_SKYRIM_VERSION_EX(major, minor, build, 0)

// assume the major version number is 1.x
#define RUNTIME_VERSION_1_1_21_0	MAKE_SKYRIM_VERSION(1, 21, 0)		// 0x01150000
#define RUNTIME_VERSION_1_2_12_0	MAKE_SKYRIM_VERSION(2, 12, 0)		// 0x020C0000
#define RUNTIME_VERSION_1_3_7_0		MAKE_SKYRIM_VERSION(3, 7, 0)		// 0x03070000
#define RUNTIME_VERSION_1_3_10_0	MAKE_SKYRIM_VERSION(3, 10, 0)		// 0x030A0000
#define RUNTIME_VERSION_1_4_15_0	MAKE_SKYRIM_VERSION(4, 15, 0)		// 0x040F0000
#define RUNTIME_VERSION_1_4_20_0	MAKE_SKYRIM_VERSION(4, 20, 0)		// 0x04140000

#define PACKED_SKSE_VERSION		MAKE_SKYRIM_VERSION(SKSE_VERSION_INTEGER, SKSE_VERSION_INTEGER_MINOR, SKSE_VERSION_INTEGER_BETA)

#endif /* __SKSE_VERSION_H__ */
