
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

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <android/app/Activity.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/image/ImageAnimation.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ShowTitleProgressBarRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/DismissTitleProgressBarRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarSetProgressRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarPortionSetProgressRunnable.h"

class AndroidBasicTitleProgressBar: public ProgressCanvas, public DisplayChangeEventListener {

    public: static inline const std::string RESOURCE = "ProgressImage";

    private: static inline int32_t background= 0;

    public: static void setBackgroundResource(int32_t background){
AndroidBasicTitleProgressBar::background= background;
    
}


    private: ARunnable* showTitleProgressBarRunnable = NullRunnable::getInstance();

    private: ARunnable* dismissTitleProgressBarRunnable = NullRunnable::getInstance();

    private: ARunnable* titleProgressDialogPortionSetProgressRunnable = NullRunnable::getInstance();

    private: ARunnable* titleProgressDialogSetProgressRunnable = NullRunnable::getInstance();

    private: Activity* midletActivity = AndroidUtil::NULL_ACTIVITY;

    private: int32_t portion = 0;

    private: const std::vector<Image*> IMAGE = std::vector<Image*>(4);

    private: Image* image = NullImage::NULL_IMAGE;

    private: Animation* animation = NullAnimationFactory::getFactoryInstance()->getInstance(0);

: AndroidBasicTitleProgressBar(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ProgressCanvas(title, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
DisplayChangeEventHandler::getInstance()->addListenerInterface(this);
    

    int32_t size = this->IMAGE.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->IMAGE[index]= NullImage::NULL_IMAGE;
    
}

}


    private: void init(){

        try {
            
                        if(AndroidBasicTitleProgressBar::background != 0)
                        
                                    {
                                    ResourceUtil::getInstance()->addResource(AndroidBasicTitleProgressBar::RESOURCE, int32_t(AndroidBasicTitleProgressBar::background));
    
GameFeatureImageCacheFactory::init();
    
this->image= ImageCacheFactory::getInstance()->getWithKey(AndroidBasicTitleProgressBar::RESOURCE);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.INIT, &e);
    
}

}


    public: void initActivity(Activity* activity){

        try {
            
                        if(this->midletActivity != activity)
                        
                                    {
                                    this->midletActivity= activity;
    
this->showTitleProgressBarRunnable= new ShowTitleProgressBarRunnable(this->midletActivity, this);
    
this->dismissTitleProgressBarRunnable= new DismissTitleProgressBarRunnable(this->midletActivity, this);
    
this->titleProgressDialogSetProgressRunnable= new TitleProgressBarSetProgressRunnable(this->midletActivity, this);
    
this->titleProgressDialogPortionSetProgressRunnable= new TitleProgressBarPortionSetProgressRunnable(this->midletActivity, this);
    
this->loadProgressImages();
    

                                    }
                                
this->updateCurrent();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.INIT, &e);
    
}

}


    private: void updateCurrent(){

        try {
            
                        if(!this->isBackground())
                        
                                    {
                                    this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    

                                    }
                                
                             else 
                        if(AndroidBasicTitleProgressBar::background != 0)
                        
                                    {
                                    
    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    Image* currentImage;;
    

                        if(displayInfo->isPortrait())
                        
                                    {
                                    currentImage= this->getImage(0);
    

                                    }
                                
                        else {
                            currentImage= this->getImage(2);
    

                        }
                            

                        if(currentImage == 
                                    nullptr
                                )
                        
                                    {
                                    this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    

                                    }
                                
                        else {
                            this->animation= new ImageAnimation(currentImage, AnimationBehavior::getInstance());
    

                        }
                            

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.UPDATE, &e);
    
}

}


    public: void onEvent(AllBinaryEventObject* eventObject){
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent){

        try {
            this->loadProgressImages();
    
this->updateCurrent();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION_LABEL +ExceptionUtil::getInstance()->getStackTrace(&e), this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT);
    
this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    
}

}


    private: void loadProgressImages(){

        try {
            
    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    int32_t lastWidth = displayInfo->getLastWidth();;
    

    int32_t lastHeight = displayInfo->getLastHeight();;
    

                        if(displayInfo->isPortraitWH(lastWidth, lastHeight))
                        
                                    {
                                    this->setImages(0, lastWidth, lastHeight);
    

                                    }
                                
                        else {
                            this->setImages(2, lastWidth, lastHeight);
    

                        }
                            

                //: 
} catch(IllegalArgumentException& e) 
            {
this->logUtil.putF("IllegalArgumentException " +ExceptionUtil::getInstance()->getStackTrace(&e), this, "loadProgressImages");
    
this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION_LABEL +ExceptionUtil::getInstance()->getStackTrace(&e), this, "loadProgressImages");
    
this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    
}

}


    public: bool isInitialized(){

                        if(this->midletActivity != AndroidUtil::NULL_ACTIVITY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: void start(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.START_METHOD_NAME);
    
super.start();
    
this->midletActivity->runOnUiThread(this->showTitleProgressBarRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.START_METHOD_NAME, &e);
    
}

}


    public: void end(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.END_METHOD_NAME);
    
