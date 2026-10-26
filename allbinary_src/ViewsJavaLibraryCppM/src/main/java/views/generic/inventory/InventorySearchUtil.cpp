
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/InventoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryColumnUtil.h"

class InventorySearchUtil
            : public Object
         {

    private: static InventorySearchUtil instance() { return InventorySearchUtil(); }

    public: static InventorySearchUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventorySearchUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonPhoneStrings commonPhoneStrings = CommonPhoneStrings::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getBasicItemIdColumn(SearchRequest searchRequest){

    InventoryEntity inventoryEntityInterface = InventoryEntityFactory::getInstance().getInventoryEntityInstance();;
    

    StoreFrontInterface storeFrontInterface = searchRequest.getStoreFront();;
    

    InventoryColumnUtil inventorySearchUtil = InventoryColumnUtil::getInstance();;
    

    BasicArrayList column = inventorySearchUtil.getColumnWhereLike(inventoryEntityInterface, storeFrontInterface.getCategoryPath(), basicItemData.ID);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF("Number Of Items Found: " +column.size(), this, "search");
    

                                    }
                                

    BasicArrayList subStoreVector = storeFrontInterface.getSubStores();;
    

    int32_t size = subStoreVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string subStore = subStoreVector.get(index);;
    

    BasicArrayList substoreIdColumn = inventorySearchUtil.getColumnWhereLike(inventoryEntityInterface, subStore, basicItemData.ID);;
    
column.addAllList(substoreIdColumn);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF("Number Of Items Found Including SubStores: " +column.size(), this, "search");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    
}


                //@Throws(Exception.constructor)
            
    private: std::string getNoResults(TransformDocumentInterface viewDocumentInterface, Node inventoryNode){
inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::TOTAL_NUMBER_PAGES, this->commonPhoneStrings.ZERO));
    
inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::TOTAL_NUMBER_ITEMS, this->commonPhoneStrings.ZERO));
    

    std::string success = XmlDocumentHelper::toString(viewDocumentInterface.getDoc());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF("No Results Xml: " +success, this, "search");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    
}


    public: std::vector<std::string> search(AbeClientInformationInterface abeClientInformation, SearchRequest searchRequest, BasicArrayList column){

        try {
            
    InventoryEntity inventoryEntityInterface = InventoryEntityFactory::getInstance().getInventoryEntityInstance();;
    

    SearchParams searchParams = searchRequest.getParams();;
    

    int32_t startPage = searchParams.getStartPageInt().intValue();;
    

    int32_t endPage = searchParams.getEndPageInt().intValue();;
    

    int32_t pageLength = searchParams.getLengthInt().intValue();;
    

    int32_t savedPagesInRange = 0;;
    

    HashMap<Object*, Object*> columnValueHashMap = searchParams.get();;
    

    std::string keyword = Replace("-", CommonSeps::getInstance().SPACE).all(columnValueHashMap.get(basicItemData.KEYWORDS));;
    

                        if(StringValidationUtil::getInstance().isEmpty(keyword))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    

                        if(startPage >= 0)
                        
                                    {
                                    
                        if(pageLength == 0)
                        
                                    {
                                    pageLength= SearchData::DEFAULT_PAGE_LENGTH;
    

                                    }
                                

    int32_t MAXPAGES = 100;;
    

    std::vector<std::string> productListingPages = std::vector<std::string>(MAXPAGES);;
    

    std::vector<Document> documents = std::vector<Document>(MAXPAGES);;
    

    std::vector<Node> inventoryNodes = std::vector<Node>(MAXPAGES);;
    
keyword= keyword.toUpperCase();
    

    int32_t lastPage =  -1;;
    

    int32_t numberOfResultsOnCurrentPage = 0;;
    

    int32_t numberOfResults = 0;;
    

    TransformDocumentInterface viewDocumentInterface = TransformStoreDocumentFactory::getInstance(searchRequest);;
    

    Node inventoryNode = viewDocumentInterface.getDoc().createElement(InventoryData::INVENTORY);;
    
viewDocumentInterface.getBaseNode().appendChild(inventoryNode);
    
inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::PAGE, Integer(startPage).toString()));
    

                        if(searchRequest.getFileBaseName() != 
                                    nullptr
                                )
                        
                                    {
                                    inventoryNode.appendChild(searchRequest.getFileBaseNameNode(viewDocumentInterface.getDoc()));
    

                                    }
                                

    int32_t currentPage =  -1;;
    

    int32_t size = column.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string product = .toCharArray();;
    

    ItemInterface itemInterface = inventoryEntityInterface.getItem(product);;
    

    std::string keywords = itemInterface.getKeywords();;
    
keywords= keywords.toUpperCase();
    

                        if(keywords.indexOf(keyword) !=  -1)
                        
                                    {
                                    
                        if(currentPage +1 >= startPage && currentPage +1 <= endPage)
                        
                                    {
                                    
    Node itemNode = BasicItemView(itemInterface, BasicArrayListD()).toXmlNode(viewDocumentInterface.getDoc());;
    
itemNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), BasketData::ITEMTOTALINBASKET, this->commonPhoneStrings.ONE));
    
