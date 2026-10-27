
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
        #define ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
#include <org/allbinary/game/midlet/DemoGameMidletEventListener.h>
#include <org/allbinary/midlet/MidletCompositeInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/EmulatorViewInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryMidletViewInterface: public MidletCompositeInterface, public EmulatorViewInterface, public DemoGameMidletEventListener, public GameInitializedListenerInterface {

    public: virtual void onResume() = 0;

    public: virtual void onPause() = 0;

    public: virtual void onDestroy() = 0;

};

            


        #endif //ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>)
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/midlet/DemoGameMidletEventListener.h>)
#include <org/allbinary/game/midlet/DemoGameMidletEventListener.h>
#endif
#if __has_include(<org/allbinary/midlet/MidletCompositeInterface.h>)
#include <org/allbinary/midlet/MidletCompositeInterface.h>
#endif
#if __has_include("org/allbinary/view/EmulatorViewInterface.h")
#include "org/allbinary/view/EmulatorViewInterface.h"
#endif

        #endif
    
