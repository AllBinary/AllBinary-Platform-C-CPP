
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GamePersistanceStrings
            : public virtual Object
         {

    private: static GamePersistanceStrings* instance_owner();
    private: static GamePersistanceStrings* instance;

    public: static GamePersistanceStrings* getInstance();


            
    public: GamePersistanceStrings();
        
    public: const std::string SAVED_GAME_RECORD_ID = "_SG";

    public: const std::string SAVED_GAME_CONFIGURATION_RECORD_ID = "_SGC";

    public: const std::string DEFAULT_INPUT_MAPPING_RECORD_ID = "_DIM";

    public: const std::string SAVED_INPUT_CONFIGURATION_RECORD_ID = "_SIC";

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H_COMPLETE
        
        #endif
    
