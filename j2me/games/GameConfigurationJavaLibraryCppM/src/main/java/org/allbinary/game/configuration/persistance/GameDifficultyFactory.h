
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameDifficultyFactory
            : public Object
         {

    private: static GameDifficultyFactory instance() { return GameDifficultyFactory(); }

    public: static GameDifficultyFactory getInstance();

    private: int32_t level = 0;

    public: void setLevel(int32_t level);

    public: int32_t getLevel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H
