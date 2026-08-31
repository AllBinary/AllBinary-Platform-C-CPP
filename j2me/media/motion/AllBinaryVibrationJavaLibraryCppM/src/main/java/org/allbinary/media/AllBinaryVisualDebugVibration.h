
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

            #include "../../../java/lang/Integer.h"
        
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

class AllBinaryVisualDebugVibration: public AllBinaryVibrationME: public UpdateMyFontInterface {
        

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(Integer.MAX_VALUE);

    private: const VIBRATING: string = "Vibrating";

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: width: int32_t= 0;

    public updateMeasurement(Graphics graphics);

    public vibrate(int32_t duration, int32_t type, int32_t volume);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H
