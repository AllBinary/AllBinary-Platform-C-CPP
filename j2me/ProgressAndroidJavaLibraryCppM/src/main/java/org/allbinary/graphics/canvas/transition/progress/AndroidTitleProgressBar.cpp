
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_CPP
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/canvas/transition/progress/AndroidTitleProgressBar.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/android/activity/NullProgressActivity.h>

      
#include <org/allbinary/android/activity/ProgressActivityInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
//#include "org/allbinary/graphics/canvas/transition/progress/ShowTitleProgressBarRunnable.h"
//#include "org/allbinary/graphics/canvas/transition/progress/DismissTitleProgressBarRunnable.h"
//#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarPortionSetProgressRunnable.h"
//#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarSetProgressRunnable.h"


AndroidTitleProgressBar::TitleProgressBarSetProgressRunnable::TitleProgressBarSetProgressRunnable(AndroidTitleProgressBar* androidTitleProgressBar){
this->androidTitleProgressBar= androidTitleProgressBar;
    
}


    auto AndroidTitleProgressBar::TitleProgressBarSetProgressRunnable::run() -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    int32_t value = static_cast<int32_t>(this->androidTitleProgressBar->getValue());;
    
this->androidTitleProgressBar->progressActivity->onTitleProgressBarSetProgress(value);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


AndroidTitleProgressBar::TitleProgressBarPortionSetProgressRunnable::TitleProgressBarPortionSetProgressRunnable(AndroidTitleProgressBar* androidTitleProgressBar){
this->androidTitleProgressBar= androidTitleProgressBar;
    
}


    auto AndroidTitleProgressBar::TitleProgressBarPortionSetProgressRunnable::run() -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    int32_t value = static_cast<int32_t>((this->androidTitleProgressBar->getValue() +this->androidTitleProgressBar->getMaxValue() /this->androidTitleProgressBar->portion));;
    
this->androidTitleProgressBar->progressActivity->onTitleProgressBarSetProgress(value);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


AndroidTitleProgressBar::ShowTitleProgressBarRunnable::ShowTitleProgressBarRunnable(AndroidTitleProgressBar* androidTitleProgressBar){
this->androidTitleProgressBar= androidTitleProgressBar;
    
}


    auto AndroidTitleProgressBar::ShowTitleProgressBarRunnable::run() -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    int32_t maxValue = static_cast<int32_t>(this->androidTitleProgressBar->getMaxValue());;
    
this->androidTitleProgressBar->progressActivity->onShowTitleProgressBar(maxValue, false);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


AndroidTitleProgressBar::DismissTitleProgressBarRunnable::DismissTitleProgressBarRunnable(AndroidTitleProgressBar* androidTitleProgressBar){
this->androidTitleProgressBar= androidTitleProgressBar;
    
}


    auto AndroidTitleProgressBar::DismissTitleProgressBarRunnable::run() -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            this->androidTitleProgressBar->progressActivity->onDismissTitleProgressBar();
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


AndroidTitleProgressBar::AndroidTitleProgressBar(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ProgressCanvas(title, backgroundBasicColor, foregroundBasicColor), showTitleProgressBarRunnable(new ShowTitleProgressBarRunnable(this)), dismissTitleProgressBarRunnable(new DismissTitleProgressBarRunnable(this)), progressDialogPortionSetProgressRunnable(new TitleProgressBarPortionSetProgressRunnable(this)), progressDialogSetProgressRunnable(new TitleProgressBarSetProgressRunnable(this)), progressActivity(NullProgressActivity::NULL_PROGRESS_ACTIVITY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AndroidTitleProgressBar::init(ProgressActivityInterface* activity) -> void{
this->progressActivity= activity;
    
}


    auto AndroidTitleProgressBar::isInitialized() -> bool{

                        if(this->progressActivity != NullProgressActivity::NULL_PROGRESS_ACTIVITY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto AndroidTitleProgressBar::start() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->START_METHOD_NAME);
    
ProgressCanvas::start();
    
this->progressActivity->runOnUiThread(this->showTitleProgressBarRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, &e);
    
}

}


    auto AndroidTitleProgressBar::end() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
    
this->progressActivity->runOnUiThread(this->dismissTitleProgressBarRunnable);
    
ProgressCanvas::end();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME, &e);
    
}

}


    auto AndroidTitleProgressBar::addPortion(int32_t value, std::string text, int32_t index) -> void{

        try {
            ProgressCanvas::addPortion(value, text, index);
    
this->portion= value;
    
this->progressActivity->runOnUiThread(this->progressDialogPortionSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->ADD_PORTION, &e);
    
}

}


    auto AndroidTitleProgressBar::addNormalPortion(int32_t value, std::string text) -> void{

        try {
            ProgressCanvas::addNormalPortion(value, text);
    
this->portion= value;
    
this->progressActivity->runOnUiThread(this->progressDialogPortionSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->ADD_PORTION, &e);
    
}

}


    auto AndroidTitleProgressBar::setValue(int32_t value) -> void{

        try {
            ProgressCanvas::setValue(value);
    
this->progressActivity->runOnUiThread(this->progressDialogSetProgressRunnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "setValue", &e);
    
}

}


    auto AndroidTitleProgressBar::waitUntilDisplayed() -> void{
}


    auto AndroidTitleProgressBar::paint(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_CPP
