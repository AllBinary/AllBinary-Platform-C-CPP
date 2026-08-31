
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
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

class MidletActivityBase: public Activity: public GameFeatureListenerInterface, public GameInitializedListenerInterface, public SimpleProgressActivityInterface, public KeyInputViewCompositeInterface, public GenericMotionEventVerifyInterface {
        

    public onGameFeatureChange(GameFeatureEvent gameFeatureEvent){
}


    public onEvent(AllBinaryEventObject eventObject){
}


    public onGameInitialized(GameInitializedEvent gameInitializedEvent){
}


                //@Throws(Exception.constructor)
            
    public onSetProgress(int32_t value, string text){
}


                //@Throws(Exception.constructor)
            
    public onDismissProgress(std::vector<int32_t> animationSequence){
}


                //@Throws(Exception.constructor)
            
    public onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence){
}


    public View getRootView(){



                            throw new RuntimeException();
                    
}


    public View getView(){



                            throw new RuntimeException();
                    
}


    public setKeyInputView(View keyInputView){
}


    public bool onGenericMotionEvent(MotionEvent event){



                            throw new RuntimeException();
                    
}


};

            

