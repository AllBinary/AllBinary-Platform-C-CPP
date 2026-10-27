
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/BaseScalable.h"
#include "org/allbinary/graphics/displayable/ScalableListener.h"

auto DisplayInfoSingleton::SINGLETON_owner() -> DisplayInfoSingleton* { static std::unique_ptr<DisplayInfoSingleton> value(new DisplayInfoSingleton()); return value.get(); }
DisplayInfoSingleton* DisplayInfoSingleton::SINGLETON = DisplayInfoSingleton::SINGLETON_owner();

    auto DisplayInfoSingleton::getInstance() -> DisplayInfoSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayInfoSingleton::SINGLETON;
    
}


DisplayInfoSingleton::DisplayInfoSingleton() : logUtil(LogUtil::getInstance()), commonLabels(CommonLabels::getInstance()), commonSeps(CommonSeps::getInstance()), commonStrings(CommonStrings::getInstance()), last(std::vector<int32_t>(4)), lastHalf(std::vector<int32_t>(4)), full(std::vector<int32_t>(4)), scalableListener(new BaseScalable()), displayChangeEvent(new DisplayChangeEvent(this)), list(new BasicArrayListD()){

    int32_t size = this->last.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->last[index]= 0;
    
this->lastHalf[index]= 0;
    
this->full[index]= 0;
    
}


                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    this->scaleLargestTo= 640;
    

                                    }
                                
                        else {
                            this->scaleLargestTo= 1080;
    

                        }
                            
}


    auto DisplayInfoSingleton::getLastHalf() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf;
    
}


    auto DisplayInfoSingleton::getLast() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last;
    
}


    auto DisplayInfoSingleton::getFull() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->full;
    
}


    auto DisplayInfoSingleton::getScaleLargestTo() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scaleLargestTo;
    
}


    auto DisplayInfoSingleton::setScaleLargestTo(int32_t scaleLargestTo) -> void{
this->scaleLargestTo= scaleLargestTo;
    
}


    auto DisplayInfoSingleton::setLastSize(int32_t aLastWidth, int32_t aLastHeight, std::string reason) -> void{

                        if(this->full[this->WIDTH] != aLastWidth || this->full[this->HEIGHT] != aLastHeight)
                        
                                    {
                                    this->setLastSizeForce(aLastWidth, aLastHeight, reason);
    

                                    }
                                
}


    auto DisplayInfoSingleton::setLastSizeForce(int32_t aLastWidth, int32_t aLastHeight, std::string reason) -> void{

    StringMaker* stringMaker = new StringMaker();;
    
this->logUtil->putF(stringMaker->append(CommonLabels::getInstance()->START_LABEL)->append(reason)->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    

    int32_t aFullWidth = aLastWidth;;
    

    int32_t aFullHeight = aLastHeight;;
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->FULL_WIDTH)->appendint(aFullWidth)->append(this->FULL_HEIGHT)->appendint(aFullHeight)->append(this->toString())->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

                        if(operatingSystemInterface->isOverScan())
                        
                                    {
                                    aLastWidth= aLastWidth *operatingSystemInterface->getOverScanXPercent() /100;
    
aLastHeight= aLastHeight *operatingSystemInterface->getOverScanYPercent() /100;
    

                                    }
                                

                        if(operatingSystemInterface->isScalable())
                        
                                    {
                                    
                        if(this->isPortraitWH(aLastWidth, aLastHeight))
                        
                                    {
                                    
                        if(aLastHeight > this->scaleLargestTo)
                        
                                    {
                                    this->displayRatio= this->scaleLargestTo /aLastHeight;
    
this->ratio= aLastHeight /this->scaleLargestTo;
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->ADJUSTING_FOR_SCALING_IN_PORTRAIT)->appendfloat(this->displayRatio)->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this->displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this->displayRatio));
    
this->scalableListener->scale(this->ratio);
    

                                    }
                                
                        else {
                            this->ratio= 1.0;
    
this->scalableListener->scale(this->ratio);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(aLastWidth > this->scaleLargestTo)
                        
                                    {
                                    this->displayRatio= this->scaleLargestTo /aLastWidth;
    
this->ratio= aLastWidth /this->scaleLargestTo;
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->ADJUSTING_FOR_SCALING_IN_LANDSCAPE)->appendfloat(this->displayRatio)->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this->displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this->displayRatio));
    
this->scalableListener->scale(this->ratio);
    

                                    }
                                
                        else {
                            this->ratio= 1.0;
    
this->scalableListener->scale(this->ratio);
    

                        }
                            

                        }
                            

                                    }
                                
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->LAST_WIDTH)->appendint(aLastWidth)->append(this->LAST_HEIGHT)->appendint(aLastHeight)->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    
this->xOffset= aFullWidth -aLastWidth;
    
