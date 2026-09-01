
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SoundStrings.h"
#include "SoundsFactoryInterface.h"
#include "Sound.h"

class Sounds
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const SoundStrings soundStrings = SoundStrings::getInstance();

    private: SoundsFactoryInterface soundsFactoryInterface;

public: Sounds(SoundsFactoryInterface soundsFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void stopAll();

                //@Throws(Exception.constructor)
            
    public: void closeAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H