inventoryNode.appendChild(itemNode.cloneNode(true));
    

                                    }
                                
currentPage= ((numberOfResults +1) /pageLength) -1;
    
numberOfResultsOnCurrentPage++;
    

                        if(lastPage < currentPage)
                        
                                    {
                                    
                        if(currentPage >= startPage && currentPage <= endPage)
                        
                                    {
                                    inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, Integer(numberOfResultsOnCurrentPage).toString()));
    
documents[currentPage]= viewDocumentInterface.getDoc();
    
inventoryNodes[currentPage]= inventoryNode;
    
savedPagesInRange++;
    
viewDocumentInterface= TransformStoreDocumentFactory::getInstance(searchRequest);
    
inventoryNode= viewDocumentInterface.getDoc().createElement(InventoryData::INVENTORY);
    
viewDocumentInterface.getBaseNode().appendChild(inventoryNode);
    
inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::PAGE, Integer(currentPage +1).toString()));
    

                        if(searchRequest.getFileBaseName() != 
                                    nullptr
                                )
                        
                                    {
                                    inventoryNode.appendChild(searchRequest.getFileBaseNameNode(viewDocumentInterface.getDoc()));
    

                                    }
                                

                                    }
                                
lastPage= currentPage;
    
numberOfResultsOnCurrentPage= 0;
    

                                    }
                                
numberOfResults++;
    

                        if(lastPage >= MAXPAGES -1)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
}


                        if(numberOfResultsOnCurrentPage > 0 && (currentPage +1 >= startPage && currentPage +1 <= endPage))
                        
                                    {
                                    inventoryNode.appendChild(ModDomHelper::createNameValueNodes(viewDocumentInterface.getDoc(), SearchData::TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, Integer(numberOfResultsOnCurrentPage -1).toString()));
    
documents[lastPage +1]= viewDocumentInterface.getDoc();
    
inventoryNodes[lastPage +1]= inventoryNode;
    
savedPagesInRange++;
    

                                    }
                                

                        if(numberOfResultsOnCurrentPage > 0)
                        
                                    {
                                    lastPage++;
    

                                    }
                                

                        if(endPage > MAXPAGES -1)
                        
                                    {
                                    endPage= MAXPAGES -1;
    

                                    }
                                




                        for (
    int32_t index = startPage;index <= endPage; index++)
        {

                        if(index <= lastPage)
                        
                                    {
                                    
    Document tempDocument = documents[index];;
    
inventoryNodes[index].appendChild(ModDomHelper::createNameValueNodes(tempDocument, SearchData::TOTAL_NUMBER_PAGES, Integer(lastPage +1).toString()));
    
inventoryNodes[index].appendChild(ModDomHelper::createNameValueNodes(tempDocument, SearchData::TOTAL_NUMBER_ITEMS, Integer(numberOfResults).toString()));
    




                        for (
    int32_t pageIndex = 0;pageIndex <= lastPage; pageIndex++)
        {
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(searchRequest.getFileBaseName());
    

                        if(stringBuffer.length() > 0)
                        
                                    {
                                    
                        if(pageIndex != 0)
                        
                                    {
                                    stringBuffer.append(std::to_string(pageIndex));
    

                                    }
                                
inventoryNodes[index].appendChild(ModDomHelper::createNameValueNodes(tempDocument, SearchData::PAGE_INFO, std::to_string(pageIndex)stringBuffer.toString()));
    

                                    }
                                
                        else {
                            inventoryNodes[index].appendChild(ModDomHelper::createNameValueNodes(tempDocument, SearchData::PAGE_INFO, std::to_string(pageIndex)SearchData::SEARCH));
    

                        }
                            
}


    std::string success = XmlDocumentHelper::toString(tempDocument);;
    
productListingPages[index]= StoreTransformer(abeClientInformation, TransformInfoHttpSearch(searchRequest)).translate(success);
    

                                    }
                                
}


                        if(savedPagesInRange == 0)
                        
                                    {
                                    
    std::string result = this->getNoResults(viewDocumentInterface, inventoryNode);;
    
productListingPages[0]= StoreTransformer(abeClientInformation, TransformInfoHttpSearch(searchRequest)).translate(result);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return productListingPages;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "search", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

