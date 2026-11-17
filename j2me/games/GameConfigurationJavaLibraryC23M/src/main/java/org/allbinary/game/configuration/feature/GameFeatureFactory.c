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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameFeatureFactory GameFeatureFactory;
struct GameFeatureFactory {
    GameFeature* SOUND;
    GameFeature* MUSIC;
    Feature* SCREEN_SHAKE;
    Feature* POST_IMAGE_LOADING_MODIFICATION;
    GameFeature* HEALTH_BARS;
    GameFeature* DAMAGE_FLOATERS;
    GameFeature* GAME_INPUT_LAYER_PROCESSOR;
    GameFeature* ARTIFICIAL_INTELLEGENCE_PROCESSOR;
    GameFeature* COLLIDABLE_INTERFACE_LAYER_PROCESSOR;
    GameFeature* TICKABLE_LAYER_PROCESSOR;
    GameFeature* CHEATING;
    GameFeature* DROPPED_ITEMS;
    GameFeature* DROPPED_ITEMS_FROM_DEATH;
    GameFeature* TEST_DESTROYED_LAYER_PROCESSOR;
    GameFeature* COLLISIONS_WITH_SOURCE;
    GameFeature* COLLISIONS_FORCED_TWO_DIMENSIONAL;
};

static GameFeatureFactory* GameFeatureFactory_instance;

GameFeatureFactory* GameFeatureFactory_new(void);
GameFeatureFactory* GameFeatureFactory_getInstance(void);

void GameFeatureFactory_init(GameFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameFeatureFactory_staticInit(void) {
    GameFeatureFactory_instance = GameFeatureFactory_new();
}

static void GameFeatureFactory_initFields(GameFeatureFactory* this) {
    this->SOUND = GameFeature_new("Sound");
    this->MUSIC = GameFeature_new("Music");
    this->SCREEN_SHAKE = Feature_new("Screen Shake");
    this->POST_IMAGE_LOADING_MODIFICATION = Feature_new("Post Image Loading Modification (Scaling, Rotation, or Other)");
    this->HEALTH_BARS = GameFeature_new("Health Bars");
    this->DAMAGE_FLOATERS = GameFeature_new("Damage Floaters");
    this->GAME_INPUT_LAYER_PROCESSOR = GameFeature_new("Game Input Layer Processor");
    this->ARTIFICIAL_INTELLEGENCE_PROCESSOR = GameFeature_new("Artificial Intelligence Layer Processor");
    this->COLLIDABLE_INTERFACE_LAYER_PROCESSOR = GameFeature_new("Collidable Interface Layer Processor");
    this->TICKABLE_LAYER_PROCESSOR = GameFeature_new("Tickable Layer Processor");
    this->CHEATING = GameFeature_new("Cheating");
    this->DROPPED_ITEMS = GameFeature_new("Drops");
    this->DROPPED_ITEMS_FROM_DEATH = GameFeature_new("Drops from Dead");
    this->TEST_DESTROYED_LAYER_PROCESSOR = GameFeature_new("Destroyed Layer Processor");
    this->COLLISIONS_WITH_SOURCE = GameFeature_new("Allow Collisions With Source");
    this->COLLISIONS_FORCED_TWO_DIMENSIONAL = GameFeature_new("Collisions Forced Two Dimensional");
}


GameFeatureFactory* GameFeatureFactory_getInstance(void) {
        return GameFeatureFactory_instance;
}


void GameFeatureFactory_init(GameFeatureFactory* this) {
    GameFeatureFactory_initFields(this);
}

GameFeatureFactory* GameFeatureFactory_new(void) {
    GameFeatureFactory* this = calloc(1, sizeof(GameFeatureFactory));
    GameFeatureFactory_init(this);
    return this;
}

