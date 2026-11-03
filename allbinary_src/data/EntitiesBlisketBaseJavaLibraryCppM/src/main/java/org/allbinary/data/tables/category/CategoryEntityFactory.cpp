
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/category/CategoryEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/category/CategoryEntity.h"

auto CategoryEntityFactory::instance_owner() -> CategoryEntityFactory* { static std::unique_ptr<CategoryEntityFactory> value(new CategoryEntityFactory()); return value.get(); }
CategoryEntityFactory* CategoryEntityFactory::instance = CategoryEntityFactory::instance_owner();

    auto CategoryEntityFactory::getInstance() -> CategoryEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CategoryEntityFactory::instance;
    
}


CategoryEntityFactory::CategoryEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto CategoryEntityFactory::getCategoryEntityInstance() -> CategoryEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::allbinary::data::tables::category::CategoryEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getCategoryEntityInstance()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_CATEGORY_CATEGORYENTITYFACTORY_CPP
