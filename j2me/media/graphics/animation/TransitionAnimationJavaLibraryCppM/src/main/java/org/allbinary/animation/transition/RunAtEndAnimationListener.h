
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/transition/AnimationListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RunAtEndAnimationListener
            : public virtual Object
        , public virtual AnimationListenerInterface {

    /*protected*/ public: Runnable* runnable;

/*protected*/ public: RunAtEndAnimationListener(Runnable* runnable);

    public: void onPlatformAnimationStart();

    public: void onPlatformAnimationEnd();

    public: void onPlatformAnimationRepeat();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/animation/transition/AnimationListenerInterface.h")
#include "org/allbinary/animation/transition/AnimationListenerInterface.h"
#endif

        #endif
    
