
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PreLogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Sound;
class NoSound;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerQueue
            : public virtual Object
         {

    private: static inline const std::string TOTAL = "Sounds In Queue: ";

    private: CommonStrings* commonStrings;

    private: BasicArrayList* list;

    private: int32_t max;

public: PlayerQueue(int32_t max);

    public: void add(Sound* sound);

    public: bool process();

    public: void clear();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif
#if __has_include("org/allbinary/media/audio/NoSound.h")
#include "org/allbinary/media/audio/NoSound.h"
#endif

        #endif
    
