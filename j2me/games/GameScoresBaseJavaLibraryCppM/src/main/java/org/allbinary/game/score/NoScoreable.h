
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
        #define ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/Scoreable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoScoreable: public Scoreable {

    private: static NoScoreable* SINGLETON_owner();
    private: static NoScoreable* SINGLETON;

    public: static NoScoreable* getInstance();

private: NoScoreable();

    public: void addPoints(int32_t points);

    public: void removePoints(int32_t points);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H_COMPLETE
        #if __has_include("org/allbinary/game/score/Scoreable.h")
#include "org/allbinary/game/score/Scoreable.h"
#endif

        #endif
    
