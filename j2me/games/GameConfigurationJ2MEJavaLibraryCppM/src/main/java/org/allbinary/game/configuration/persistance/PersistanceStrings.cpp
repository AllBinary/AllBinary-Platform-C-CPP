
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PersistanceStrings
            : public Object
         {

    private: static PersistanceStrings instance() { return PersistanceStrings(); }

    public: static PersistanceStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PersistanceStrings::instance();
    
}


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

            

