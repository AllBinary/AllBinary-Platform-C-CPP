
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_CPP
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/activity/MidletActivityBase.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/android/activity/SimpleProgressActivityInterface.h"
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"


MidletActivityBase::MidletActivityBase() {
        }
        
    auto MidletActivityBase::onGameFeatureChange(GameFeatureEvent* gameFeatureEvent) -> void{
}


    auto MidletActivityBase::onEvent(AllBinaryEventObject* eventObject) -> void{
}


    auto MidletActivityBase::onGameInitialized(GameInitializedEvent* gameInitializedEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto MidletActivityBase::onSetProgress(int32_t value, std::string text) -> void{
}


                //@Throws(Exception.constructor)
            
    auto MidletActivityBase::onDismissProgress(std::vector<int32_t> animationSequence) -> void{
}


                //@Throws(Exception.constructor)
            
    auto MidletActivityBase::onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence) -> void{
}


    auto MidletActivityBase::getRootView() -> View*{



                            throw RuntimeException();
                    
}


    auto MidletActivityBase::getView() -> View*{



                            throw RuntimeException();
                    
}


    auto MidletActivityBase::setKeyInputView(View* keyInputView) -> void{
}


    auto MidletActivityBase::onGenericMotionEvent(MotionEvent* event) -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_CPP
