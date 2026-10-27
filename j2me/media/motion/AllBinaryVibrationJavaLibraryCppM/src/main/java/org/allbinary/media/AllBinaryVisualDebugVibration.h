
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class Font;
class Graphics;
class Anchor;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/AllBinaryVibrationME.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryVisualDebugVibration: public AllBinaryVibrationME, public UpdateMyFontInterface {


            
    public: AllBinaryVisualDebugVibration();
        
    private: DisplayInfoSingleton* displayInfoSingleton;

    private: TimeDelayHelper* timeDelayHelper;

    private: const std::string VIBRATING = "Vibrating";

    private: MyFontProcessor* myFontProcessor;

    private: int32_t anchor;

    private: int32_t width= 0;

    public: void updateMeasurement(Graphics* graphics);

    public: void vibrate(int32_t duration, int32_t type, int32_t volume);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_ALLBINARYVISUALDEBUGVIBRATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/media/AllBinaryVibrationME.h")
#include "org/allbinary/media/AllBinaryVibrationME.h"
#endif

        #endif
    
