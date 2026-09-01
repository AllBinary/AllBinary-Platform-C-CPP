
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
        



            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <views/admin/inventory/listings/InventoryViewSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventorySearchUtil.h"
#include "InventorySearchProductUtil.h"

class InventorySearch
            : public Object
        : public InventoryViewSearchInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: SearchRequest searchRequest;

public: InventorySearch(SearchRequest searchRequest){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->searchRequest= searchRequest;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string searchSingleStaticPage(){

        try {
            
    StoreFrontInterface storeFront = this->searchRequest.getStoreFront();;
    

    SearchParams searchParams = this->searchRequest.getParams();;
    

    HashMap<any, any> columnValueHashMap = searchParams.get();;
    

    std::string file = StaticPagesEntity().getFile(storeFront.getName(), Replace("-", CommonSeps::getInstance().SPACE).all(columnValueHashMap.get(BasicItemData::KEYWORDS) as string));;
    

                        if(StringValidationUtil::getInstance().isEmpty(file))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                
                        else {
                            
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(storeFront.getCurrentHostName());
    
stringBuffer.append(storeFront.getCurrentHostNamePath());
    
stringBuffer.append(storeFront.getStaticPath());
    
stringBuffer.append(file);
    
stringBuffer.append(this->searchRequest.getParams().getEndPage());
    
stringBuffer.append(AbPathData::getInstance().EXTENSION_SEP);
    
stringBuffer.append(InputOutputTypeData::getInstance().DEFAULT);
    

    std::string filePath = Replace(CommonSeps::getInstance().SPACE, "%20").all(stringBuffer.toString());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePath;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "searchSingleStaticPage", e);
    

                                    }
                                



                            throw Exception("Failed retrieve Single Product Page Static");
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string searchSingleDynamicPage(){

        try {
            
    std::vector<std::string> str = this->search();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return str[this->searchRequest.getParams().getStartPageInt().intValue()]!;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "searchSingleDynamicPage", e);
    

                                    }
                                



                            throw Exception("Failed retrieve Single Product Page Dynamically");
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::vector<std::string> search(){

    AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    

    InventorySearchUtil inventorySearchUtil = InventorySearchUtil::getInstance();;
    

    Vector vector = inventorySearchUtil.getBasicItemIdColumn(this->searchRequest);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inventorySearchUtil.search(abeClientInformation, searchRequest, vector);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getProduct(std::string product){

    AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventorySearchProductUtil::getInstance().getProduct(abeClientInformation, this->searchRequest, product);;
    
}


};

            

