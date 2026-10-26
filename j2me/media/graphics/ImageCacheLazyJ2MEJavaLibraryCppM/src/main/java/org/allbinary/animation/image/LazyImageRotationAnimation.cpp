
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"

class LazyImageRotationAnimation: public RotationAnimation {

    private: static const std::string SET_REAL_ANIMATION = "setRealAnimation";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: int32_t layoutIndex;

    public: int32_t instanceId;

    public: BaseImageAnimationFactory animationInterfaceFactoryInterface;

    private: IndexedAnimation NULL_INDEX_ANIMATION;

    private: IndexedAnimation animation;

    public: ScaleProperties scaleProperties = ScaleProperties::instance();

public: LazyImageRotationAnimation(int32_t layoutIndex, int32_t instanceId, ScaleProperties scaleProperties, BaseImageAnimationFactory animationInterfaceFactoryInterface, AnimationBehavior animationBehavior) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance().QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->layoutIndex= layoutIndex;
    
this->instanceId= instanceId;
    
this->animationInterfaceFactoryInterface= animationInterfaceFactoryInterface;
    

    ImageCache imageCache = ImageCacheFactory::getInstance();;
    
imageCache.add(this);
    
this->scaleProperties= scaleProperties;
    
this->NULL_INDEX_ANIMATION= NullRotationAnimationFactory::getFactoryInstance().getInstance(0);
    

//inner=true member= isStatic=
class ActualRotationAnimation: public RotationAnimation {

    private: LazyImageRotationAnimation lazyImageRotationAnimation;

    private: int32_t index= 0;

public: ActualRotationAnimation(LazyImageRotationAnimation lazyImageRotationAnimation) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance().QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->lazyImageRotationAnimation= lazyImageRotationAnimation;
    
}


    public: void setFrame(int32_t index){
this->index= index;
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

        try {
            ImageCacheFactory::getInstance().insertFirst(this);
    
this->lazyImageRotationAnimation.animation= this->lazyImageRotationAnimation.NULL_INDEX_ANIMATION;
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

        try {
            ImageCacheFactory::getInstance().insertFirst(this);
    
this->lazyImageRotationAnimation.animation= this->lazyImageRotationAnimation.NULL_INDEX_ANIMATION;
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt

this->animation= ActualRotationAnimation(this);
    
}


    public: void setRealAnimation(){

        try {
            
    IndexedAnimation animation = this->animation;;
    
this->animationInterfaceFactoryInterface.setInitialScale(this->scaleProperties);
    
this->animation= this->animationInterfaceFactoryInterface.getInstance(this->instanceId);
    
this->animation.setState(animation);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, LazyImageRotationAnimation::SET_REAL_ANIMATION, e);
    
}

}


    public: void setScale(float scaleX, float scaleY){
this->animation.setScale(scaleX, scaleY);
    
}


    public: AnimationBehavior getAnimationBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getAnimationBehavior();;
    
}


                //@Throws(Exception.constructor)
            
    public: void set(GL gl){
this->animation.set(gl);
    
}


    public: void setAlpha(int32_t alpha){
this->animation.setAlpha(alpha);
    
}


    public: void setDx(int32_t dx){
this->animation.setDx(dx);
    
}


    public: void setDy(int32_t dy){
this->animation.setDy(dy);
    
}


    public: void setMaxScale(float maxScaleX, float maxScaleY){
this->animation.setMaxScale(maxScaleX, maxScaleY);
    
}


    public: void nextRotation(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.nextRotation();
    
}


    public: void previousRotation(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.previousRotation();
    
}


    public: void nextRotationX(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.nextRotationX();
    
}


    public: void previousRotationX(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.previousRotationX();
    
}


    public: void nextRotationZ(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.nextRotationZ();
    
}


    public: void previousRotationZ(){

    RotationAnimation rotationAnimation = (this->animation);;
    
rotationAnimation.previousRotationZ();
    
}


    public: void changeBasicColor(BasicColor basicColor){
this->animation.changeBasicColor(basicColor);
    
}


    public: BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getBasicColorP();;
    
}


    public: BasicColor getChangeBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getChangeBasicColor();;
    
}


    public: int32_t getChangeColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getChangeColor();;
    
}


    public: int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getColor();;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getDx();;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getDy();;
    
}


    public: bool isThreed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.isThreed();;
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){
this->animation.nextFrame();
    
}


    public: void reset(){
this->animation.reset();
    
}


    public: void setFrame(int32_t index){
this->animation.setFrame(index);
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getAnimationSize();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getSize();;
    
}


    public: void previousFrame(){
this->animation.previousFrame();
    
}


    public: bool isLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.isLastFrame();;
    
}


    public: void setSequence(std::vector<int32_t> sequence){
this->animation.setSequence(sequence);
    
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getSequence();;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animation.getWidth();;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

        try {
            this->animation.paintXY(graphics, x, y);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

        try {
            this->animation.paintThreedXYZ(graphics, x, y, z);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


    public: std::string toString(){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    Image image = this->animationInterfaceFactoryInterface.getImage();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(super.toString()).append(commonSeps.SPACE).append(image.getName()).append(commonSeps.SPACE).appendint(image.getWidth()).append(commonSeps.SPACE).appendint(image.getHeight()).toString();;
    
}


};

            

