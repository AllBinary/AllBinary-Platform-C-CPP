
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
        



        #ifndef ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/CategoryRequestHelper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/category/CategoryComponent.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/store/StoreCategoryFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoBasic.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"


CategoryRequestHelper::CategoryRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){

        try {
            this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->pageContext= pageContext;
    
this->hashMap= hashMap;
    
this->getXmlData();
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "CategoryRequestHelper()", &e);
    

                                    }
                                
}

}

const std::string CategoryRequestHelper::categoryRequest = (new StringMaker())->append("<")->append(CategoryData::getInstance()->REQUEST)->append(">")->toString();

    auto CategoryRequestHelper::getXmlData() -> void{

        try {
            
    Map* map = this->request->getParameterMap();;
    

    CategoryData* categoryData = CategoryData::getInstance();;
    

    Set* keys = map->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t size = keyArray.size();;
    

                        if(size > 0)
                        
                                    {
                                    
    std::string xmlRequest = JavaBoxes::unbox<std::string>(keyArray[0]);;
    

    int32_t index = 1;;
    

        while(index < size && !JavaString::startsWith(xmlRequest, CategoryRequestHelper::categoryRequest))
        {
xmlRequest= JavaBoxes::unbox<std::string>(keyArray[index]);
    

                        if(JavaString::startsWith(xmlRequest, CategoryRequestHelper::categoryRequest))
                        
                                    //Otherwise - thenStmt - BreakStmt

}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(xmlRequest, this, "getXmlData()");
    

                                    }
                                

    Document* document = DomDocumentHelper::create(xmlRequest);;
    

    Node* requestNode = DomSearchHelper::getNode(categoryData->REQUEST, document->getChildNodes());;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(XmlDocumentHelper::toString(document), this, "getXmlData()");
    

                                    }
                                
this->setCategoryLoader(requestNode);
    

    Node* parentCategoryNode = DomSearchHelper::getNode(categoryData->PARENT, requestNode->getChildNodes());;
    

    Node* categoryNode = DomSearchHelper::getNode(categoryData->NAME, parentCategoryNode->getChildNodes());;
    
this->categoryInterface= dynamic_cast<CategoryInterface*>((new StoreCategoryFactory(this->transformInfoInterface))->getRootInstanceFromNode(categoryNode));
    
this->categoryInterface= this->categoryLoaderInterface->get(this->categoryInterface);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->categoryInterface->log();
    
this->logUtil->putF("Loaded Parent Category", this, "getXmlData()");
    

                                    }
                                

    Node* childCategoryNode = DomSearchHelper::getNodeNoThrow(categoryData->NAME, requestNode->getChildNodes());;
    

                        if(childCategoryNode != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Loading Child Category", this, "getXmlData()");
    

                                    }
                                
this->childCategoryInterface= dynamic_cast<CategoryInterface*>((new StoreCategoryFactory(this->transformInfoInterface))->getInstance(childCategoryNode));
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->childCategoryInterface->log();
    
this->logUtil->putF("Loaded Child Category", this, "getXmlData()");
    

                                    }
                                

                                    }
                                
                        else {
                            this->childCategoryInterface= this->categoryInterface;
    

                        }
                            

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings.EXCEPTION, this, "getXmlData()", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto CategoryRequestHelper::setCategoryLoader(Node* requestNode) -> void{

    Node* storeNameNode = DomSearchHelper::getNode(StoreFrontData::getInstance()->NAME, requestNode->getChildNodes());;
    

                        if(storeNameNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string storeName = DomNodeHelper::getTextNodeValue(storeNameNode);;
    

                        if(true)
                        
                                    {
                                    
    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(storeName);;
    
this->transformInfoInterface= dynamic_cast<TransformInfoInterface*>(new TransformInfoBasic(storeFrontInterface, this->hashMap, this->pageContext));
    

                        if(this->transformInfoInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("TransformInfo null");
                    

                                    }
                                

    StoreCategoryFactory* storeCategoryFactory = new StoreCategoryFactory(this->transformInfoInterface);;
    
this->categoryLoaderInterface= CategoryLoaderFactory::getInstance(storeCategoryFactory);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Store Name Error: ") +JavaString::valueOf(storeName));
                    

                        }
                            

                                    }
                                
}


    auto CategoryRequestHelper::insert() -> std::string{

        try {
            
    std::string success = "Successfully Added the following to the Category table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF("inserting", this, "insert()");
    

                                    }
                                
this->categoryLoaderInterface->insert(this->categoryInterface, this->childCategoryInterface);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add item to Category";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto CategoryRequestHelper::delete_() -> std::string{

        try {
            
    std::string success = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Successfully Removed ") +JavaString::valueOf(CategoryData::getInstance()->NAME)) +JavaString::valueOf("=")) +JavaString::valueOf(this->childCategoryInterface->getPath());;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF("Deleting", this, "delete()");
    

                                    }
                                
this->categoryLoaderInterface->delete_(this->categoryInterface, this->childCategoryInterface);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

        try {
            
    std::string error = JavaString::valueOf("Failed to remove category: ") +JavaString::valueOf(this->childCategoryInterface->getPath());;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    

                //: 
} catch(Exception& e2) 
            {

    std::string error = "Failed to remove category and show the path of the failed category";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e2);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}

}


    auto CategoryRequestHelper::viewCategory() -> std::string{

        try {
            
    Document* document = (new CategoryComponent(this->childCategoryInterface))->toXmlDoc();;
    

    std::string xmlString = XmlDocumentHelper::toString(document);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(xmlString, this, "viewCategory()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return xmlString;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to get Category";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "viewCategory()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto CategoryRequestHelper::viewCategories() -> std::string{

        try {
            
    std::string success = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "viewCategories()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to view Categories table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "viewCategories()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto CategoryRequestHelper::update() -> std::string{

        try {
            
    std::string success = "New Item Successfully added";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add Item";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_CPP
