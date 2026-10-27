
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
        



        #ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_CPP
        #define ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/AllBinaryVisualDebugVibration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/AllBinaryVibrationME.h"


AllBinaryVisualDebugVibration::AllBinaryVisualDebugVibration() : displayInfoSingleton(DisplayInfoSingleton::getInstance()), timeDelayHelper(new TimeDelayHelper(Integer.MAX_VALUE)), myFontProcessor(new UpdateMyFontProcessor(this)), anchor(Anchor::TOP_LEFT) {
        }
        
    auto AllBinaryVisualDebugVibration::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->width= font->stringWidth(this->VIBRATING);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto AllBinaryVisualDebugVibration::vibrate(int32_t duration, int32_t type, int32_t volume) -> void{
this->timeDelayHelper->delay= duration;
    
}


    auto AllBinaryVisualDebugVibration::paint(Graphics* graphics) -> void{

                        if(this->timeDelayHelper->isTimeTNT())
                        
                                    {
                                    this->timeDelayHelper->delay= Integer.MAX_VALUE;
    
this->myFontProcessor->process(graphics);
    
graphics->drawString(this->VIBRATING, this->displayInfoSingleton->getLastHalfWidth() -(width>>1), 0, this->anchor);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_CPP