this->yOffset= aFullHeight -aLastHeight;
    
this->left= this->scalableListener->getLeft(this->xOffset);
    
this->top= this->scalableListener->getTop(this->yOffset);
    
this->full[this->WIDTH]= aFullWidth;
    
this->full[this->HEIGHT]= aFullHeight;
    
this->last[this->WIDTH]= aLastWidth;
    
this->lastHalf[this->WIDTH]= (this->last[this->WIDTH]>>1);
    
this->last[this->HEIGHT]= aLastHeight;
    
this->lastHalf[this->HEIGHT]= (this->last[this->HEIGHT]>>1);
    
SWTJOGLProcessor::getInstance()->setCustom(aLastWidth, aLastHeight, this->ratio);
    
this->add(this->SET_LAST_SIZE_METHOD_NAME);
    
}


    auto DisplayInfoSingleton::isPortraitWH(int32_t lastWidth, int32_t lastHeight) -> bool{

                        if(lastHeight > lastWidth)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto DisplayInfoSingleton::isPortrait() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isPortraitWH(this->last[this->WIDTH], this->last[this->HEIGHT]);;
    
}


    auto DisplayInfoSingleton::add(std::string reason) -> void{

    StringMaker* stringMaker = new StringMaker();;
    
this->logUtil->putF(stringMaker->append(this->REASON)->append(reason)->toString(), this, this->FIRE_METHOD_NAME);
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(this->toStringAppend(stringMaker), this, this->FIRE_METHOD_NAME);
    
this->list->add(reason);
    
}


    auto DisplayInfoSingleton::process() -> void{

        try {
            
                        if(this->list->size() > 0)
                        
                                    {
                                    this->processForced();
    

                                    }
                                
this->list->clear();
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, this->FIRE_METHOD_NAME, &e);
    
}

}


    auto DisplayInfoSingleton::processForced() -> void{

        try {
            
    SWTJOGLProcessor* swtJOGLProcessor = SWTJOGLProcessor::getInstance();;
    
swtJOGLProcessor->clear();
    
DisplayChangeEventHandler::getInstance()->fireEvent(this->displayChangeEvent);
    
LastDisplayChangeEventHandler::getInstance()->fireEvent(this->displayChangeEvent);
    
swtJOGLProcessor->onSurfaceChanged();
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, this->FIRE_METHOD_NAME, &e);
    
}

}


    auto DisplayInfoSingleton::update(Displayable* displayable, std::string reason) -> void{

    int32_t aLastWidth = displayable->getWidth();;
    

    int32_t aLastHeight = displayable->getHeight();;
    

    int32_t aFullWidth = aLastWidth;;
    

    int32_t aFullHeight = aLastHeight;;
    

    StringMaker* stringMaker = new StringMaker();;
    
this->logUtil->putF(stringMaker->append(CommonLabels::getInstance()->START_LABEL)->append(reason)->append(this->LAST_WIDTH)->appendint(aLastWidth)->append(this->LAST_HEIGHT)->appendint(aLastHeight)->append(this->commonSeps->SPACE)->append(this->toString())->toString(), this, this->commonStrings->UPDATE);
    

                        if(aLastWidth > 0 && aLastHeight > 0)
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(!features->isDefault(openGLFeatureFactory->OPENGL) || this->last[this->WIDTH] != aLastWidth || this->last[this->HEIGHT] != aLastHeight)
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->UPDATE_FROM_ORIENTATION_CHANGE)->toString(), this, this->commonStrings->UPDATE);
    

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

                        if(operatingSystemInterface->isOverScan())
                        
                                    {
                                    aLastWidth= aLastWidth *operatingSystemInterface->getOverScanXPercent() /100;
    
aLastHeight= aLastHeight *operatingSystemInterface->getOverScanYPercent() /100;
    

                                    }
                                

                        if(operatingSystemInterface->isScalable())
                        
                                    {
                                    
                        if(this->isPortraitWH(aLastWidth, aLastHeight))
                        
                                    {
                                    
                        if(aLastHeight > this->scaleLargestTo)
                        
                                    {
                                    this->displayRatio= this->scaleLargestTo /aLastHeight;
    
this->ratio= aLastHeight /this->scaleLargestTo;
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->ADJUSTING_FOR_SCALING_IN_PORTRAIT)->appendfloat(this->displayRatio)->toString(), this, this->commonStrings->UPDATE);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this->displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this->displayRatio));
    
this->scalableListener->scale(this->ratio);
    

                                    }
                                
                        else {
                            this->ratio= 1.0;
    
this->scalableListener->scale(this->ratio);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(aLastWidth > this->scaleLargestTo)
                        
                                    {
                                    this->displayRatio= this->scaleLargestTo /aLastWidth;
    
this->ratio= aLastWidth /this->scaleLargestTo;
    
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->ADJUSTING_FOR_SCALING_IN_LANDSCAPE)->appendfloat(this->displayRatio)->toString(), this, this->commonStrings->UPDATE);
    
