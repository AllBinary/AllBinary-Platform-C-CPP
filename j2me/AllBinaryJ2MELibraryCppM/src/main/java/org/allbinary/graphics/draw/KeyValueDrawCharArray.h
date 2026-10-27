
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Graphics;
class CharArrayFactory;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyValueDrawCharArray
            : public virtual Object
        , public UpdateMyFontInterface {

    private: MyFontProcessor* myFontProcessor;

    private: std::string LABEL;

    private: int32_t labelX;

    private: int32_t valueX= 0;

    private: std::vector<char> value;

    private: int32_t len= 0;

public: KeyValueDrawCharArray(std::string label, int32_t x);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics, int32_t y);

    public: void update(std::vector<char> value, int32_t len);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/java/character/CharArrayFactory.h>)
#include <org/allbinary/logic/java/character/CharArrayFactory.h>
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

        #endif
    
