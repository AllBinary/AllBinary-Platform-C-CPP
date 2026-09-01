
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

#include <org/allbinary/logic/util/cache/BaseCircularPool.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryEventObjectFactoryInterface.h"

class AllBinaryEventCircularPool: public BaseCircularPool {

public: AllBinaryEventCircularPool(int32_t max);

    public: void initAllBinaryEventCircularPool(AllBinaryEventObjectFactoryInterface allBinaryEventObjectFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H
