
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PersistanceStrings
            : public virtual Object
         {

    private: static PersistanceStrings* instance_owner();
    private: static PersistanceStrings* instance;

    public: static PersistanceStrings* getInstance();


            
    public: PersistanceStrings();
        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H_COMPLETE
        
        #endif
    
