
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H
        #define ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationEventHandler: public BasicEventHandler {

    private: static AnimationEventHandler* eventHandler() { static std::unique_ptr<AnimationEventHandler> value(new AnimationEventHandler()); return value.get(); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static AnimationEventHandler* getInstance();

private: AnimationEventHandler();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H
