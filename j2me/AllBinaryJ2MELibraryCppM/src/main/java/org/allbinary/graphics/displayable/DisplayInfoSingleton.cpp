
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

class DisplayInfoSingleton
            : public Object
         {

    private: static DisplayInfoSingleton* SINGLETON() { static std::unique_ptr<DisplayInfoSingleton> value(new DisplayInfoSingleton()); return value.get(); }

    public: static DisplayInfoSingleton* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayInfoSingleton::SINGLETON();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonLabels* commonLabels = CommonLabels::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: const std::string ORIENTATION = "ORIENTATION";

    public: const std::string ADJUSTING_FOR_SCALING_IN_PORTRAIT = "Adjusting for Scaling in portrait display ratio: ";

    public: const std::string ADJUSTING_FOR_SCALING_IN_LANDSCAPE = "Adjusting for Scaling in landscape display ratio: ";

    private: std::vector<int32_t> last = std::vector<int32_t>(4);

    private: std::vector<int32_t> lastHalf = std::vector<int32_t>(4);

    private: std::vector<int32_t> full = std::vector<int32_t>(4);

    private: int32_t top= 0;

    private: int32_t left= 0;

    private: int32_t xOffset= 0;

    private: int32_t yOffset= 0;

    private: float scaleLargestTo= 0.0;

    public: const int32_t WIDTH = 0;

    public: const int32_t HEIGHT = 1;

    public: const int32_t CUSTOM_WIDTH = 2;

    public: const int32_t CUSTOM_HEIGHT = 3;

    private: BaseScalable* scalableListener = new BaseScalable();

    private: float displayRatio= 0.0;

    private: float ratio = 1.0;

private: DisplayInfoSingleton(){

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


    public: std::vector<int32_t> getLastHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf;
    
}


    public: std::vector<int32_t> getLast(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last;
    
}


    public: std::vector<int32_t> getFull(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->full;
    
}


    public: float getScaleLargestTo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scaleLargestTo;
    
}


    public: void setScaleLargestTo(int32_t scaleLargestTo){
this->scaleLargestTo= scaleLargestTo;
    
}


    private: const std::string SET_LAST_SIZE_METHOD_NAME = "setLastSize";

    private: const std::string FULL_WIDTH = " FullWidth: ";

    private: const std::string FULL_HEIGHT = " FullHeight: ";

    private: const std::string LAST_WIDTH = "LastWidth: ";

    private: const std::string LAST_HEIGHT = " LastHeight: ";

    private: const std::string PORTRAIT = "Portrait";

    private: const std::string LANDSCAPE = "Landscape";

    public: void setLastSize(int32_t aLastWidth, int32_t aLastHeight, std::string reason){

                        if(this->full[this->WIDTH] != aLastWidth || this->full[this->HEIGHT] != aLastHeight)
                        
                                    {
                                    this->setLastSizeForce(aLastWidth, aLastHeight, reason);
    

                                    }
                                
}


    private: void setLastSizeForce(int32_t aLastWidth, int32_t aLastHeight, std::string reason){

    StringMaker* stringMaker = new StringMaker();;
    
this->logUtil->putF(stringMaker->append(CommonLabels::getInstance()->START_LABEL)->append(reason)->toString(), this, this->SET_LAST_SIZE_METHOD_NAME);
    

    int32_t aFullWidth = aLastWidth;;
    

    int32_t aFullHeight = aLastHeight;;
    
stringMaker->delete(0, stringMaker->length());
    
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
    
stringMaker->delete(0, stringMaker->length());
    
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
    
stringMaker->delete(0, stringMaker->length());
    
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
                                
stringMaker->delete(0, stringMaker->length());
    
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


    public: bool isPortraitWH(int32_t lastWidth, int32_t lastHeight){

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


    public: bool isPortrait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isPortraitWH(this->last[this->WIDTH], this->last[this->HEIGHT]);;
    
}


    public: DisplayChangeEvent* displayChangeEvent = new DisplayChangeEvent(this);

    private: const std::string FIRE_METHOD_NAME = "fire";

    private: const std::string REASON = "reason: ";

    private: const std::string UPDATE_FROM_ORIENTATION_CHANGE = "Updating from Orientation Change ";

    private: BasicArrayList* list = new BasicArrayListD();

    public: void add(std::string reason){

    StringMaker* stringMaker = new StringMaker();;
    
this->logUtil->putF(stringMaker->append(this->REASON)->append(reason)->toString(), this, this->FIRE_METHOD_NAME);
    
stringMaker->delete(0, stringMaker->length());
    
this->logUtil->putF(this->toStringAppend(stringMaker), this, this->FIRE_METHOD_NAME);
    
this->list->add(reason);
    
}


    public: void process(){

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


    public: void processForced(){

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


    public: void update(Displayable* displayable, std::string reason){

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
                                    stringMaker->delete(0, stringMaker->length());
    
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
    
stringMaker->delete(0, stringMaker->length());
    
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
    
stringMaker->delete(0, stringMaker->length());
    
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
                                
stringMaker->delete(0, stringMaker->length());
    
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


    private: const std::string DISPLAY_INFO = "Display Info: ";

    private: const std::string FULL = "full";

    private: const std::string LAST = "last";

    private: const std::string LAST_HALF = "lastHalf";

    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toStringAppend(stringBuffer);;
    
}


    public: std::string toStringAppend(StringMaker* stringBuffer){
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


    public: int32_t getTop(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->top;
    
}


    public: int32_t getLeft(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->left;
    
}


    public: int32_t getLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->WIDTH];
    
}


    public: int32_t getLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->HEIGHT];
    
}


    public: int32_t getLastHalfWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf[this->WIDTH];
    
}


    public: int32_t getLastHalfHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastHalf[this->HEIGHT];
    
}


    public: int32_t getCustomLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->CUSTOM_WIDTH];
    
}


    public: int32_t getCustomLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->CUSTOM_HEIGHT];
    
}


    public: int32_t getRawLastWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->WIDTH];
    
}


    public: int32_t getRawLastHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->last[this->HEIGHT];
    
}


    public: void setCustom(int32_t width, int32_t height){
this->last[this->CUSTOM_WIDTH]= width;
    
this->lastHalf[this->CUSTOM_WIDTH]= (this->last[this->CUSTOM_WIDTH]>>1);
    
this->last[this->CUSTOM_HEIGHT]= height;
    
this->lastHalf[this->CUSTOM_HEIGHT]= (this->last[this->CUSTOM_HEIGHT]>>1);
    
}


    public: void setScalableListener(BaseScalable* scalableListener){
this->scalableListener= scalableListener;
    
}


    public: ScalableListener* getScalableListener(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scalableListener;
    
}


    public: float getRatio(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ratio;
    
}


    public: float getDisplayRatio(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayRatio;
    
}


    public: void setOffset(int32_t left, int32_t top){
this->left= left;
    
}


    public: int32_t getxOffset(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xOffset;
    
}


    public: int32_t getyOffset(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->yOffset;
    
}


};

            

