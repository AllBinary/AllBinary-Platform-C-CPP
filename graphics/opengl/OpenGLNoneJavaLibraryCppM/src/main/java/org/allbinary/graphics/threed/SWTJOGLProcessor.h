
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
class Font;
class MIDlet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RatioProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //OpenGLNone
class SWTJOGLProcessor
            : public virtual Object
        , public Runnable {

    private: static SWTJOGLProcessor* instance_owner();
    private: static SWTJOGLProcessor* instance;

    public: static SWTJOGLProcessor* getInstance();


            
    public: SWTJOGLProcessor();
        
    public: void init(Object* display, Object* comp);

    public: bool isHolderCreated();

    public: void setRenderer(Object* renderer);
    public: void setRenderer(const std::string& renderer) { return setRenderer(JavaString::box(renderer)); }

    public: bool isJOGL();

    public: void createSurface();

    public: void onSurfaceCreated();

    public: void onSurfaceChangedForEvent(Object* event);
    public: void onSurfaceChangedForEvent(const std::string& event) { return onSurfaceChangedForEvent(JavaString::box(event)); }

    public: void onSurfaceChanged();

    public: void onSurfaceChangedWH(int32_t width, int32_t height);

    public: void addListener();

    public: void addListeners(MIDlet* midlet);

    public: void run();

    public: void clear();

    public: void setCustom(int32_t width, int32_t height, float ratio);

    public: void setRatioProcessor(RatioProcessor* ratioProcessor);

    public: bool isPortraitRatioProcessor();

    public: int32_t charWidth(Font* font, char ch);

    public: int32_t charsWidth(Font* font, std::vector<char> ch, int32_t offset, int32_t length);

    public: int32_t stringWidth(Font* font, std::string str);

    public: int32_t substringWidth(Font* font, std::string str, int32_t offset, int32_t len);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include("org/allbinary/graphics/threed/RatioProcessor.h")
#include "org/allbinary/graphics/threed/RatioProcessor.h"
#endif

        #endif
    
