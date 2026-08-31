
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
        #define ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H

#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>

      
#include <org/allbinary/game/midlet/DemoGameMidletEventListener.h>

      
#include <org/allbinary/midlet/MidletCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmulatorViewInterface.h"

class AllBinaryMidletViewInterface: public MidletCompositeInterface, public EmulatorViewInterface, public DemoGameMidletEventListener, public GameInitializedListenerInterface {
        

    onResume();

    onPause();

    onDestroy();

};

            


        #endif //ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
