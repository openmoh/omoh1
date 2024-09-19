/*
===========================================================================
Copyright (C) 2015 the OpenMoHAA team

This file is part of OpenMoHAA source code.

OpenMoHAA source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

OpenMoHAA source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OpenMoHAA source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

// const_str.h: Strings constant, improve performance in string comparison

#pragma once

typedef unsigned int const_str;

#ifdef GAME_DLL

enum {
    STRING_NULL  = 0,
    STRING_EMPTY = 1,
    STRING_TOUCH,
    STRING_BLOCK,
    STRING_TRIGGER,
    STRING_USE,
    STRING_DAMAGE,
    STRING_LOCATION,
    STRING_SAY,
    STRING_FAIL,
    STRING_BUMP,
    STRING_DEFAULT,
    STRING_ALL,
    STRING_MOVE_ACTION,
    STRING_RESUME,
    STRING_OPEN,
    STRING_CLOSE,
    STRING_PICKUP,
    STRING_REACH,
    STRING_START,
    STRING_TELEPORT,
    STRING_MOVE,
    STRING_MOVE_END,
    STRING_MOVETO,
    STRING_WALKTO,
    STRING_RUNTO,
    STRING_CROUCHTO,
    STRING_CRAWLTO,
    STRING_STOP,
    STRING_RESET,
    STRING_PRESPAWN,
    STRING_SPAWN,
    STRING_PLAYERSPAWN,
    STRING_SKIP,
    STRING_ROUNDSTART,
    STRING_VISIBLE,
    STRING_NOT_VISIBLE,
    STRING_DONE,
    STRING_ANIMDONE,
    STRING_UPPERANIMDONE,
    STRING_SAYDONE,
    STRING_FLAGGEDANIMDONE,
    STRING_IDLE,
    STRING_WALK,
    STRING_SHUFFLE,
    STRING_ANIM_CROUCH_SCR,
    STRING_FORGOT,
    STRING_JOG_HUNCH,
    STRING_JOG_HUNCH_RIFLE,
    STRING_KILLED,
    STRING_ALARM,
    STRING_SCRIPTCLASS,
    STRING_FACT_SCRIPT_FACTORY,
    STRING_DEATH,
    STRING_DEATH_FALL_TO_KNEES,
    STRING_ENEMY,
    STRING_DEAD,
    STRING_MOOD,
    STRING_PATROL,
    STRING_RUNNER,
    STRING_FOLLOW,
    STRING_ACTION,
    STRING_MOVE_BEGIN,
    STRING_ACTION_BEGIN,
    STRING_ACTION_END,
    STRING_SUCCESS,
    STRING_ENTRY,
    STRING_EXIT,
    STRING_PATH,
    STRING_NODE,
    STRING_ASK_COUNT,
    STRING_ATTACKER,
    STRING_USECOVER,
    STRING_WAITCOVER,
    STRING_VOID,
    STRING_END,
    STRING_ATTACK,
    STRING_NEAR,
    STRING_PAPERS,
    STRING_CHECK_PAPERS,
    STRING_TIMEOUT,
    STRING_HOSTILE,
    STRING_LEADER,
    STRING_GAMEMAP,
    STRING_BORED,
    STRING_NERVOUS,
    STRING_CURIOUS,
    STRING_ALERT,
    STRING_GREET,
    STRING_DEFEND,
    STRING_ANIM,
    STRING_ANIM_SCRIPTED,
    STRING_ANIM_CURIOUS,
    STRING_ANIMLOOP,
    STRING_UNDEFINED,
    STRING_NOTSET,
    STRING_INCREMENT,
    STRING_DECREMENT,
    STRING_TOGGLE,
    STRING_NORMAL,
    STRING_SUSPENSE,
    STRING_MYSTERY,
    STRING_SURPRISE,
    STRING_ANIM_CROUCH_RUN_SCR,
    STRING_ANIM_AIM_SCR,
    STRING_ANIM_SHOOT_SCR,
    STRING_ANIM_MG42_SHOOT_SCR,
    STRING_ANIM_MG42_IDLE_SCR,
    STRING_ANIM_MG42_RELOAD_SCR,
    STRING_DRIVE,
    STRING_GLOBAL_WEAPON_SCR,
    STRING_GLOBAL_MOVETO_SCR,
    STRING_GLOBAL_ANIM_SCR,
    STRING_GLOBAL_ANIM_SCRIPTED_SCR,
    STRING_GLOBAL_ANIM_NOCLIP_SCR,
    STRING_GLOBAL_ANIM_ATTACHED_SCR,
    STRING_GLOBAL_WALKTO_SCR,
    STRING_GLOBAL_RUNTO_SCR,
    STRING_AIMAT,
    STRING_GLOBAL_DISABLE_AI_SCR,
    STRING_GLOBAL_CROUCHTO_SCR,
    STRING_GLOBAL_CRAWLTO_SCR,
    STRING_GLOBAL_KILLED_SCR,
    STRING_GLOBAL_PAIN_SCR,
    STRING_PAIN,
    STRING_TRACK,
    STRING_HASENEMY,
    STRING_ANIM_COWER_SCR,
    STRING_ANIM_STAND_SCR,
    STRING_ANIM_IDLE_SCR,
    STRING_ANIM_SURPRISE_SCR,
    STRING_ANIM_STANDSHOCK_SCR,
    STRING_ANIM_STANDIDENTIFY_SCR,
    STRING_ANIM_STANDFLINCH_SCR,
    STRING_ANIM_DOG_IDLE_SCR,
    STRING_ANIM_DOG_ATTACK_SCR,
    STRING_ANIM_DOG_CURIOUS_SCR,
    STRING_ANIM_DOG_CHASE_SCR,
    STRING_CANNON,
    STRING_GRENADE,
    STRING_BADPLACE,
    STRING_HEAVY,
    STRING_ITEM,
    STRING_ITEMS,
    STRING_ITEM1,
    STRING_ITEM2,
    STRING_ITEM3,
    STRING_ITEM4,
    STRING_STAND,
    STRING_MG,
    STRING_PISTOL,
    STRING_RIFLE,
    STRING_SMG,
    STRING_TURNTO,
    STRING_STANDING,
    STRING_CROUCHING,
    STRING_PRONE,
    STRING_OFFGROUND,
    STRING_WALKING,
    STRING_RUNNING,
    STRING_FALLING,
    STRING_ANIM_NOTHING,
    STRING_ANIM_DIRECT,
    STRING_ANIM_PATH,
    STRING_ANIM_WAYPOINT,
    STRING_ANIM_DIRECT_NOGRAVITY,
    STRING_EMOTION_NONE,
    STRING_EMOTION_NEUTRAL,
    STRING_EMOTION_WORRY,
    STRING_EMOTION_PANIC,
    STRING_EMOTION_FEAR,
    STRING_EMOTION_DISGUST,
    STRING_EMOTION_ANGER,
    STRING_EMOTION_AIMING,
    STRING_EMOTION_DETERMINED,
    STRING_EMOTION_DEAD,
    STRING_EMOTION_CURIOUS,
    STRING_ANIM_EMOTION_SCR,
    STRING_FORCEANIM,
    STRING_FORCEANIM_SCRIPTED,
    STRING_TURRET,
    STRING_COVER,
    STRING_ANIM_PAIN_SCR,
    STRING_ANIM_KILLED_SCR,
    STRING_ANIM_ATTACK_SCR,
    STRING_ANIM_SNIPER_SCR,
    STRING_ANIM_SUPPRESS_SCR,
    STRING_KNEES,
    STRING_CRAWL,
    STRING_FLOOR,
    STRING_ANIM_PATROL_SCR,
    STRING_ANIM_RUN_SCR,
    STRING_CROUCH,
    STRING_CROUCHWALK,
    STRING_CROUCHRUN,
    STRING_ANIM_CROUCH_WALK_SCR,
    STRING_ANIM_WALK_SCR,
    STRING_ANIM_PRONE_SCR,
    STRING_ANIM_RUNAWAYFIRING_SCR,
    STRING_ANIM_RUN_SHOOT_SCR,
    STRING_ANIM_RUNTO_ALARM_SCR,
    STRING_ANIM_RUNTO_CASUAL_SCR,
    STRING_ANIM_RUNTO_COVER_SCR,
    STRING_ANIM_RUNTO_DANGER_SCR,
    STRING_ANIM_RUNTO_DIVE_SCR,
    STRING_ANIM_RUNTO_FLEE_SCR,
    STRING_ANIM_RUNTO_INOPEN_SCR,
    STRING_ANIM_DISGUISE_SALUTE_SCR,
    STRING_ANIM_DISGUISE_WAIT_SCR,
    STRING_ANIM_DISGUISE_PAPERS_SCR,
    STRING_ANIM_DISGUISE_ENEMY_SCR,
    STRING_ANIM_DISGUISE_HALT_SCR,
    STRING_ANIM_DISGUISE_ACCEPT_SCR,
    STRING_ANIM_DISGUISE_DENY_SCR,
    STRING_ANIM_CORNERLEFT_SCR,
    STRING_ANIM_CORNERRIGHT_SCR,
    STRING_ANIM_OVERATTACK_SCR,
    STRING_ANIM_LOWWALL_SCR,
    STRING_ANIM_HIGHWALL_SCR,
    STRING_ANIM_CONTINUE_LAST_ANIM_SCR,
    STRING_FLAGGED,
    STRING_ANIM_FULLBODY_SCR,
    STRING_DISGUISE_SALUTE,
    STRING_DISGUISE_SENTRY,
    STRING_DISGUISE_OFFICER,
    STRING_DISGUISE_ROVER,
    STRING_DISGUISE_NONE,
    STRING_MACHINEGUNNER,
    STRING_DISGUISE,
    STRING_DOG_IDLE,
    STRING_DOG_ATTACK,
    STRING_DOG_CURIOUS,
    STRING_DOG_GRENADE,
    STRING_ANIM_GRENADERETURN_SCR,
    STRING_ANIM_GRENADEKICK_SCR,
    STRING_ANIM_GRENADETHROW_SCR,
    STRING_ANIM_GRENADETOSS_SCR,
    STRING_ANIM_GRENADEMARTYR_SCR,
    STRING_MOVEDONE,
    STRING_AIM,
    STRING_ONTARGET,
    STRING_UNARMED,
    STRING_BALCONY_IDLE,
    STRING_BALCONY_CURIOUS,
    STRING_BALCONY_ATTACK,
    STRING_BALCONY_DISGUISE,
    STRING_BALCONY_GRENADE,
    STRING_BALCONY_PAIN,
    STRING_BALCONY_KILLED,
    STRING_WEAPONLESS,
    STRING_DEATH_BALCONY_INTRO,
    STRING_DEATH_BALCONY_LOOP,
    STRING_DEATH_BALCONY_OUTTRO,
    STRING_SOUNDDONE,
    STRING_NOCLIP,
    STRING_GERMAN,
    STRING_AMERICAN,
    STRING_SPECTATOR,
    STRING_FREEFORALL,
    STRING_ALLIES,
    STRING_AXIS,
    STRING_DRAW,
    STRING_KILLS,
    STRING_ALLIESWIN,
    STRING_AXISWIN,
    STRING_ANIM_SAY_CURIOUS_SIGHT_SCR,
    STRING_ANIM_SAY_CURIOUS_SOUND_SCR,
    STRING_ANIM_SAY_GRENADE_SIGHTED_SCR,
    STRING_ANIM_SAY_KILL_SCR,
    STRING_ANIM_SAY_MANDOWN_SCR,
    STRING_ANIM_SAY_SIGHTED_SCR,
    STRING_VEHICLEANIMDONE,
    STRING_POSTTHINK,
    STRING_TURNDONE,
    STRING_ANIM_NO_KILLED_SCR,
    STRING_MG42,
    STRING_MP40,
    // Added in 2.0
    STRING_AUTO,
    STRING_BOTH,
    // Added in 2.30
    STRING_RUNANDSHOOT,
    // Added in OPM
    STRING_RESPAWN,
    STRING_VIEWMODELANIM_DONE,

    // The number of strings
    STRING_LENGTH_
};

#else

enum {
    STRING_NULL  = 0,
    STRING_EMPTY = 1
};

#endif
