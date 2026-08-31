
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdjustedImageArrayRotationAnimation.h"
#include "ImageArrayRotationAnimationInfo.h"

class ImageArrayRotationAnimationCacheable: public AdjustedImageArrayRotationAnimation: public CacheableInterface {
        

public constructor (any = {} anyType, AnimationBehavior animationBehavior){
            super((anyType as ImageArrayRotationAnimationInfo).getImageArray(), (anyType as ImageArrayRotationAnimationInfo).getAngleInfoP(), (anyType as ImageArrayRotationAnimationInfo).getTotalAngle(), (anyType as ImageArrayRotationAnimationInfo).getDx(), (anyType as ImageArrayRotationAnimationInfo).getDy(), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


};

            

