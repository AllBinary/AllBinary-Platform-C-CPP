
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationBehavior.h"

class IndexedAnimationBehavior: public AnimationBehavior {
        

    public frameDelayTime: int64_t;

    public loopTotal: int32_t;

    public elapsedTime: int64_t= 0;

    public loopIndex: int32_t= 0;

public constructor (int32_t loopTotal, int64_t frameDelayTime){

            super();
        this.loopTotal= loopTotal;
    
this.frameDelayTime= frameDelayTime;
    
}


    public reset(){
this.loopIndex= 0;
    
}


};

            

