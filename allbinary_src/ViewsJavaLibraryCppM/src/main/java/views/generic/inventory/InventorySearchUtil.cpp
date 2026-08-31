
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/ListIterator.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/InventoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
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
        

    private: static const instance: InventorySearchUtil = new InventorySearchUtil();

    public static InventorySearchUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventorySearchUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public Vector getBasicItemIdColumn(SearchRequest searchRequest){

    inventoryEntityInterface: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    storeFrontInterface: StoreFrontInterface = searchRequest!.getStoreFront()!;;
    

    inventorySearchUtil: InventoryColumnUtil = InventoryColumnUtil.getInstance()!;;
    

    column: Vector = inventorySearchUtil!.getColumnWhereLike(inventoryEntityInterface, storeFrontInterface!.getCategoryPath(), BasicItemData.ID)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Number Of Items Found: " +column.length, this, "search");
    

                                    }
                                

    subStoreVector: BasicArrayList = storeFrontInterface!.getSubStores()!;;
    

    size: int32_t = subStoreVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    subStore: string = subStoreVector!.get(index) as string;;
    

    substoreIdColumn: Vector = inventorySearchUtil!.getColumnWhereLike(inventoryEntityInterface, subStore, BasicItemData.ID)!;;
    
column.addAll(substoreIdColumn);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Number Of Items Found Including SubStores: " +column.length, this, "search");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return column;
    
}


                //@Throws(Exception.constructor)
            
    string getNoResults(TransformDocumentInterface viewDocumentInterface, Node inventoryNode){
inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.TOTAL_NUMBER_PAGES, this.commonPhoneStrings!.ZERO));
    
inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.TOTAL_NUMBER_ITEMS, this.commonPhoneStrings!.ZERO));
    

    success: string = DomDocumentHelper.toString(viewDocumentInterface!.getDoc())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF("No Results Xml: " +success, this, "search");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    
}


    public std::vector<string> search(AbeClientInformationInterface abeClientInformation, SearchRequest searchRequest, Vector column){

        try {
            
    inventoryEntityInterface: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    searchParams: SearchParams = searchRequest!.getParams()!;;
    

    startPage: int32_t = searchParams!.getStartPageInt()!.intValue()!;;
    

    endPage: int32_t = searchParams!.getEndPageInt()!.intValue()!;;
    

    pageLength: int32_t = searchParams!.getLengthInt()!.intValue()!;;
    

    savedPagesInRange: int32_t = 0;;
    

    columnValueHashMap: HashMap<any, any> = searchParams!.get()!;;
    

    keyword: string = new Replace("-", CommonSeps.getInstance()!.SPACE).all(columnValueHashMap!.get(BasicItemData.KEYWORDS) as string)!;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(keyword))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(startPage >= 0)
                        
                                    {
                                    
                        if(pageLength == 0)
                        
                                    {
                                    pageLength= SearchData.DEFAULT_PAGE_LENGTH;
    

                                    }
                                

    MAXPAGES: int32_t = 100;;
    

    productListingPages: std::vector<string> = new Array(MAXPAGES);;
    

    documents: std::vector<Document> = new Array(MAXPAGES);;
    

    inventoryNodes: std::vector<Node> = new Array(MAXPAGES);;
    

    iter: ListIterator = column.listIterator()!;;
    
keyword= keyword.toUpperCase();
    

    lastPage: int32_t =  -1;;
    

    numberOfResultsOnCurrentPage: int32_t = 0;;
    

    numberOfResults: int32_t = 0;;
    

    viewDocumentInterface: TransformDocumentInterface = TransformStoreDocumentFactory.getInstance(searchRequest)!;;
    

    inventoryNode: Node = viewDocumentInterface!.getDoc()!.createElement(InventoryData.INVENTORY)!;;
    
viewDocumentInterface!.getBaseNode()!.appendChild(inventoryNode);
    
inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.PAGE, new Integer(startPage).toString()));
    

                        if(searchRequest!.getFileBaseName() != 
                                    null
                                )
                        
                                    {
                                    inventoryNode!.appendChild(searchRequest!.getFileBaseNameNode(viewDocumentInterface!.getDoc()));
    

                                    }
                                

    currentPage: int32_t =  -1;;
    

        while(iter.hasNext())
        {

    product: string = .toCharArray();;
    

    itemInterface: ItemInterface = inventoryEntityInterface!.getItem(product)!;;
    

    keywords: string = itemInterface!.getKeywords()!;;
    
keywords= keywords.toUpperCase();
    

                        if(keywords.indexOf(keyword) !=  -1)
                        
                                    {
                                    
                        if(currentPage +1 >= startPage && currentPage +1 <= endPage)
                        
                                    {
                                    
    itemNode: Node = new BasicItemView(itemInterface, new Vector()).toXmlNode(viewDocumentInterface!.getDoc())!;;
    
itemNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), BasketData.ITEMTOTALINBASKET, this.commonPhoneStrings!.ONE));
    
