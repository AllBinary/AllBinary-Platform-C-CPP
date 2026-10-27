
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameDifficultyFactory
            : public virtual Object
         {

    private: static GameDifficultyFactory* instance_owner();
    private: static GameDifficultyFactory* instance;

    public: static GameDifficultyFactory* getInstance();


            
    public: GameDifficultyFactory();
        
    private: int32_t level = 0;

    public: void setLevel(int32_t level);

    public: int32_t getLevel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H_COMPLETE
        
        #endif
    
