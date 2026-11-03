
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/page/PageData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PageData::instance_owner() -> PageData* { static std::unique_ptr<PageData> value(new PageData()); return value.get(); }
PageData* PageData::instance = PageData::instance_owner();

    auto PageData::getInstance() -> PageData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PageData::instance;
    
}


PageData::PageData(){
}




        #endif //ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_CPP
