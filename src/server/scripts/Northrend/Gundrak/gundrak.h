/*
* This file is part of Project SkyFire https://www.projectskyfire.org. 
* See LICENSE.md file for Copyright information
*/

#ifndef DEF_GUNDRAK_H
#define DEF_GUNDRAK_H

enum Data
{
    DATA_SLAD_RAN_EVENT,
    DATA_MOORABI_EVENT,
    DATA_DRAKKARI_COLOSSUS_EVENT,
    DATA_GAL_DARAH_EVENT,
    DATA_ECK_THE_FEROCIOUS_EVENT,
    DATA_ALIVE_RUIN_DWELLERS
};

enum Data64
{
    DATA_SLAD_RAN_ALTAR,
    DATA_MOORABI_ALTAR,
    DATA_DRAKKARI_COLOSSUS_ALTAR,
    DATA_SLAD_RAN_STATUE,
    DATA_MOORABI_STATUE,
    DATA_DRAKKARI_COLOSSUS_STATUE,
    DATA_DRAKKARI_COLOSSUS,
    DATA_RUIN_DWELLER_DIED,
    DATA_STATUE_ACTIVATE,
};

enum mainCreatures
{
    CREATURE_RUIN_DWELLER               = 29920,
    CREATURE_SLAD_RAN                   = 29304,
    CREATURE_MOORABI                    = 29305,
    CREATURE_GALDARAH                   = 29306,
    CREATURE_DRAKKARICOLOSSUS           = 29307,
    CREATURE_ECK                        = 29932
};

enum Gameobjects
{
    GO_SLADRAN_ALTAR                    = 192518,
    GO_MOORABI_ALTAR                    = 192519,
    GO_DRAKKARI_COLOSSUS_ALTAR          = 192520,
    GO_SLADRAN_STATUE                   = 192564,
    GO_MOORABI_STATUE                   = 192565,
    GO_GALDARAH_STATUE                  = 192566,
    GO_DRAKKARI_COLOSSUS_STATUE         = 192567,
    GO_ECK_THE_FEROCIOUS_DOOR           = 192632,
    GO_ECK_THE_FEROCIOUS_DOOR_BEHIND    = 192569,
    GO_GALDARAH_DOOR1                   = 193208,
    GO_GALDARAH_DOOR2                   = 193209,
    GO_GALDARAH_DOOR3                   = 192568,
    GO_BRIDGE                           = 193188,
    GO_COLLISION                        = 192633
};

#endif
