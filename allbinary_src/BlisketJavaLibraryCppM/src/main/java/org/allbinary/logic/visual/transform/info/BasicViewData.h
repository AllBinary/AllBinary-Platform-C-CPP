
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicViewData
            : public virtual Object
         {

    private: static BasicViewData* instance_owner();
    private: static BasicViewData* instance;

    public: static BasicViewData* getInstance();

private: BasicViewData();

    public: const std::string GENERICDIR = "generic/";

    public: const std::string USERDIR;

    public: const std::string ADDRESSDIR;

    public: const std::string BILLINGADDRESSDIR;

    public: const std::string SHIPPINGADDRESSDIR;

    public: const std::string COMMERCEDIR;

    public: const std::string INVENTORYDIR;

    public: const std::string BASKETDIR;

    public: const std::string ITEMDIR;

    public: const std::string MONEYDIR;

    public: const std::string SHIPPINGDIR;

    public: const std::string ORDERDIR;

    public: const std::string ORDEREMAILDIR;

    public: const std::string ORDERHISTORYDIR;

    public: const std::string ORDERREVIEWDIR;

    public: const std::string PAYMENTDIR;

    public: const std::string GENERATIONDIR;

    public: const std::string PRODUCTSDIR;

    public: const std::string IGNOREXMLXSL;

    public: const std::string REVIEWORDERVIEWXSL;

    public: const std::string ORDERVIEWXSL;

    public: const std::string INVENTORYXSL;

    public: const std::string BASKETXSL;

    public: const std::string CHECKOUTBASKETXSL;

    public: const std::string MINIBASKETXSL;

    public: const std::string BILLINGADDRESSCHANGEFORMXSL;

    public: const std::string BILLINGADDRESSINPUTFORMXSL;

    public: const std::string BILLINGADDRESSVIEWXSL;

    public: const std::string SHIPPINGADDRESSCHANGEFORMXSL;

    public: const std::string SHIPPINGADDRESSINPUTFORMXSL;

    public: const std::string SHIPPINGADDRESSVIEWXSL;

    public: const std::string NEWTAXADDRESSXSL;

    public: const std::string EDITTAXADDRESSXSL;

    public: const std::string SHIPPINGMETHODSXSL;

    public: const std::string ORDERCUSTOMEREMAILVIEWXSL;

    public: const std::string ORDERMANAGEREMAILVIEWXSL;

    public: const std::string EDITCUSTOMERXSL;

    public: const std::string ORDERHISTORYXSL;

    public: const std::string PAYMENTVIEWXSL;

    public: const std::string SUMMARYXSL;

    public: const std::string PAYMENTGATEWAYOPTIONSXSL;

    public: const std::string MAKEPAYMENTVIEWXSL;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H_COMPLETE
        
        #endif
    
