
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

            #include "../../../java/lang/Object.h"
        
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
        

    public static const NULL_CIRCULAR_INDEX_UTIL: CircularIndexUtil = new CircularIndexUtil(0, 0);

    public static CircularIndexUtil createInstance(int32_t max);

    public static CircularIndexUtil createInstanceAt(int32_t index, int32_t max);

    private: index: int32_t = 0;

    private: lastIndex: int32_t = 0;

    private: size: int32_t = 0;

private constructor (int32_t index, int32_t size);

    public int32_t next();

    public int32_t previous();

    public setIndex(int32_t index);

    public int32_t getIndex();

    public setSize(int32_t size);

    public int32_t getSize();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
