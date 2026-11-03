
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_CPP
        #define ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/NoScoreable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/Scoreable.h"

auto NoScoreable::SINGLETON_owner() -> NoScoreable* { static std::unique_ptr<NoScoreable> value(new NoScoreable()); return value.get(); }
NoScoreable* NoScoreable::SINGLETON = NoScoreable::SINGLETON_owner();

    auto NoScoreable::getInstance() -> NoScoreable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoScoreable::SINGLETON;
    
}


NoScoreable::NoScoreable() : Scoreable(0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NoScoreable::addPoints(int32_t points) -> void{
}


    auto NoScoreable::removePoints(int32_t points) -> void{
}




        #endif //ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_CPP
