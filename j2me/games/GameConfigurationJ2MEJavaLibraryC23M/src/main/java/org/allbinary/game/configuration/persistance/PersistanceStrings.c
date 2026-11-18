// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/PersistanceStrings.h"


static PersistanceStrings* PersistanceStrings_instance;


void PersistanceStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PersistanceStrings_instance = PersistanceStrings_new();
}

void PersistanceStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PersistanceStrings", nullptr);
}

static void PersistanceStrings_initFields(PersistanceStrings* this) {
    this->SAVING = "Saving: ";
    this->NUMBER_OF_RECORDS = "Number of records: ";
    this->LOADING_ID = "Loading data with id: ";
    this->LOAD_ALL = "loadAll";
    this->DELETING_WITH_ID = "Deleting data with id: ";
    this->CLOSING_RECORDSTORE = "Closing RecordStore";
    this->NOT_SAVING = "Not Saving: ";
    this->ERROR_LOADING = "Error Loading gameActionInput: ";
    this->ERROR_LOADING_ID = "Error Loading id: ";
    this->ID = " id: ";
    this->GAME_ACTION_INPUT = " GameActionInput: ";
}

void PersistanceStrings_init(PersistanceStrings* this) {
    PersistanceStrings_register();
    PersistanceStrings_initFields(this);
}

PersistanceStrings* PersistanceStrings_new(void) {
    PersistanceStrings* this = java_object_alloc(sizeof(PersistanceStrings), "PersistanceStrings");
    PersistanceStrings_init(this);
    return this;
}


PersistanceStrings* PersistanceStrings_getInstance(void) {
        return (PersistanceStrings_staticInit(), PersistanceStrings_instance);
}

