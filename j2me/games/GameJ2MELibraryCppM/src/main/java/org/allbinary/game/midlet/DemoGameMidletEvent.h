
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameMidletState.h"

class DemoGameMidletEvent: public AllBinaryEventObject {

    private: DemoGameMidletState demoGameMidletState;

public: DemoGameMidletEvent(Object* anyType, DemoGameMidletState demoGameMidletState);

    public: void init(Object* anyType);

    public: void setDemoGameMidletState(DemoGameMidletState demoGameMidletState);

    public: DemoGameMidletState getDemoGameMidletState();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
