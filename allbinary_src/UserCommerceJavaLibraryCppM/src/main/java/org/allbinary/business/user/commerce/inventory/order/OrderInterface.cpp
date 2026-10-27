
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

        
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderInterface {

    public: virtual void setShippingMethod(std::string shippingType) = 0;

    public: virtual void setPaymentMethod(std::string value) = 0;

    public: virtual void setSpecial(std::string special) = 0;

    public: virtual void setStoreName(std::string value) = 0;

    public: virtual void setUserComments(std::string value) = 0;

    public: virtual void setUserCancelComments(std::string value) = 0;

    public: virtual void setStoreComments(std::string value) = 0;

    public: virtual void setStoreCancelComments(std::string value) = 0;

    public: virtual BasketInterface* getBasket() = 0;

    public: virtual std::string getShippingMethod() = 0;

    public: virtual std::string getPaymentMethod() = 0;

    public: virtual std::string getSpecial() = 0;

    public: virtual std::string getId() = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getUserComments() = 0;

    public: virtual std::string getUserCancelComments() = 0;

    public: virtual std::string getStoreComments() = 0;

    public: virtual std::string getStoreCancelComments() = 0;

};

            

