
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
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterface.h"

class CompoundIndexedAnimation: public IndexedAnimation: public CompoundAnimationInterface {
        

    private: circularIndexUtil: CircularIndexUtil;

    private: animationInterfaceArray: std::vector<Animation>;

public constructor (std::vector<Animation> animationInterfaceArray, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.animationInterfaceArray= animationInterfaceArray;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.animationInterfaceArray!.length);
    
}


    public setFrame(int32_t index){

    indexedAnimation: IndexedAnimation = this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]! as IndexedAnimation;;
    
indexedAnimation!.setFrame(index);
    
}


    public int32_t getFrame(){

    indexedAnimation: IndexedAnimation = this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]! as IndexedAnimation;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation!.getFrame();;
    
}


    public int32_t getSize(){

    indexedAnimation: IndexedAnimation = this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]! as IndexedAnimation;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation!.getSize();;
    
}


    public previousFrame(){

    indexedAnimation: IndexedAnimation = this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]! as IndexedAnimation;;
    
indexedAnimation!.previousFrame();
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.nextFrame();
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.paintXY(graphics, x, y);
    
}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.paintThreedXYZ(graphics, x, y, z);
    
}


    public IndexedAnimation getCurrentAnimation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]! as IndexedAnimation;
    
}


    public nextAnimation(){

    frame: int32_t = this.getFrame()!;;
    
this.circularIndexUtil!.next();
    
this.setFrame(frame);
    
}


    public previousAnimation(){

    frame: int32_t = this.getFrame()!;;
    
this.circularIndexUtil!.previous();
    
this.setFrame(frame);
    
}


    public setAnimation(int32_t index){

    frame: int32_t = this.getFrame()!;;
    
this.circularIndexUtil!.setIndex(index);
    
this.setFrame(frame);
    
}


    public std::vector<Animation> getAnimationInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray;
    
}


    public setAnimationInterfaceArray(std::vector<Animation> animationInterfaceArray){
this.animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){




                        for (
    index: int32_t = this.animationInterfaceArray!.length
                ;--index >= 0; )
        {
this.animationInterfaceArray[index]!.set(gl);
    
}

}


};

            

