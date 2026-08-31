
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullRotationAnimationFactory.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"

class LazyImageRotationAnimation: public RotationAnimation {
        

    private: static const SET_REAL_ANIMATION: string = "setRealAnimation";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const layoutIndex: int32_t;

    public const instanceId: int32_t;

    public const animationInterfaceFactoryInterface: BaseImageAnimationFactory;

    private: const NULL_INDEX_ANIMATION: IndexedAnimation;

    private: animation: IndexedAnimation;

    public scaleProperties: ScaleProperties = ScaleProperties.instance;

public constructor (int32_t layoutIndex, int32_t instanceId, ScaleProperties scaleProperties, BaseImageAnimationFactory animationInterfaceFactoryInterface, AnimationBehavior animationBehavior){
            super(AngleInfo.getInstance(AngleFactory.getInstance()!.QUARTER_TOTAL_ANGLE), CircularIndexUtil.createInstance(4), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.layoutIndex= layoutIndex;
    
this.instanceId= instanceId;
    
this.animationInterfaceFactoryInterface= animationInterfaceFactoryInterface;
    

    imageCache: ImageCache = ImageCacheFactory.getInstance()!;;
    
imageCache!.add(this);
    
this.scaleProperties= scaleProperties;
    
this.NULL_INDEX_ANIMATION= NullRotationAnimationFactory.getFactoryInstance()!.getInstance(0) as IndexedAnimation;
    
this.animation= new class extends RotationAnimation
                                {
                                
    private: index: int32_t= 0;
    public setFrame(int32_t index){
this.index= index;
    
}

    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}

    public paintXY(Graphics graphics, int32_t x, int32_t y){

        try {
            ImageCacheFactory.getInstance()!.insertFirst(this::);
    
animation= NULL_INDEX_ANIMATION;
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

        try {
            ImageCacheFactory.getInstance()!.insertFirst(this::);
    
animation= NULL_INDEX_ANIMATION;
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}

                                }
                            ;
    
}


    public setRealAnimation(){

        try {
            
    animation: IndexedAnimation = this.animation;;
    
this.animationInterfaceFactoryInterface!.setInitialScale(this.scaleProperties);
    
this.animation= this.animationInterfaceFactoryInterface!.getInstance(this.instanceId) as IndexedAnimation;
    
this.animation.setState(animation);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, SET_REAL_ANIMATION, e);
    
}

}


    public setScale(float scaleX, float scaleY){
this.animation.setScale(scaleX, scaleY);
    
}


    public AnimationBehavior getAnimationBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getAnimationBehavior();;
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){
this.animation.set(gl);
    
}


    public setAlpha(int32_t alpha){
this.animation.setAlpha(alpha);
    
}


    public setDx(int32_t dx){
this.animation.setDx(dx);
    
}


    public setDy(int32_t dy){
this.animation.setDy(dy);
    
}


    public setMaxScale(float maxScaleX, float maxScaleY){
this.animation.setMaxScale(maxScaleX, maxScaleY);
    
}


    public nextRotation(){
animation = this.animationanimation as RotationAnimation
animation.
                    nextRotation();
    
}


    public previousRotation(){
animation = this.animationanimation as RotationAnimation
animation.
                    previousRotation();
    
}


    public nextRotationX(){
animation = this.animationanimation as RotationAnimation
animation.
                    nextRotationX();
    
}


    public previousRotationX(){
animation = this.animationanimation as RotationAnimation
animation.
                    previousRotationX();
    
}


    public nextRotationZ(){
animation = this.animationanimation as RotationAnimation
animation.
                    nextRotationZ();
    
}


    public previousRotationZ(){
animation = this.animationanimation as RotationAnimation
animation.
                    previousRotationZ();
    
}


    public changeBasicColor(BasicColor basicColor){
this.animation.changeBasicColor(basicColor);
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getBasicColorP();;
    
}


    public BasicColor getChangeBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getChangeBasicColor();;
    
}


    public int32_t getChangeColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getChangeColor();;
    
}


    public int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getColor();;
    
}


    public int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getDx();;
    
}


    public int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getDy();;
    
}


    public bool isThreed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.isThreed();;
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){
this.animation.nextFrame();
    
}


    public reset(){
this.animation.reset();
    
}


    public setFrame(int32_t index){
this.animation.setFrame(index);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getAnimationSize();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getSize();;
    
}


    public previousFrame(){
this.animation.previousFrame();
    
}


    public bool isLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.isLastFrame();;
    
}


    public setSequence(std::vector<int32_t> sequence){
this.animation.setSequence(sequence);
    
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getSequence();;
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation.getWidth();;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){

        try {
            this.animation.paintXY(graphics, x, y);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

        try {
            this.animation.paintThreedXYZ(graphics, x, y, z);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    image: Image = this.animationInterfaceFactoryInterface!.getImage()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(super.toString())!.append(commonSeps!.SPACE)!.append(image.getName())!.append(commonSeps!.SPACE)!.appendint(image.getWidth())!.append(commonSeps!.SPACE)!.appendint(image.getHeight())!.toString();;
    
}


};

            

