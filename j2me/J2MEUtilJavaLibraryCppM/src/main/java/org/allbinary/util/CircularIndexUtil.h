
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
        



        #ifndef ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
        #define ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H

            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CircularIndexUtil
            : public Object
         {

    public: static const CircularIndexUtil NULL_CIRCULAR_INDEX_UTIL = CircularIndexUtil(0, 0);

    public: static CircularIndexUtil createInstance(int32_t max);

    public: static CircularIndexUtil createInstanceAt(int32_t index, int32_t max);

    private: int32_t index = 0;

    private: int32_t lastIndex = 0;

    private: int32_t size = 0;

private: CircularIndexUtil(int32_t index, int32_t size);

    public: int32_t next();

    public: int32_t previous();

    public: void setIndex(int32_t index);

    public: int32_t getIndex();

    public: void setSize(int32_t size);

    public: int32_t getSize();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
