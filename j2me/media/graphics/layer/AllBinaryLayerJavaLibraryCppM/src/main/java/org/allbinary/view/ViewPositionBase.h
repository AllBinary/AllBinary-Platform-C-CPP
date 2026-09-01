
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
        



        #ifndef ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
        #define ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewPositionBase: public GPoint {

    public: static const ViewPositionBase NULL_VIEW_POSITION = ViewPositionBase(0, 0, 0);

protected: ViewPositionBase(int32_t x, int32_t y, int32_t z);

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: void setAllbinaryLayer(Object* allbinaryLayer);

};

            


        #endif //ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
