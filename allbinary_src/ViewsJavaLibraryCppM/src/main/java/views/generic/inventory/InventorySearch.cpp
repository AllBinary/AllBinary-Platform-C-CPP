
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_CPP
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/inventory/InventorySearch.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/inventory/InventorySearchUtil.h"
#include "views/generic/inventory/InventorySearchProductUtil.h"


InventorySearch::InventorySearch(SearchRequest* searchRequest) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->searchRequest= searchRequest;
    
}


                //@Throws(Exception.constructor)
            
    auto InventorySearch::searchSingleStaticPage() -> std::string{

        try {
            
    StoreFrontInterface* storeFront = this->searchRequest->getStoreFront();;
    

    SearchParams* searchParams = this->searchRequest->getParams();;
    

    HashMap<Object*, Object*>* columnValueHashMap = searchParams->get();;
    

    std::string file = (new StaticPagesEntity())->getFile(storeFront->getName(), (new Replace("-", CommonSeps::getInstance()->SPACE))->all(JavaBoxes::unbox<std::string>(columnValueHashMap->get(basicItemData->KEYWORDS))));;
    

                        if(StringValidationUtil::getInstance()->isEmpty(file))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                                    }
                                
                        else {
                            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(storeFront->getCurrentHostName());
    
stringBuffer->append(storeFront->getCurrentHostNamePath());
    
stringBuffer->append(storeFront->getStaticPath());
    
stringBuffer->append(file);
    
stringBuffer->append(this->searchRequest->getParams()->getEndPage());
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    
stringBuffer->append(InputOutputTypeData::getInstance()->DEFAULT);
    

    std::string filePath = (new Replace(CommonSeps::getInstance()->SPACE, "%20"))->all(JavaString::valueOf(stringBuffer));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return filePath;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "searchSingleStaticPage", &e);
    

                                    }
                                



                            throw Exception("Failed retrieve Single Product Page Static");
                    
}

}


                //@Throws(Exception.constructor)
            
    auto InventorySearch::searchSingleDynamicPage() -> std::string{

        try {
            
    std::vector<std::string> str = this->search();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return str[JavaBoxes::value<int32_t>(this->searchRequest->getParams()->getStartPageInt())];
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "searchSingleDynamicPage", &e);
    

                                    }
                                



                            throw Exception("Failed retrieve Single Product Page Dynamically");
                    
}

}


                //@Throws(Exception.constructor)
            
    auto InventorySearch::search() -> std::vector<std::string>{

    AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    

    InventorySearchUtil* inventorySearchUtil = InventorySearchUtil::getInstance();;
    

    BasicArrayList* vector = inventorySearchUtil->getBasicItemIdColumn(this->searchRequest);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inventorySearchUtil->search(abeClientInformation, searchRequest, vector);;
    
}


                //@Throws(Exception.constructor)
            
    auto InventorySearch::getProduct(std::string product) -> std::string{

    AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InventorySearchProductUtil::getInstance()->getProduct(abeClientInformation, this->searchRequest, product);;
    
}




        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCH_CPP