inventoryNode!.appendChild(itemNode!.cloneNode(true));
    

                                    }
                                
currentPage= ((numberOfResults +1) /pageLength) -1;
    
numberOfResultsOnCurrentPage++;
    

                        if(lastPage < currentPage)
                        
                                    {
                                    
                        if(currentPage >= startPage && currentPage <= endPage)
                        
                                    {
                                    inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, new Integer(numberOfResultsOnCurrentPage).toString()));
    
documents[currentPage]= viewDocumentInterface!.getDoc();
    
inventoryNodes[currentPage]= inventoryNode;
    
savedPagesInRange++;
    
viewDocumentInterface= TransformStoreDocumentFactory.getInstance(searchRequest);
    
inventoryNode= viewDocumentInterface!.getDoc()!.createElement(InventoryData.INVENTORY);
    
viewDocumentInterface!.getBaseNode()!.appendChild(inventoryNode);
    
inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.PAGE, new Integer(currentPage +1).toString()));
    

                        if(searchRequest!.getFileBaseName() != 
                                    null
                                )
                        
                                    {
                                    inventoryNode!.appendChild(searchRequest!.getFileBaseNameNode(viewDocumentInterface!.getDoc()));
    

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
                                    inventoryNode!.appendChild(ModDomHelper.createNameValueNodes(viewDocumentInterface!.getDoc(), SearchData.TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, new Integer(numberOfResultsOnCurrentPage -1).toString()));
    
documents[lastPage +1]= viewDocumentInterface!.getDoc();
    
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
    index: int32_t = startPage;index <= endPage; index++)
        {

                        if(index <= lastPage)
                        
                                    {
                                    
    tempDocument: Document = documents[index]!;;
    
inventoryNodes[index]!.appendChild(ModDomHelper.createNameValueNodes(tempDocument, SearchData.TOTAL_NUMBER_PAGES, new Integer(lastPage +1).toString()));
    
inventoryNodes[index]!.appendChild(ModDomHelper.createNameValueNodes(tempDocument, SearchData.TOTAL_NUMBER_ITEMS, new Integer(numberOfResults).toString()));
    




                        for (
    pageIndex: int32_t = 0;pageIndex <= lastPage; pageIndex++)
        {
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(searchRequest!.getFileBaseName());
    

                        if(stringBuffer!.length() > 0)
                        
                                    {
                                    
                        if(pageIndex != 0)
                        
                                    {
                                    stringBuffer!.append(pageIndex.toString());
    

                                    }
                                
inventoryNodes[index]!.appendChild(ModDomHelper.createNameValueNodes(tempDocument, SearchData.PAGE_INFO, pageIndex.toString(), stringBuffer!.toString()));
    

                                    }
                                
                        else {
                            inventoryNodes[index]!.appendChild(ModDomHelper.createNameValueNodes(tempDocument, SearchData.PAGE_INFO, pageIndex.toString(), SearchData.SEARCH));
    

                        }
                            
}


    success: string = DomDocumentHelper.toString(tempDocument)!;;
    
productListingPages[index]= new StoreTransformer(abeClientInformation, new TransformInfoHttpSearch(searchRequest) as TransformInfoInterface).translate(success);
    

                                    }
                                
}


                        if(savedPagesInRange == 0)
                        
                                    {
                                    
    result: string = this.getNoResults(viewDocumentInterface, inventoryNode)!;;
    
productListingPages[0]= new StoreTransformer(abeClientInformation, new TransformInfoHttpSearch(searchRequest)).translate(result);
    

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "search", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

