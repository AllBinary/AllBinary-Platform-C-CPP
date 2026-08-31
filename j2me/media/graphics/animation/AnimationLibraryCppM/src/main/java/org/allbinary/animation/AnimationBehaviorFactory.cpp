
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationBehavior.h"

class AnimationBehaviorFactory
            : public Object
         {
        

    private: static const instance: AnimationBehaviorFactory = new AnimationBehaviorFactory();

    public static AnimationBehaviorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationBehaviorFactory.instance;
    
}


    public AnimationBehavior getOrCreateInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationBehavior.getInstance();;
    
}


};

            

