
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/media/image/ImageCompleteUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonBlankResource.h"
#include "TouchButtonResource.h"
#include "TouchButtonGenericActionResource.h"
#include "TouchButtonStartResource.h"
#include "TouchButtonUpResource.h"
#include "TouchButtonDownResource.h"
#include "TouchButtonTurnLeftResource.h"
#include "TouchButtonTurnRightResource.h"
#include "TouchButtonStrafeLeftResource.h"
#include "TouchButtonStrafeRightResource.h"

class TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory: public BaseResourceAnimationInterfaceFactoryInterfaceFactory {

    public: static TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory createFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory("TouchButton Animations");
    
}


public: TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory(std::string name){
            super(name, Hashtable<any, any>(), Hashtable<any, any>(), Hashtable<any, any>());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){
this->initImageCache(ImageCacheFactory::getInstance(), level);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initImageCache(ImageCache imageCache, int32_t level){

                        if(this->isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t portion = 140;;
    

    std::string loadingString = StringMaker().append(this->toString()).append(" Loading: ").toString();;
    

    int32_t index = 0;;
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.addPortion(portion, loadingString, index++);
    

    TouchButtonResource touchButtonBlankResource = TouchButtonBlankResource::getInstance();;
    

    TouchButtonResource touchButtonGenericActionResource = TouchButtonGenericActionResource::getInstance();;
    

    TouchButtonResource touchButtonStartResource = TouchButtonStartResource::getInstance();;
    

    TouchButtonResource touchButtonUpResource = TouchButtonUpResource::getInstance();;
    

    TouchButtonResource touchButtonDownResource = TouchButtonDownResource::getInstance();;
    

    TouchButtonResource touchButtonTurnLeftResource = TouchButtonTurnLeftResource::getInstance();;
    

    TouchButtonResource touchButtonTurnRightResource = TouchButtonTurnRightResource::getInstance();;
    

    TouchButtonResource touchButtonStrafeLeftResource = TouchButtonStrafeLeftResource::getInstance();;
    

    TouchButtonResource touchButtonStrafeRightResource = TouchButtonStrafeRightResource::getInstance();;
    

    Image touchButtonBlankResourceImage = imageCache.getWithKey(touchButtonBlankResource.RESOURCE);;
    

    Image touchButtonGenericActionResourceImage = imageCache.getWithKey(touchButtonGenericActionResource.RESOURCE);;
    

    Image touchButtonStartResourceImage = imageCache.getWithKey(touchButtonStartResource.RESOURCE);;
    

    Image touchButtonUpResourceImage = imageCache.getWithKey(touchButtonUpResource.RESOURCE);;
    

    Image touchButtonDownResourceImage = imageCache.getWithKey(touchButtonDownResource.RESOURCE);;
    

    Image touchButtonTurnLeftResourceImage = imageCache.getWithKey(touchButtonTurnLeftResource.RESOURCE);;
    

    Image touchButtonTurnRightResourceImage = imageCache.getWithKey(touchButtonTurnRightResource.RESOURCE);;
    

    Image touchButtonStrafeLeftResourceImage = imageCache.getWithKey(touchButtonStrafeLeftResource.RESOURCE);;
    

    Image touchButtonStrafeRightResourceImage = imageCache.getWithKey(touchButtonStrafeRightResource.RESOURCE);;
    

    NullAnimationFactory nullAnimationFactory = NullAnimationFactory::getFactoryInstance();;
    

                        if(OperatingSystemFactory::getInstance().getOperatingSystemInstance().isOverScan())
                        
                                    {
                                    imageCache.getWithKey(TouchButtonStartResource::getInstance().HINT);
    

                                    }
                                
progressCanvas.addPortion(portion, loadingString, index++);
    

    ImageCompleteUtil imageCompleteUtil = ImageCompleteUtil::getInstance();;
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonBlankResourceImage, touchButtonBlankResource.RESOURCE);
    
this->add(touchButtonBlankResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonBlankResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonBlankResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonGenericActionResourceImage, touchButtonGenericActionResource.RESOURCE);
    
this->add(touchButtonGenericActionResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonGenericActionResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonGenericActionResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonStartResourceImage, touchButtonStartResource.RESOURCE);
    
this->add(touchButtonStartResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonStartResourceImage, AnimationBehaviorFactory::getInstance()));
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonUpResourceImage, touchButtonUpResource.RESOURCE);
    
this->add(touchButtonUpResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonUpResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonUpResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonDownResourceImage, touchButtonDownResource.RESOURCE);
    
this->add(touchButtonDownResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonDownResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonDownResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonTurnLeftResourceImage, touchButtonTurnLeftResource.RESOURCE);
    
this->add(touchButtonTurnLeftResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonTurnLeftResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonTurnLeftResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonTurnRightResourceImage, touchButtonTurnRightResource.RESOURCE);
    
this->add(touchButtonTurnRightResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonTurnRightResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonTurnRightResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonStrafeLeftResourceImage, touchButtonStrafeLeftResource.RESOURCE);
    
this->add(touchButtonStrafeLeftResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonStrafeLeftResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonStrafeLeftResource.HINT, nullAnimationFactory);
    
progressCanvas.addPortion(portion, loadingString, index++);
    
imageCompleteUtil.waitForImage(touchButtonStrafeRightResourceImage, touchButtonStrafeRightResource.RESOURCE);
    
this->add(touchButtonStrafeRightResource.RESOURCE, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonStrafeRightResourceImage, AnimationBehaviorFactory::getInstance()));
    
this->add(touchButtonStrafeRightResource.HINT, nullAnimationFactory);
    

                        if(OperatingSystemFactory::getInstance().getOperatingSystemInstance().isOverScan())
                        
                                    {
                                    
    Image touchButtonStartHintResource = imageCache.getWithKey(TouchButtonStartResource::getInstance().HINT);;
    
this->add(touchButtonStartResource.HINT, OneRowSpriteIndexedAnimationFactory::createFactory(touchButtonStartHintResource, AnimationBehaviorFactory::getInstance()));
    

                                    }
                                
                        else {
                            this->add(touchButtonStartResource.HINT, nullAnimationFactory);
    

                        }
                            
super.init(level);
    
}


    public: bool isLoadingLevel(int32_t level){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory.LOAD_TOUCH.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isLoadingLevel(level);;
    

                        }
                            
}


    public: bool isFeature(){

                        if(!Features::getInstance().isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

