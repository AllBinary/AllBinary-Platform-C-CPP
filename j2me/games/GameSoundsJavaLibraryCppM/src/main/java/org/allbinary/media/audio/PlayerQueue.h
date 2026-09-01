
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sound.h"
#include "NoSound.h"

class PlayerQueue
            : public Object
         {

    private: static const std::string TOTAL = "Sounds In Queue: ";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const BasicArrayList list = BasicArrayListD();

    private: int32_t max;

: PlayerQueue(int32_t max);

    public: void add(Sound sound);

    public: bool process();

    public: void clear();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H
