
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_CPP
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/transition/RunAtEndAnimationListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/transition/AnimationListenerInterface.h"


RunAtEndAnimationListener::RunAtEndAnimationListener(Runnable* runnable){
this->runnable= runnable;
    
}


    auto RunAtEndAnimationListener::onPlatformAnimationStart() -> void{
}


    auto RunAtEndAnimationListener::onPlatformAnimationEnd() -> void{
}


    auto RunAtEndAnimationListener::onPlatformAnimationRepeat() -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_CPP
