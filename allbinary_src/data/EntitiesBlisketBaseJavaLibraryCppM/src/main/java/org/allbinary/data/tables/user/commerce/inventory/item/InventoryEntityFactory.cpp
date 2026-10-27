
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"

class InventoryEntityFactory
            : public Object
         {

    private: static InventoryEntityFactory* instance() { static std::unique_ptr<InventoryEntityFactory> value(new InventoryEntityFactory()); return value.get(); }

    public: static InventoryEntityFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryEntityFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: InventoryEntityFactory(){
}


    public: InventoryEntity* getInventoryEntityInstance(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new org::allbinary::data::tables::user::commerce::inventory::item::InventoryEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInventoryEntityInstance()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

