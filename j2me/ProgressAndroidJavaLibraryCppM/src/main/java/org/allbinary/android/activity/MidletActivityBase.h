
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/app/Activity.h>
class MotionEvent;
class View;
#include <org/allbinary/android/GenericMotionEventVerifyInterface.h>
class GameFeatureEvent;
#include <org/allbinary/game/configuration/event/GameFeatureListenerInterface.h>
class GameInitializedEvent;
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/SimpleProgressActivityInterface.h"
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MidletActivityBase: public Activity, public GameFeatureListenerInterface, public GameInitializedListenerInterface, public SimpleProgressActivityInterface, public KeyInputViewCompositeInterface, public GenericMotionEventVerifyInterface {


            
    public: MidletActivityBase();
        
    public: void onGameFeatureChange(GameFeatureEvent* gameFeatureEvent);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onGameInitialized(GameInitializedEvent* gameInitializedEvent);

                //@Throws(Exception.constructor)
            
    public: void onSetProgress(int32_t value, std::string text);

                //@Throws(Exception.constructor)
            
    public: void onDismissProgress(std::vector<int32_t> animationSequence);

                //@Throws(Exception.constructor)
            
    public: void onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence);

    public: View* getRootView();

    public: View* getView();

    public: void setKeyInputView(View* keyInputView);

    public: bool onGenericMotionEvent(MotionEvent* event);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_MIDLETACTIVITYBASE_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/view/MotionEvent.h>)
#include <android/view/MotionEvent.h>
#endif
#if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<org/allbinary/android/GenericMotionEventVerifyInterface.h>)
#include <org/allbinary/android/GenericMotionEventVerifyInterface.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameFeatureEvent.h>)
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameFeatureListenerInterface.h>)
#include <org/allbinary/game/configuration/event/GameFeatureListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEvent.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>)
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/android/activity/SimpleProgressActivityInterface.h")
#include "org/allbinary/android/activity/SimpleProgressActivityInterface.h"
#endif
#if __has_include("org/allbinary/android/activity/KeyInputViewCompositeInterface.h")
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"
#endif

        #endif
    
