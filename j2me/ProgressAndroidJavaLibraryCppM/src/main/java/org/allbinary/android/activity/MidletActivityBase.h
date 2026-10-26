
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/app/Activity.h>

      
#include <android/view/MotionEvent.h>

      
#include <android/view/View.h>

      
#include <org/allbinary/android/GenericMotionEventVerifyInterface.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureListenerInterface.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleProgressActivityInterface.h"
#include "KeyInputViewCompositeInterface.h"

class MidletActivityBase: public Activity, public GameFeatureListenerInterface, public GameInitializedListenerInterface, public SimpleProgressActivityInterface, public KeyInputViewCompositeInterface, public GenericMotionEventVerifyInterface {

    public: void onGameFeatureChange(GameFeatureEvent gameFeatureEvent);

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onGameInitialized(GameInitializedEvent gameInitializedEvent);

                //@Throws(Exception.constructor)
            
    public: void onSetProgress(int32_t value, std::string text);

                //@Throws(Exception.constructor)
            
    public: void onDismissProgress(std::vector<int32_t> animationSequence);

                //@Throws(Exception.constructor)
            
    public: void onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence);

    public: View getRootView();

    public: View getView();

    public: void setKeyInputView(View keyInputView);

    public: bool onGenericMotionEvent(MotionEvent event);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H
