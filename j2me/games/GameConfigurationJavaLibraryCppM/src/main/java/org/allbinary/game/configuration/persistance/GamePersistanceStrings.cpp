
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
        
class GamePersistanceStrings
            : public Object
         {

    private: static GamePersistanceStrings instance() { return GamePersistanceStrings(); }

    public: static GamePersistanceStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GamePersistanceStrings::instance();
    
}


    public: const std::string SAVED_GAME_RECORD_ID = "_SG";

    public: const std::string SAVED_GAME_CONFIGURATION_RECORD_ID = "_SGC";

    public: const std::string DEFAULT_INPUT_MAPPING_RECORD_ID = "_DIM";

    public: const std::string SAVED_INPUT_CONFIGURATION_RECORD_ID = "_SIC";

};

            

