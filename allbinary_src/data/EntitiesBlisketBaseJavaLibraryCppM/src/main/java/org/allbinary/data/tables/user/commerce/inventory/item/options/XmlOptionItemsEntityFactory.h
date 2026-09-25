
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITYFACTORY_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XmlOptionItemsEntity.h"

class XmlOptionItemsEntityFactory
            : public Object
         {

    private: static XmlOptionItemsEntityFactory instance() { return XmlOptionItemsEntityFactory(); }

    public: static XmlOptionItemsEntityFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: XmlOptionItemsEntityFactory();

    public: XmlOptionItemsEntity getXmlOptionItemsEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITYFACTORY_H
