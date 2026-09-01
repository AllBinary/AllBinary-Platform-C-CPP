
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryObjectFactoryInterface.h"

class BaseCircularPool
            : public Object
         {

    protected: CircularIndexUtil circularIndexUtil = CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL;

    protected: std::vector<Object*> OBJECT_ARRAY = NullUtil::getInstance().NULL_OBJECT_ARRAY;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getNextInstance();

    public: void init(AllBinaryObjectFactoryInterface allBinaryObjectFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: Object* getInstance(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
