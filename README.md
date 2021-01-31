# sm64ex_alo
Fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex/tree/nightly) with additional features. 

## Changes
 * Restored N64 build.
 * Additional backends merged from other forks (3DS, Wii U, Switch) (more incoming)

## Hackporting

This repo has been forked from sm64ex_alo to be optimized for porting romhacks from binary to every possible target.

Each branch of this repository should be a hack that has finished being ported or is currently being ported.

### Porting Tools

RM2C is the tool I developed to be able to port romhacks: [RM2C](https://gitlab.com/scuttlebugraiser/rom-manger-2-c)

### Changes to Master Branch

 * Skinned Mario Model
 * Custom version of Puppycam
 * Extended Bounds
 * Various Bugfixes

## Building

### Recommended BUILD cmds

 1. WINDOWS_BUILD
	* make clean && make RM2CPC
 2. N64 BUILD
	* make -j4 RM2C=1


 * To build for sm64ex platforms, [click here](https://github.com/sm64pc/sm64ex/blob/nightly/README.md).
 * To build for N64, [click here](https://github.com/n64decomp/sm64/blob/master/README.md). (TARGET_N64=1)
 * To build for Wii U, [click here](https://github.com/aboood40091/sm64-port/blob/master/README.md). (TARGET_WII_U=1)
 * To build for N3DS, [click here](https://github.com/sm64-port/sm64_3ds/blob/master/README.md). (TARGET_N3DS=1)
 * To build for Switch, [click here](https://github.com/fgsfdsfgs/sm64ex/blob/switch/README.md). (TARGET_SWITCH=1)
