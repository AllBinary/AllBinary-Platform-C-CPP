
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/LazyImageRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"


LazyImageRotationAnimation::LazyImageRotationAnimation(int32_t layoutIndex, int32_t instanceId, ScaleProperties* scaleProperties, BaseImageAnimationFactory* animationInterfaceFactoryInterface, AnimationBehavior* animationBehavior) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior), logUtil(LogUtil::getInstance()), scaleProperties(ScaleProperties::instance){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->layoutIndex= layoutIndex;
    
this->instanceId= instanceId;
    
this->animationInterfaceFactoryInterface= animationInterfaceFactoryInterface;
    

    ImageCache* imageCache = ImageCacheFactory::getInstance();;
    
imageCache->add(this);
    
this->scaleProperties= scaleProperties;
    
this->NULL_INDEX_ANIMATION= dynamic_cast<IndexedAnimation*>(NullRotationAnimationFactory::getFactoryInstance()->getInstance(0));
    

//inner=true member= isStatic=
class ActualRotationAnimation: public RotationAnimation {

    private: LazyImageRotationAnimation* lazyImageRotationAnimation;

    private: int32_t index= 0;

public: ActualRotationAnimation(LazyImageRotationAnimation* lazyImageRotationAnimation) : RotationAnimation(AngleInfo::getInstance(AngleFactory::getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil::createInstance(4), animationBehavior){

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


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){

        try {
            ImageCacheFactory::getInstance()->insertFirst(this);
    
this->lazyImageRotationAnimation->animation= this->lazyImageRotationAnimation->NULL_INDEX_ANIMATION;
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}


    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z){

        try {
            ImageCacheFactory::getInstance()->insertFirst(this);
    
this->lazyImageRotationAnimation->animation= this->lazyImageRotationAnimation->NULL_INDEX_ANIMATION;
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt

this->animation= new ActualRotationAnimation(this);
    
}


    auto LazyImageRotationAnimation::setRealAnimation() -> void{

        try {
            
    IndexedAnimation* animation = this->animation;;
    
this->animationInterfaceFactoryInterface->setInitialScale(this->scaleProperties);
    
this->animation= dynamic_cast<IndexedAnimation*>(this->animationInterfaceFactoryInterface->getInstance(this->instanceId));
    
this->animation->setState(animation);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, LazyImageRotationAnimation::SET_REAL_ANIMATION, &e);
    
}

}


    auto LazyImageRotationAnimation::setScale(float scaleX, float scaleY) -> void{
this->animation->setScale(scaleX, scaleY);
    
}


    auto LazyImageRotationAnimation::getAnimationBehavior() -> AnimationBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getAnimationBehavior();;
    
}


                //@Throws(Exception.constructor)
            
    auto LazyImageRotationAnimation::set(GL* gl) -> void{
this->animation->set(gl);
    
}


    auto LazyImageRotationAnimation::setAlpha(int32_t alpha) -> void{
this->animation->setAlpha(alpha);
    
}


    auto LazyImageRotationAnimation::setDx(int32_t dx) -> void{
this->animation->setDx(dx);
    
}


    auto LazyImageRotationAnimation::setDy(int32_t dy) -> void{
this->animation->setDy(dy);
    
}


    auto LazyImageRotationAnimation::setMaxScale(float maxScaleX, float maxScaleY) -> void{
this->animation->setMaxScale(maxScaleX, maxScaleY);
    
}


    auto LazyImageRotationAnimation::nextRotation() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->nextRotation();
    
}


    auto LazyImageRotationAnimation::previousRotation() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->previousRotation();
    
}


    auto LazyImageRotationAnimation::nextRotationX() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->nextRotationX();
    
}


    auto LazyImageRotationAnimation::previousRotationX() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->previousRotationX();
    
}


    auto LazyImageRotationAnimation::nextRotationZ() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->nextRotationZ();
    
}


    auto LazyImageRotationAnimation::previousRotationZ() -> void{

    RotationAnimation* rotationAnimation = (dynamic_cast<RotationAnimation*>(this->animation));;
    
rotationAnimation->previousRotationZ();
    
}


    auto LazyImageRotationAnimation::changeBasicColor(BasicColor* basicColor) -> void{
this->animation->changeBasicColor(basicColor);
    
}


    auto LazyImageRotationAnimation::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getBasicColorP();;
    
}


    auto LazyImageRotationAnimation::getChangeBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getChangeBasicColor();;
    
}


    auto LazyImageRotationAnimation::getChangeColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getChangeColor();;
    
}


    auto LazyImageRotationAnimation::getColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getColor();;
    
}


    auto LazyImageRotationAnimation::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getDx();;
    
}


    auto LazyImageRotationAnimation::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getDy();;
    
}


    auto LazyImageRotationAnimation::isThreed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->isThreed();;
    
}


                //@Throws(Exception.constructor)
            
    auto LazyImageRotationAnimation::nextFrame() -> void{
this->animation->nextFrame();
    
}


    auto LazyImageRotationAnimation::reset() -> void{
this->animation->reset();
    
}


    auto LazyImageRotationAnimation::setFrame(int32_t index) -> void{
this->animation->setFrame(index);
    
}


    auto LazyImageRotationAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    auto LazyImageRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getAnimationSize();;
    
}


    auto LazyImageRotationAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getSize();;
    
}


    auto LazyImageRotationAnimation::previousFrame() -> void{
this->animation->previousFrame();
    
}


    auto LazyImageRotationAnimation::isLastFrame() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->isLastFrame();;
    
}


    auto LazyImageRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
this->animation->setSequence(sequence);
    
}


    auto LazyImageRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getSequence();;
    
}


    auto LazyImageRotationAnimation::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animation->getWidth();;
    
}


    auto LazyImageRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{

        try {
            this->animation->paintXY(graphics, x, y);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}


    auto LazyImageRotationAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{

        try {
            this->animation->paintThreedXYZ(graphics, x, y, z);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}


    auto LazyImageRotationAnimation::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    Image* image = this->animationInterfaceFactoryInterface->getImage();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(RotationAnimation::toString())->append(commonSeps->SPACE)->append(image->getName())->append(commonSeps->SPACE)->appendint(image->getWidth())->append(commonSeps->SPACE)->appendint(image->getHeight()));;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_CPP
