
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Animation.h"
#include "IndexedAnimationInterface.h"
#include "AnimationBehavior.h"

class IndexedAnimation: public Animation, public IndexedAnimationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: AnimationBehavior animationBehaviorP;

protected: IndexedAnimation(AnimationBehavior animationBehavior){
this->animationBehaviorP= animationBehavior;
    
}


    public: AnimationBehavior getAnimationBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationBehaviorP;
    
}


    public: void reset(){
this->animationBehaviorP.reset();
    
this->setFrame(0);
    
}


    public: void setFrame(int32_t index){
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void previousFrame(){
}


    public: bool isLastFrame(){

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


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: void setState(IndexedAnimation indexedAnimation){
this->setFrame(indexedAnimation.getFrame());
    
this->setDx(indexedAnimation.getDx());
    
this->setDy(indexedAnimation.getDy());
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

