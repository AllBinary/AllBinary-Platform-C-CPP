
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H
        #define ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/graphics/Canvas.h>

      
#include <android/media/MediaPlayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullAndroidCanvas
            : public Object
         {

    public: static Canvas* NULL_CANVAS() { static std::unique_ptr<Canvas> value(new Canvas()); return value.get(); }

    public: static MediaPlayer* NULL_MEDIA_PLAYER() { static std::unique_ptr<MediaPlayer> value(new MediaPlayer()); return value.get(); }

};

            


        #endif //ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H
