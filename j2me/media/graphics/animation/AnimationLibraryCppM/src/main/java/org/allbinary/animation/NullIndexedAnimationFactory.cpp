
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullIndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
//#include "org/allbinary/animation/NullIndexedAnimationInner.h"
#include "org/allbinary/animation/Animation.h"

class NullIndexedAnimationFactory
            : public Object
        , public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

    public: static inline const std::vector<IndexedAnimation*> NULL_INDEXED_ANIMATION_ARRAY = {};

    private: static NullIndexedAnimationFactory* NULL_INDEXED_ANIMATION_FACTORY() { static std::unique_ptr<NullIndexedAnimationFactory> value(new NullIndexedAnimationFactory()); return value.get(); }

    public: static NullIndexedAnimationFactory* getFactoryInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY();
    
}


//inner= member=true isStatic=
class NullIndexedAnimationInner: public NullIndexedAnimation {
/*Static stuff is not allowed for CPP inner classes*//**/


: NullIndexedAnimationInner(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
}


};

            
    private: Animation* NULL_ANIMATION = new NullIndexedAnimationInner();

private: NullIndexedAnimationFactory(){
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


    public: void setInitialScale(ScaleProperties* scaleProperties){
}


};

            

