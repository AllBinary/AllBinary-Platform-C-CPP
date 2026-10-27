
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Player;
class CommonStrings;
class StringMaker;
class LogUtil;
class ProgressCanvas;
class ProgressCanvasFactory;
class CommonLabels;
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SoundStrings;
class SoundsFactoryInterface;
class Sound;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Sounds
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: SoundStrings* soundStrings;

    private: SoundsFactoryInterface* soundsFactoryInterface;

public: Sounds(SoundsFactoryInterface* soundsFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void stopAll();

                //@Throws(Exception.constructor)
            
    public: void closeAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H_COMPLETE
        #if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include("org/allbinary/media/audio/SoundStrings.h")
#include "org/allbinary/media/audio/SoundStrings.h"
#endif
#if __has_include("org/allbinary/media/audio/SoundsFactoryInterface.h")
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

        #endif
    
