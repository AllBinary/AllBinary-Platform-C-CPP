
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
        #define ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/ScoreableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Scoreable
            : public virtual Object
        , public virtual ScoreableInterface {

    public: static int32_t ID;

    private: int32_t points;

public: Scoreable(int32_t points);

    public: void addPoints(int32_t points);

    public: void removePoints(int32_t points);

    /*protected*/ public: void setPoints(int32_t points);

    public: int32_t getPoints();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include("org/allbinary/game/score/ScoreableInterface.h")
#include "org/allbinary/game/score/ScoreableInterface.h"
#endif

        #endif
    
