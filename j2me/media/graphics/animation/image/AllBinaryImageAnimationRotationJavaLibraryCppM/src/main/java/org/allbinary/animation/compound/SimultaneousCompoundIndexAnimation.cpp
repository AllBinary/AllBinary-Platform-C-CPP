
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
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimultaneousCompoundIndexAnimation: public IndexedAnimation {

    private: std::vector<IndexedAnimation> animationInterfaceArray;

public: SimultaneousCompoundIndexAnimation(std::vector<IndexedAnimation> animationInterfaceArray, AnimationBehavior animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
}


    public: void setFrame(int32_t frameIndex){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].setFrame(frameIndex);
    
}

}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[0].getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[0].getAnimationSize();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[0].getSize();;
    
}


    public: void previousFrame(){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].previousFrame();
    
}

}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].nextFrame();
    
}

}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].paintXY(graphics, x, y);
    
}

}


    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].paintThreedXYZ(graphics, x, y, z);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void set(GL gl){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].set(gl);
    
}

}


    public: std::vector<IndexedAnimation> getAnimationInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray;
    
}


    public: void setAnimationInterfaceArray(std::vector<IndexedAnimation> animationInterfaceArray){
this->animationInterfaceArray= animationInterfaceArray;
    
}


};

            

