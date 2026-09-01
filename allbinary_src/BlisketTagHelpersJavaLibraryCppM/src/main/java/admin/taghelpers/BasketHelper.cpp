
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class BasketHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: StoreFrontInterface storeFrontInterface;

    private: HashMap<any, any> propertiesHashMap;

    private: PageContext pageContext;

    private: const int32_t MAX = 200;

public: BasketHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->propertiesHashMap= hashMap;
    
this->pageContext= pageContext;
    

    std::string storeName = this->propertiesHashMap.get(StoreFrontData::getInstance().NAME) as string;;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
this->weblisketSession= WeblisketSession(hashMap, pageContext);
    
}


    public: Boolean isBasketEmpty(){

        try {
            
    BasketInterface basket = this->weblisketSession.getOrder().getBasket();;
    

                        if(basket.getNumberOfItems().intValue() <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isBasketEmpty()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}

}


};

            

