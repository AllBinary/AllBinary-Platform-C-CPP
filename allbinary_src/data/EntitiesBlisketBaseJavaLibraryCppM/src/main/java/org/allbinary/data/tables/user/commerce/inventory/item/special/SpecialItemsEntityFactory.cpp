
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialItemsEntity.h"

class SpecialItemsEntityFactory
            : public Object
         {

    private: static SpecialItemsEntityFactory instance() { return SpecialItemsEntityFactory(); }

    public: static SpecialItemsEntityFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialItemsEntityFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: SpecialItemsEntityFactory(){
}


    public: SpecialItemsEntity getSpecialItemsEntityInstance(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org::allbinary::data::tables::user::commerce::inventory::item::special::SpecialItemsEntity();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

