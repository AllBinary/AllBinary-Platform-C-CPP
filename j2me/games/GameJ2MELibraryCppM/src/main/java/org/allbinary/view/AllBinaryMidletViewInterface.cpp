
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>

      
#include <org/allbinary/game/midlet/DemoGameMidletEventListener.h>

      
#include <org/allbinary/midlet/MidletCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/EmulatorViewInterface.h"

class AllBinaryMidletViewInterface: public MidletCompositeInterface, public EmulatorViewInterface, public DemoGameMidletEventListener, public GameInitializedListenerInterface {

    public: virtual void onResume() = 0;

    public: virtual void onPause() = 0;

    public: virtual void onDestroy() = 0;

};

            

