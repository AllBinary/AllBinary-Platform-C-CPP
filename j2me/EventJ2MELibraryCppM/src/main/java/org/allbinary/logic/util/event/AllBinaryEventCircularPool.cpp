
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/cache/BaseCircularPool.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"


AllBinaryEventCircularPool::AllBinaryEventCircularPool(int32_t max){
this->OBJECT_ARRAY= std::vector<Object*>(max);
    
this->circularIndexUtil= CircularIndexUtil::createInstance(max);
    
}


    auto AllBinaryEventCircularPool::initAllBinaryEventCircularPool(AllBinaryEventObjectFactoryInterface* allBinaryEventObjectFactoryInterface) -> void{
this->circularIndexUtil->setIndex(0);
    

    int32_t size = this->circularIndexUtil->getSize();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->OBJECT_ARRAY[index]= allBinaryEventObjectFactoryInterface->getInstance();
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_CPP
