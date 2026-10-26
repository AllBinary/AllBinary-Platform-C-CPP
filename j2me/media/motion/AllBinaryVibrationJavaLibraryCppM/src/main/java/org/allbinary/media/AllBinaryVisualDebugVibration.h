
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
        



        #ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
        #define ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H

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
        #include "AllBinaryVibrationME.h"

class AllBinaryVisualDebugVibration: public AllBinaryVibrationME, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(Integer::MAX_VALUE);

    private: const std::string VIBRATING = "Vibrating";

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t width= 0;

    public: void updateMeasurement(Graphics graphics);

    public: void vibrate(int32_t duration, int32_t type, int32_t volume);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
