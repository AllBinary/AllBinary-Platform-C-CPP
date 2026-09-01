
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLE_H
        #define ORG_ALLBINARY_GRAPHICS_RECTANGLE_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"

class Rectangle
            : public Object
         {

    private: GPoint point;

    private: int32_t width;

    private: int32_t height;

public: Rectangle(GPoint point, int32_t width, int32_t height);

    public: GPoint getPoint();

    public: void setPoint(GPoint point);

    public: int32_t getMaxX();

    public: int32_t getMaxY();

    public: int32_t getWidth();

    public: void setWidth(int32_t width);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RECTANGLE_H