this->midletActivity->runOnUiThread(this->dismissTitleProgressBarRunnable);
    
super.end();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.END_METHOD_NAME, &e);
    
}

}


    public: void addEarlyPortion(int32_t value, std::string text, int32_t index){

        try {
            this->portion= value;
    
super.addEarlyPortion(value, text, index);
    

                        if(this->midletActivity != AndroidUtil::NULL_ACTIVITY)
                        
                                    {
                                    this->midletActivity->runOnUiThread(this->titleProgressDialogPortionSetProgressRunnable);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->ADD_PORTION, &e);
    
}

}


    public: void addPortion(int32_t value, std::string text, int32_t index){

        try {
            this->portion= value;
    
super.addPortion(value, text, index);
    
this->midletActivity->runOnUiThread(this->titleProgressDialogPortionSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->ADD_PORTION, &e);
    
}

}


    public: void addNormalPortion(int32_t value, std::string text){

        try {
            this->portion= value;
    
super.addNormalPortion(value, text);
    
this->midletActivity->runOnUiThread(this->titleProgressDialogPortionSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->ADD_PORTION, &e);
    
}

}


    protected: void setValue(int32_t value){

        try {
            super.setValue(value);
    
this->midletActivity->runOnUiThread(this->titleProgressDialogSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "setValue", &e);
    
}

}


    public: void waitUntilDisplayed(){
}


                //@Throws(Exception.constructor)
            
    private: void setImages(int32_t index, int32_t lastWidth, int32_t lastHeight){

    Image* image = this->image;;
    

                        if(image != NullImage::NULL_IMAGE)
                        
                                    {
                                    
                        if(Features::getInstance()->isFeature(MainFeatureFactory::getInstance()->FULL_SCREEN))
                        
                                    {
                                    
                        if(this->IMAGE[index] == NullImage::NULL_IMAGE)
                        
                                    {
                                    this->IMAGE[index]= ImageScaleUtil::getInstance()->createImage2(ImageCacheFactory::getInstance(), image, lastWidth, image->getWidth(), lastHeight -20, image->getHeight(), false);
    

                                    }
                                

                                    }
                                
                        else {
                            
    int32_t nextIndex = index +1;;
    

                        if(this->IMAGE[nextIndex] == NullImage::NULL_IMAGE)
                        
                                    {
                                    this->IMAGE[nextIndex]= ImageScaleUtil::getInstance()->createImage2(ImageCacheFactory::getInstance(), image, lastWidth, image->getWidth(), lastHeight -28, image->getHeight(), false);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void initOpenGL(Graphics* graphics){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.INIT);
    
this->image= GameFeatureImageCacheFactory::getInstance()->getWithKey(AndroidBasicTitleProgressBar::RESOURCE);
    

    PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = this->IMAGE.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->IMAGE[index] != NullImage::NULL_IMAGE)
                        
                                    {
                                    this->IMAGE[index]= preResourceImageUtil->encapsulate(this->IMAGE[index]);
    

                                    }
                                
}

this->updateCurrent();
    
}


                //@Throws(Exception.constructor)
            
    public: void update(Graphics* graphics){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.UPDATE);
    
this->initOpenGL(graphics);
    
this->image= GameFeatureImageCacheFactory::getInstance()->getWithKey(AndroidBasicTitleProgressBar::RESOURCE);
    

    PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = this->IMAGE.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->IMAGE[index] != NullImage::NULL_IMAGE)
                        
                                    {
                                    preResourceImageUtil->update(graphics, this->IMAGE[index]);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: Image* getImage(int32_t index){

    Image* image = NullImage::NULL_IMAGE;;
    

                        if(Features::getInstance()->isFeature(MainFeatureFactory::getInstance()->FULL_SCREEN))
                        
                                    {
                                    image= this->IMAGE[index];
    

                                    }
                                
                        else {
                            image= this->IMAGE[index +1];
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public: void paint2(Graphics* graphics){

        try {
            this->animation->paintXY(graphics, 0, 20);
    
super.paint2(graphics);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.PAINT, &e);
    
}

}


    protected: void setBackground(bool background){
super.setBackground(background);
    
this->updateCurrent();
    
}


    protected: void setPortion(int32_t portion){
this->portion= portion;
    
}


    protected: int32_t getPortion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->portion;
    
}


};

            

