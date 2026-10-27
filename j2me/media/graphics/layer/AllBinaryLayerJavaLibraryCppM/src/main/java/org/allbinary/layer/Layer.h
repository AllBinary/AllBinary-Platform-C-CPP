
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYER_H
        #define ORG_ALLBINARY_LAYER_LAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
class Graphics;
class CanvasStrings;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Layer
            : public virtual Object
         {

    public: static int32_t ID;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: int32_t x= 0;

    /*protected*/ public: int32_t y= 0;

    /*protected*/ public: int32_t z = 3;

    private: int32_t width= 0;

    private: int32_t height= 0;

    private: bool visible = true;

public: Layer(int32_t width, int32_t height);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: void moveDXY(int32_t dx, int32_t dy);

    public: void moveDXYZ(int32_t dx, int32_t dy, int32_t dz);

    public: int32_t getXP();

    public: int32_t getYP();

    public: int32_t getZP();

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: int64_t getDepth();

    public: void setVisible(bool visible);

    public: bool isVisible();

    public: void paint(Graphics* graphics);

    /*protected*/ public: void setLayerWidth(int32_t width);

    /*protected*/ public: void setLayerHeight(int32_t height);

    public: void toStringAppend(StringMaker* stringBuffer);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
