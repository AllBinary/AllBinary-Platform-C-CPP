#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameConfiguration GameConfiguration;
typedef struct Gauge Gauge;
#include "javax/microedition/lcdui/Gauge.h"

typedef struct GameConfigurationGauge GameConfigurationGauge;
struct GameConfigurationGauge {
    Gauge base;
};


GameConfigurationGauge* GameConfigurationGauge_new(GameConfiguration* gameConfiguration);

void GameConfigurationGauge_init(GameConfigurationGauge* this, GameConfiguration* gameConfiguration);
#define GameConfigurationGauge_new1 GameConfigurationGauge_new
#define GameConfigurationGauge_init1 GameConfigurationGauge_init
#ifndef GameConfigurationGauge_setValue
#define GameConfigurationGauge_setValue Gauge_setValue
#endif
#ifndef GameConfigurationGauge_getValue
#define GameConfigurationGauge_getValue Gauge_getValue
#endif
#ifndef GameConfigurationGauge_setMaxValue
#define GameConfigurationGauge_setMaxValue Gauge_setMaxValue
#endif
#ifndef GameConfigurationGauge_getMaxValue
#define GameConfigurationGauge_getMaxValue Gauge_getMaxValue
#endif
#ifndef GameConfigurationGauge_isInteractive
#define GameConfigurationGauge_isInteractive Gauge_isInteractive
#endif
#ifndef GameConfigurationGauge_hasIndefiniteRange
#define GameConfigurationGauge_hasIndefiniteRange Gauge_hasIndefiniteRange
#endif
#ifndef GameConfigurationGauge_updateIndefiniteFrame
#define GameConfigurationGauge_updateIndefiniteFrame Gauge_updateIndefiniteFrame
#endif
#ifndef GameConfigurationGauge_getHeight
#define GameConfigurationGauge_getHeight Gauge_getHeight
#endif
#ifndef GameConfigurationGauge_isFocusable
#define GameConfigurationGauge_isFocusable Gauge_isFocusable
#endif
#ifndef GameConfigurationGauge_keyPressed
#define GameConfigurationGauge_keyPressed Gauge_keyPressed
#endif
#ifndef GameConfigurationGauge_paintItem
#define GameConfigurationGauge_paintItem Gauge_paintItem
#endif
#ifndef GameConfigurationGauge_traverseItem
#define GameConfigurationGauge_traverseItem Gauge_traverseItem
#endif
#ifndef GameConfigurationGauge_setPreferredSize
#define GameConfigurationGauge_setPreferredSize Gauge_setPreferredSize
#endif
#ifndef GameConfigurationGauge_setLayout
#define GameConfigurationGauge_setLayout Gauge_setLayout
#endif
#ifndef GameConfigurationGauge_setLabel
#define GameConfigurationGauge_setLabel Gauge_setLabel
#endif
#ifndef GameConfigurationGauge_addCommand
#define GameConfigurationGauge_addCommand Gauge_addCommand
#endif
#ifndef GameConfigurationGauge_setDefaultCommand
#define GameConfigurationGauge_setDefaultCommand Gauge_setDefaultCommand
#endif
#ifndef GameConfigurationGauge_setItemCommandListener
#define GameConfigurationGauge_setItemCommandListener Gauge_setItemCommandListener
#endif
#ifndef GameConfigurationGauge_addCommand
#define GameConfigurationGauge_addCommand Item_addCommand
#endif
#ifndef GameConfigurationGauge_getLabel
#define GameConfigurationGauge_getLabel Item_getLabel
#endif
#ifndef GameConfigurationGauge_getLayout
#define GameConfigurationGauge_getLayout Item_getLayout
#endif
#ifndef GameConfigurationGauge_getMinimumHeight
#define GameConfigurationGauge_getMinimumHeight Item_getMinimumHeight
#endif
#ifndef GameConfigurationGauge_getMinimumWidth
#define GameConfigurationGauge_getMinimumWidth Item_getMinimumWidth
#endif
#ifndef GameConfigurationGauge_getPreferredHeight
#define GameConfigurationGauge_getPreferredHeight Item_getPreferredHeight
#endif
#ifndef GameConfigurationGauge_getPreferredWidth
#define GameConfigurationGauge_getPreferredWidth Item_getPreferredWidth
#endif
#ifndef GameConfigurationGauge_notifyStateChanged
#define GameConfigurationGauge_notifyStateChanged Item_notifyStateChanged
#endif
#ifndef GameConfigurationGauge_removeCommand
#define GameConfigurationGauge_removeCommand Item_removeCommand
#endif
#ifndef GameConfigurationGauge_setDefaultCommand
#define GameConfigurationGauge_setDefaultCommand Item_setDefaultCommand
#endif
#ifndef GameConfigurationGauge_setItemCommandListener
#define GameConfigurationGauge_setItemCommandListener Item_setItemCommandListener
#endif
#ifndef GameConfigurationGauge_setLabel
#define GameConfigurationGauge_setLabel Item_setLabel
#endif
#ifndef GameConfigurationGauge_setLayout
#define GameConfigurationGauge_setLayout Item_setLayout
#endif
#ifndef GameConfigurationGauge_setPreferredSize
#define GameConfigurationGauge_setPreferredSize Item_setPreferredSize
#endif
#ifndef GameConfigurationGauge_repaintOwner
#define GameConfigurationGauge_repaintOwner Item_repaintOwner
#endif
#ifndef GameConfigurationGauge_getHeight
#define GameConfigurationGauge_getHeight Item_getHeight
#endif
#ifndef GameConfigurationGauge_isFocusable
#define GameConfigurationGauge_isFocusable Item_isFocusable
#endif
#ifndef GameConfigurationGauge_keyPressed
#define GameConfigurationGauge_keyPressed Item_keyPressed
#endif
#ifndef GameConfigurationGauge_paintItem
#define GameConfigurationGauge_paintItem Item_paintItem
#endif
#ifndef GameConfigurationGauge_paintContent
#define GameConfigurationGauge_paintContent Item_paintContent
#endif
#ifndef GameConfigurationGauge_repaint
#define GameConfigurationGauge_repaint Item_repaint
#endif
#ifndef GameConfigurationGauge_hasFocus
#define GameConfigurationGauge_hasFocus Item_hasFocus
#endif
#ifndef GameConfigurationGauge_setFocus
#define GameConfigurationGauge_setFocus Item_setFocus
#endif
#ifndef GameConfigurationGauge_getOwner
#define GameConfigurationGauge_getOwner Item_getOwner
#endif
#ifndef GameConfigurationGauge_setOwner
#define GameConfigurationGauge_setOwner Item_setOwner
#endif
#ifndef GameConfigurationGauge_select
#define GameConfigurationGauge_select Item_select
#endif
#ifndef GameConfigurationGauge_traverseItem
#define GameConfigurationGauge_traverseItem Item_traverseItem
#endif
#ifndef GameConfigurationGauge_getMaximumHeight
#define GameConfigurationGauge_getMaximumHeight Item_getMaximumHeight
#endif
#ifndef GameConfigurationGauge_getMaximumWidth
#define GameConfigurationGauge_getMaximumWidth Item_getMaximumWidth
#endif
#ifndef GameConfigurationGauge_getItemCommandListener
#define GameConfigurationGauge_getItemCommandListener Item_getItemCommandListener
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationGauge_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationGauge_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_H
