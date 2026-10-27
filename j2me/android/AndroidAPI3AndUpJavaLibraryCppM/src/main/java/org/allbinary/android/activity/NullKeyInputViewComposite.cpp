
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/view/View.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"

class NullKeyInputViewComposite
            : public Object
        , public KeyInputViewCompositeInterface {

    public: static NullKeyInputViewComposite* NULL_KEY_INPUT_VIEW_COMPOSITE() { static std::unique_ptr<NullKeyInputViewComposite> value(new NullKeyInputViewComposite()); return value.get(); }

    public: void setKeyInputView(View* keyInputView){
}


    public: View* getRootView(){



                            throw new RuntimeException();
                    
}


    public: View* getView(){



                            throw new RuntimeException();
                    
}


    public: void runOnUiThread(Runnable* action){
}


};

            

