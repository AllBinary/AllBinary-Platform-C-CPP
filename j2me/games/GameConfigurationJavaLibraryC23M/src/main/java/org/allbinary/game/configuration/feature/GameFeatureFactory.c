// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"


static GameFeatureFactory* GameFeatureFactory_instance;



void GameFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureFactory_instance = GameFeatureFactory_new();
}

void GameFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureFactory", nullptr);
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
        return (GameFeatureFactory_staticInit(), GameFeatureFactory_instance);
}


void GameFeatureFactory_init(GameFeatureFactory* this) {
    GameFeatureFactory_register();
    GameFeatureFactory_initFields(this);
}

GameFeatureFactory* GameFeatureFactory_new(void) {
    GameFeatureFactory* this = java_object_alloc(sizeof(GameFeatureFactory), "GameFeatureFactory");
    GameFeatureFactory_init(this);
    return this;
}

