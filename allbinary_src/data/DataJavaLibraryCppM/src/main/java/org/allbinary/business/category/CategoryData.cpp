
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/CategoryData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CategoryData::instance_owner() -> CategoryData* { static std::unique_ptr<CategoryData> value(new CategoryData()); return value.get(); }
CategoryData* CategoryData::instance = CategoryData::instance_owner();

    auto CategoryData::getInstance() -> CategoryData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CategoryData::instance;
    
}


CategoryData::CategoryData() : UNCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->UNCRYPTED_EXTENSION), ENCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->ENCRYPTED_EXTENSION){
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_CPP
