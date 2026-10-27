
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DemoGameMidletState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoGameMidletStateFactory
            : public virtual Object
         {

    private: static DemoGameMidletStateFactory* STATE_owner();
    private: static DemoGameMidletStateFactory* STATE;

    public: static DemoGameMidletStateFactory* getInstance();

    public: DemoGameMidletState* NONE;

    public: DemoGameMidletState* START_DEMO;

    public: DemoGameMidletState* START_GAME;

    public: DemoGameMidletState* START_INPUT_MAPPING;

private: DemoGameMidletStateFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/midlet/DemoGameMidletState.h")
#include "org/allbinary/game/midlet/DemoGameMidletState.h"
#endif

        #endif
    
