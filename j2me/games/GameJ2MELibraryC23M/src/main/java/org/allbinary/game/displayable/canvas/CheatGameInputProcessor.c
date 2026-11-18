// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/CheatGameInputProcessor.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputFactory.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


SpecialGameInputInterface* CheatGameInputProcessor_inputProcessor;



void CheatGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CheatGameInputProcessor_inputProcessor = (SpecialGameInputFactory_staticInit(), SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT);
}

void CheatGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CheatGameInputProcessor", "PlayerGameInput");
    java_register_method("CheatGameInputProcessor", "update", (void*) CheatGameInputProcessor_update);
}

static void CheatGameInputProcessor_initFields(CheatGameInputProcessor* this) {
    this->PROCESS_GAME = "processGame";
    
    this->gameKeyFactory = GameKeyFactory_getInstance();
}


void CheatGameInputProcessor_init(CheatGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    CheatGameInputProcessor_register();
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        CheatGameInputProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

CheatGameInputProcessor* CheatGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    CheatGameInputProcessor* this = java_object_alloc(sizeof(CheatGameInputProcessor), "CheatGameInputProcessor");
    CheatGameInputProcessor_init(this, gameCanvas);
    return this;
}


// synchronized
void CheatGameInputProcessor_update(CheatGameInputProcessor* this) {
        JAVA_TRY {
            AllBinaryGameLayerManager* gameLayerManager = AllBinaryGameCanvas_getLayerManager(this->gameCanvas);
            BasicArrayList* list = GameInput_getGameKeyEventList(this);
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                void* anyType = list->objectArray[index];
                int32_t key = GameKeyEventUtil_getKey(anyType);
                if (key == Input_getId(this->gameKeyFactory->LEVEL_DOWN)) {
                    SpecialGameInputInterface_strafeLeft((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->LEVEL_UP)) {
                    SpecialGameInputInterface_strafeRight((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                }
                if (key == Input_getId(this->gameKeyFactory->LEFT)) {
                    SpecialGameInputInterface_left((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->RIGHT)) {
                    SpecialGameInputInterface_right((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->UP)) {
                    SpecialGameInputInterface_up((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->DOWN)) {
                    SpecialGameInputInterface_down((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->KEY_NUM1)) {
                    SpecialGameInputInterface_special1((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor), gameLayerManager, (GameKeyEvent_staticInit(), GameKeyEvent_NONE));
                    break;
                } else if (key == Input_getId(this->gameKeyFactory->KEY_NUM3)) {
                    SpecialGameInputInterface_special2((CheatGameInputProcessor_staticInit(), CheatGameInputProcessor_inputProcessor), gameLayerManager, (GameKeyEvent_staticInit(), GameKeyEvent_NONE));
                    break;
                }
            }
            BasicArrayList_clear(list);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}

