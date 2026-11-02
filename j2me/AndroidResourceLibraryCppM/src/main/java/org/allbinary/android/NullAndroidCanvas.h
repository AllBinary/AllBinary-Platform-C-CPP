
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class MediaPlayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullAndroidCanvas
            : public virtual Object
         {

    private: static Canvas* NULL_CANVAS_owner();
    public: static Canvas* NULL_CANVAS;

    private: static MediaPlayer* NULL_MEDIA_PLAYER_owner();
    public: static MediaPlayer* NULL_MEDIA_PLAYER;


            
    public: NullAndroidCanvas();
        
};

            


        #endif //ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_NULLANDROIDCANVAS_H_COMPLETE
        #if __has_include(<android/graphics/Canvas.h>)
#include <android/graphics/Canvas.h>
#endif
#if __has_include(<android/media/MediaPlayer.h>)
#include <android/media/MediaPlayer.h>
#endif

        #endif
    
