// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputPersistance.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h")
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#endif


void* PersistentInputMapping_instance;











static InputMappingEventListenerInterface* PersistentInputMapping_getInputMappingEventListenerInterface(PersistentInputMapping* this);




void PersistentInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PersistentInputMapping_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void PersistentInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PersistentInputMapping", nullptr);
    java_register_method("PersistentInputMapping", "getTotalMapped", (void*) PersistentInputMapping_getTotalMapped);
    java_register_method("PersistentInputMapping", "isDefaultNew", (void*) PersistentInputMapping_isDefaultNew);
    java_register_method("PersistentInputMapping", "getDefault", (void*) PersistentInputMapping_getDefault);
    java_register_method("PersistentInputMapping", "setDefault", (void*) PersistentInputMapping_setDefault);
    java_register_method("PersistentInputMapping", "update", (void*) PersistentInputMapping_update);
    java_register_method("PersistentInputMapping", "save", (void*) PersistentInputMapping_save);
    java_register_method("PersistentInputMapping", "init", (void*) PersistentInputMapping_initMethod);
    java_register_method("PersistentInputMapping", "setInputMappingEventListenerInterface", (void*) PersistentInputMapping_setInputMappingEventListenerInterface);
    java_register_method("PersistentInputMapping", "getInputMappingEventListenerInterface", (void*) PersistentInputMapping_getInputMappingEventListenerInterface);
    java_register_method("PersistentInputMapping", "getInputMapping", (void*) PersistentInputMapping_getInputMapping);
    java_register_method("PersistentInputMapping", "isDelete", (void*) PersistentInputMapping_isDelete);
    java_register_method("PersistentInputMapping", "isSystemInput", (void*) PersistentInputMapping_isSystemInput);
}

static void PersistentInputMapping_initFields(PersistentInputMapping* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->inputMapping = InputToGameKeyMapping_new();
    this->inputMappingEventListenerInterface = (NullInputMappingEventListener_staticInit(), NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER);
    
    this->inputMappingEvent = InputMappingEvent_new(this);
}


PersistentInputMapping* PersistentInputMapping_getNullInstance(void) {
        if ((PersistentInputMapping_staticInit(), PersistentInputMapping_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            PersistentInputMapping_instance = PersistentInputMapping_new(GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
        }
        return ((PersistentInputMapping*) (PersistentInputMapping_staticInit(), PersistentInputMapping_instance));
}


void PersistentInputMapping_init(PersistentInputMapping* this, const char* name) {
    PersistentInputMapping_register();
    PersistentInputMapping_initFields(this);
        this->inputPersistance = InputPersistance_new(name);
}

PersistentInputMapping* PersistentInputMapping_new(const char* name) {
    PersistentInputMapping* this = java_object_alloc(sizeof(PersistentInputMapping), "PersistentInputMapping");
    PersistentInputMapping_init(this, name);
    return this;
}


int32_t PersistentInputMapping_getTotalMapped(PersistentInputMapping* this) {
        return Hashtable_size(InputMapping_getHashtable(PersistentInputMapping_getInputMapping(this)));
}


bool PersistentInputMapping_isDefaultNew(PersistentInputMapping* this) {
        return false;
}


InputToGameKeyMapping* PersistentInputMapping_getDefault(PersistentInputMapping* this) {
        return InputToGameKeyMapping_getNullInstance();
}


// throws Exception
void PersistentInputMapping_setDefault(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        InputToGameKeyMapping_removeAll(PersistentInputMapping_getInputMapping(this));
        InputToGameKeyMapping_addMapping(PersistentInputMapping_getInputMapping(this), PersistentInputMapping_getDefault(this));
        PersistentInputMapping_save(this, abeClientInformation);
}


// throws Exception
void PersistentInputMapping_update(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        BasicPersitance_deleteAll(this->inputPersistance, abeClientInformation);
        PersistentInputMapping_save(this, abeClientInformation);
}


// throws Exception
void PersistentInputMapping_save(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        InputPersistance_save(this->inputPersistance, abeClientInformation, InputMapping_getHashtable(PersistentInputMapping_getInputMapping(this)));
        InputMappingEvent_setInputToGameKeyMapping(this->inputMappingEvent, PersistentInputMapping_getInputMapping(this));
        if (PersistentInputMapping_getInputMappingEventListenerInterface(this) != nullptr) {
            InputMappingEventListenerInterface_onInputMappingEvent(PersistentInputMapping_getInputMappingEventListenerInterface(this), this->inputMappingEvent);
        }
}


// throws Exception
void PersistentInputMapping_initMethod(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->INIT);
        JAVA_TRY {
            InputPersistance_loadAll(this->inputPersistance, abeClientInformation);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
            BasicPersitance_deleteRecoreStore(this->inputPersistance, abeClientInformation);
            PersistentInputMapping_setDefault(this, abeClientInformation);
            InputPersistance_loadAll(this->inputPersistance, abeClientInformation);
        } JAVA_END_TRY;
        BasicArrayList* list = BasicPersitance_getList(this->inputPersistance);
        int32_t totalMappedTo = 0;
        int32_t size = BasicArrayList_size(list);
        ABHashtable* hashtable = nullptr;
        Enumeration* enumeration = nullptr;
        Input* mappedToInput = nullptr;
        Input* gameActionInput = nullptr;
        for (int32_t index = 0; index < size; index++) {
            hashtable = ((ABHashtable*) list->objectArray[index]);
            enumeration = Hashtable_keys(hashtable);
            while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
                mappedToInput = ((Input*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
                gameActionInput = ((Input*) Hashtable_get(hashtable, mappedToInput));
                totalMappedTo++;
                InputToGameKeyMapping_add(PersistentInputMapping_getInputMapping(this), gameActionInput, mappedToInput);
            }
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "End - Total Loaded Keys Mapped: ");
        StringMaker_appendint(stringBuffer, PersistentInputMapping_getTotalMapped(this));
        StringMaker_append(stringBuffer, " to: ");
        StringMaker_appendint(stringBuffer, totalMappedTo);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, this->commonStrings->INIT);
}


void PersistentInputMapping_setInputMappingEventListenerInterface(PersistentInputMapping* this, InputMappingEventListenerInterface* inputMappingEventListenerInterface) {
        this->inputMappingEventListenerInterface = inputMappingEventListenerInterface;
}


static InputMappingEventListenerInterface* PersistentInputMapping_getInputMappingEventListenerInterface(PersistentInputMapping* this) {
        return this->inputMappingEventListenerInterface;
}


InputToGameKeyMapping* PersistentInputMapping_getInputMapping(PersistentInputMapping* this) {
        return this->inputMapping;
}


// throws Exception
bool PersistentInputMapping_isDelete(PersistentInputMapping* this, Input* input) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool PersistentInputMapping_isSystemInput(PersistentInputMapping* this, Input* input) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}

