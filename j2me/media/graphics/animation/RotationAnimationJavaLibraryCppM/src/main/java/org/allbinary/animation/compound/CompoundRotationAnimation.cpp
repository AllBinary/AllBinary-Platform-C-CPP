
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

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterface.h"

class CompoundRotationAnimation: public RotationAnimation: public CompoundAnimationInterface {
        

    private: animationInterfaceArray: std::vector<RotationAnimation>;

public constructor (std::vector<RotationAnimation> animationInterfaceArray, AnimationBehavior animationBehavior){
            super(AngleInfo.getInstance(AngleFactory.getInstance()!.QUARTER_TOTAL_ANGLE), CircularIndexUtil.createInstance(4), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.animationInterfaceArray= animationInterfaceArray;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.animationInterfaceArray!.length);
    
}


    public setFrame(int32_t index){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.setFrame(index);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.getAnimationSize();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.getSize();;
    
}


    public previousFrame(){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.previousFrame();
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.nextFrame();
    
}


    public previousRotation(){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.previousRotation();
    
}


    public nextRotation(){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.nextRotation();
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.paintXY(graphics, x, y);
    
}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.paintThreedXYZ(graphics, x, y, z);
    
}


    public IndexedAnimation getCurrentAnimation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!;
    
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


    public setFrameByDirection(Direction direction){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.setFrameByDirection(direction);
    
}


    public setFrameToAngle(Angle angle){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.setFrameToAngle(angle);
    
}


    public adjustFrameToAngle(Angle newAngle){
this.adjustFrame(newAngle!.getValue());
    
}


    public adjustFrame(int16_t angle){
this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.adjustFrame(angle);
    
}


    public AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[this.circularIndexUtil!.getIndex()]!.getAngleInfoP();;
    
}


    public std::vector<RotationAnimation> getAnimationInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray;
    
}


    public setAnimationInterfaceArray(std::vector<RotationAnimation> animationInterfaceArray){
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

            

