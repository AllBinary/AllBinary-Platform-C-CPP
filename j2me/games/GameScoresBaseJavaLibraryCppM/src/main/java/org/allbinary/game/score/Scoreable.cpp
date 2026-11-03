
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_SCOREABLE_CPP
        #define ORG_ALLBINARY_GAME_SCORE_SCOREABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/Scoreable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/ScoreableInterface.h"

int32_t Scoreable::ID = SmallIntegerSingletonFactory::getInstance()->getAt(3);

Scoreable::Scoreable(int32_t points){
this->points= points;
    
}


    auto Scoreable::addPoints(int32_t points) -> void{
this->points += points;
    
}


    auto Scoreable::removePoints(int32_t points) -> void{
this->points -= points;
    
}


    auto Scoreable::setPoints(int32_t points) -> void{
this->points= points;
    
}


    auto Scoreable::getPoints() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->points;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_SCOREABLE_CPP
