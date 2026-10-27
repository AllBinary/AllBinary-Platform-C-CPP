
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ShakeEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShakeAnimationListener
            : public virtual Object
         {


            
    public: ShakeAnimationListener();
        
    public: void onSmallShakeEvent();

    public: void onMediumShakeEvent();

    public: void onLargeShakeEvent();

    public: void onShakeEvent(ShakeEvent* shakeEvent);

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/animation/transition/shake/ShakeEvent.h")
#include "org/allbinary/animation/transition/shake/ShakeEvent.h"
#endif

        #endif
    
