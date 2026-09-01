
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PersistanceStrings
            : public Object
         {

    private: static PersistanceStrings instance() { return PersistanceStrings(); }

    public: static PersistanceStrings getInstance();

    public: const std::string SAVING = "Saving: ";

    public: const std::string NUMBER_OF_RECORDS = "Number of records: ";

    public: const std::string LOADING_ID = "Loading data with id: ";

    public: const std::string LOAD_ALL = "loadAll";

    public: const std::string DELETING_WITH_ID = "Deleting data with id: ";

    public: const std::string CLOSING_RECORDSTORE = "Closing RecordStore";

    public: const std::string NOT_SAVING = "Not Saving: ";

    public: const std::string ERROR_LOADING = "Error Loading gameActionInput: ";

    public: const std::string ERROR_LOADING_ID = "Error Loading id: ";

    public: const std::string ID = " id: ";

    public: const std::string GAME_ACTION_INPUT = " GameActionInput: ";

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H
