// Generated Code Do Not Modify
#include "org/allbinary/media/audio/PlayerQueue.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/NoSound.h"
#if __has_include("org/allbinary/media/audio/Player.h")
#include "org/allbinary/media/audio/Player.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Player.h")
#include "org/allbinary/logic/communication/log/Player.h"
#endif
#if __has_include("org/allbinary/logic/string/Player.h")
#include "org/allbinary/logic/string/Player.h"
#endif
#if __has_include("org/allbinary/logic/string/Player.h")
#include "org/allbinary/logic/string/Player.h"
#endif
#if __has_include("org/allbinary/string/Player.h")
#include "org/allbinary/string/Player.h"
#endif
#if __has_include("org/allbinary/util/Player.h")
#include "org/allbinary/util/Player.h"
#endif
#if __has_include("org/allbinary/util/Player.h")
#include "org/allbinary/util/Player.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static const char* PlayerQueue_TOTAL = "Sounds In Queue: ";






void PlayerQueue_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlayerQueue_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerQueue", nullptr);
    java_register_method("PlayerQueue", "add", (void*) PlayerQueue_add);
    java_register_method("PlayerQueue", "process", (void*) PlayerQueue_process);
    java_register_method("PlayerQueue", "clear", (void*) PlayerQueue_clear);
    java_register_method("PlayerQueue", "toString", (void*) PlayerQueue_toString);
}

static void PlayerQueue_initFields(PlayerQueue* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->list = BasicArrayListD_new();
    
}


void PlayerQueue_init(PlayerQueue* this, int32_t max) {
    PlayerQueue_register();
    PlayerQueue_initFields(this);
        this->max = max;
}

PlayerQueue* PlayerQueue_new(int32_t max) {
    PlayerQueue* this = java_object_alloc(sizeof(PlayerQueue), "PlayerQueue");
    PlayerQueue_init(this, max);
    return this;
}


void PlayerQueue_add(PlayerQueue* this, Sound* sound) {
        JAVA_TRY {
            if (!BasicArrayList_contains(this->list, sound)) {
                BasicArrayList_add(this->list, sound);
            }
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD);
        } JAVA_END_TRY;
}


bool PlayerQueue_process(PlayerQueue* this) {
        Sound* sound = NoSound_getInstance();
        JAVA_TRY {
            bool played = false;
            if (BasicArrayList_size(this->list) > 0) {
                sound = ((Sound*) BasicArrayList_removeAt(this->list, 0));
                if (sound != nullptr) {
                    Player_start(Sound_getPlayerP(sound));
                }
                while (BasicArrayList_size(this->list) > this->max) {
                    BasicArrayList_removeAt(this->list, 0);
                }
                played = true;
            }
            return played;
        } JAVA_CATCH(Exception, e) {
            const char* resource = StringUtil_getInstance()->EMPTY_STRING;
            if (sound != nullptr) {
                resource = Sound_getResource(sound);
            }
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), resource)), this, this->commonStrings->PROCESS);
            return false;
        } JAVA_END_TRY;
}


void PlayerQueue_clear(PlayerQueue* this) {
        BasicArrayList_clear(this->list);
}


const char* PlayerQueue_toString(PlayerQueue* this) {
        return java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), PlayerQueue_TOTAL), BasicArrayList_size(this->list)));
}

