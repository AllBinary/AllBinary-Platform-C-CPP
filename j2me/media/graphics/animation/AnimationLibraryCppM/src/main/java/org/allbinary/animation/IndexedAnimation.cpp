
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/IndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"


IndexedAnimation::IndexedAnimation(AnimationBehavior* animationBehavior) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->animationBehaviorP= animationBehavior;
    
}


    auto IndexedAnimation::getAnimationBehavior() -> AnimationBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationBehaviorP;
    
}


    auto IndexedAnimation::reset() -> void{
this->animationBehaviorP->reset();
    
this->setFrame(0);
    
}


    auto IndexedAnimation::setFrame(int32_t index) -> void{
}


    auto IndexedAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    auto IndexedAnimation::getAnimationSize() -> int32_t{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto IndexedAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto IndexedAnimation::previousFrame() -> void{
}


    auto IndexedAnimation::isLastFrame() -> bool{

                        if(this->getFrame() == this->getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto IndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto IndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto IndexedAnimation::setState(IndexedAnimation* indexedAnimation) -> void{
this->setFrame(indexedAnimation->getFrame());
    
this->setDx(indexedAnimation->getDx());
    
this->setDy(indexedAnimation->getDy());
    
}


    auto IndexedAnimation::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto IndexedAnimation::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_CPP
