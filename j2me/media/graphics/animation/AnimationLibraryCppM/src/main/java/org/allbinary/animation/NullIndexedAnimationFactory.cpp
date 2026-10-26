
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "IndexedAnimation.h"
#include "NullIndexedAnimation.h"
#include "IndexedAnimationBehavior.h"
//#include "NullIndexedAnimationInner.h"
#include "Animation.h"

class NullIndexedAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

    public: static const std::vector<IndexedAnimation> NULL_INDEXED_ANIMATION_ARRAY = {};

    private: static NullIndexedAnimationFactory NULL_INDEXED_ANIMATION_FACTORY = NullIndexedAnimationFactory();

    public: static NullIndexedAnimationFactory getFactoryInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY;
    
}


//inner= member=true isStatic=
class NullIndexedAnimationInner: public NullIndexedAnimation {
/*Static stuff is not allowed for CPP inner classes*//**/


: NullIndexedAnimationInner(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
}


};

            
    private: const Animation NULL_ANIMATION = NullIndexedAnimationInner();

private: NullIndexedAnimationFactory(){
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


    public: void setInitialScale(ScaleProperties scaleProperties){
}


};

            

