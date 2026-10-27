
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/cache/BaseCircularPool.h>
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryEventObjectFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryEventCircularPool: public BaseCircularPool {

public: AllBinaryEventCircularPool(int32_t max);

    public: void initAllBinaryEventCircularPool(AllBinaryEventObjectFactoryInterface* allBinaryEventObjectFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/cache/BaseCircularPool.h>)
#include <org/allbinary/logic/util/cache/BaseCircularPool.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"
#endif

        #endif
    