aLastWidth= static_cast<int32_t>((aLastWidth *this->displayRatio));
    
aLastHeight= static_cast<int32_t>((aLastHeight *this->displayRatio));
    
this->scalableListener->scale(this->ratio);
    

                                    }
                                
                        else {
                            this->ratio= 1.0;
    
this->scalableListener->scale(this->ratio);
    

                        }
                            

                        }
                            

                                    }
                                
stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->UPDATE_FROM_ORIENTATION_CHANGE)->append(this->LAST_WIDTH)->appendint(aLastWidth)->append(this->LAST_HEIGHT)->appendint(aLastHeight)->toString(), this, this->commonStrings->UPDATE);
    
this->xOffset= aFullWidth -aLastWidth;
    
this->yOffset= aFullHeight -aLastHeight;
    
this->left= this->scalableListener->getLeft(this->xOffset);
    
this->top= this->scalableListener->getTop(this->yOffset);
    
this->full[this->WIDTH]= aFullWidth;
    
this->full[this->HEIGHT]= aFullHeight;
    
this->last[this->WIDTH]= aLastWidth;
    
this->lastHalf[this->WIDTH]= (this->last[this->WIDTH]>>1);
    
this->last[this->HEIGHT]= aLastHeight;
    
this->lastHalf[this->HEIGHT]= (this->last[this->HEIGHT]>>1);
    
SWTJOGLProcessor::getInstance()->setCustom(aLastWidth, aLastHeight, this->ratio);
    
this->add(this->commonStrings->UPDATE);
    

                                    }
                                

                                    }
                                
}


    auto DisplayInfoSingleton::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toStringAppend(stringBuffer);;
    
}


    auto DisplayInfoSingleton::toStringAppend(StringMaker* stringBuffer) -> std::string{
stringBuffer->append(this->DISPLAY_INFO);
    
stringBuffer->append(this->FULL);
    
stringBuffer->append(this->commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->full[this->WIDTH]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->FULL);
    
stringBuffer->append(this->commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->full[this->HEIGHT]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->LAST);
    
stringBuffer->append(this->commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->last[this->WIDTH]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->LAST);
    
stringBuffer->append(this->commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->last[this->HEIGHT]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->LAST_HALF);
    
stringBuffer->append(this->commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->lastHalf[this->WIDTH]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->LAST_HALF);
    
stringBuffer->append(this->commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->lastHalf[this->HEIGHT]);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->isPortrait()
                        ?       
                                this->PORTRAIT
                                :

                            this->LANDSCAPE;

    );
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto DisplayInfoSingleton::getTop() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->top;
    
}


    auto DisplayInfoSingleton::getLeft() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->left;
    
}


    auto DisplayInfoSingleton::getLastWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->WIDTH];
    
}


    auto DisplayInfoSingleton::getLastHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->HEIGHT];
    
}


    auto DisplayInfoSingleton::getLastHalfWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf[this->WIDTH];
    
}


    auto DisplayInfoSingleton::getLastHalfHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf[this->HEIGHT];
    
}


    auto DisplayInfoSingleton::getCustomLastWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->CUSTOM_WIDTH];
    
}


    auto DisplayInfoSingleton::getCustomLastHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->CUSTOM_HEIGHT];
    
}


    auto DisplayInfoSingleton::getRawLastWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->WIDTH];
    
}


    auto DisplayInfoSingleton::getRawLastHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->HEIGHT];
    
}


    auto DisplayInfoSingleton::setCustom(int32_t width, int32_t height) -> void{
this->last[this->CUSTOM_WIDTH]= width;
    
this->lastHalf[this->CUSTOM_WIDTH]= (this->last[this->CUSTOM_WIDTH]>>1);
    
this->last[this->CUSTOM_HEIGHT]= height;
    
this->lastHalf[this->CUSTOM_HEIGHT]= (this->last[this->CUSTOM_HEIGHT]>>1);
    
}


    auto DisplayInfoSingleton::setScalableListener(BaseScalable* scalableListener) -> void{
this->scalableListener= scalableListener;
    
}


    auto DisplayInfoSingleton::getScalableListener() -> ScalableListener*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scalableListener;
    
}


    auto DisplayInfoSingleton::getRatio() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ratio;
    
}


    auto DisplayInfoSingleton::getDisplayRatio() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayRatio;
    
}


    auto DisplayInfoSingleton::setOffset(int32_t left, int32_t top) -> void{
this->left= left;
    
}


    auto DisplayInfoSingleton::getxOffset() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xOffset;
    
}


    auto DisplayInfoSingleton::getyOffset() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->yOffset;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_CPP
