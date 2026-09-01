
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERINTERFACE_H

#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderInterface {

    void setShippingMethod(std::string shippingType);

    void setPaymentMethod(std::string value);

    void setSpecial(std::string special);

    void setStoreName(std::string value);

    void setUserComments(std::string value);

    void setUserCancelComments(std::string value);

    void setStoreComments(std::string value);

    void setStoreCancelComments(std::string value);

    BasketInterface getBasket();

    std::string getShippingMethod();

    std::string getPaymentMethod();

    std::string getSpecial();

    std::string getId();

    std::string getStoreName();

    std::string getUserComments();

    std::string getUserCancelComments();

    std::string getStoreComments();

    std::string getStoreCancelComments();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERINTERFACE_H
