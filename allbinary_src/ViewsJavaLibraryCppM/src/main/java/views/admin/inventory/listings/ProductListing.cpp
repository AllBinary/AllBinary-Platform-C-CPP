
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_CPP
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/inventory/listings/ProductListing.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/SpecialCharacterUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/string/tokens/UniqueTokens.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <views/generic/inventory/InventoryColumnUtil.h>

      
#include <views/generic/inventory/InventorySearchUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/listings/ProductListingInterface.h"


ProductListing::ProductListing(SearchRequest* searchRequest) : logUtil(LogUtil::getInstance()), directory(Directory::getInstance()), basicItemData(BasicItemData::getInstance()){
this->searchRequest= searchRequest;
    
this->storeFronts= new StoreFrontsEntity();
    
this->staticPages= new StaticPagesEntity();
    
this->inventory= new InventoryEntity();
    
}


                //@Throws(Exception.constructor)
            
    auto ProductListing::getHashSet(StoreFrontInterface* storeFront) -> HashSet*{

    InventoryColumnUtil* inventoryColumnUtil = InventoryColumnUtil::getInstance();;
    

    BasicArrayList* keywords = inventoryColumnUtil->getColumnWhereLike(this->inventory, storeFront->getCategoryPath(), basicItemData->KEYWORDS);;
    

    BasicArrayList* subStoreVector = storeFront->getSubStores();;
    

    int32_t size = subStoreVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string subStore = JavaBoxes::unbox<std::string>(subStoreVector->get(index));;
    

    BasicArrayList* substoreKeywords = inventoryColumnUtil->getColumnWhereLike(this->inventory, JavaString::valueOf(AbPathData::getInstance()->SEPARATOR) +JavaString::valueOf(subStore), basicItemData->CATEGORY);;
    
keywords->addAllList(substoreKeywords);
    
}


    UniqueTokens* uniqueTokens = new UniqueTokens();;
    

    HashSet* keywordHashSet = uniqueTokens->getWhithoutDashesAndSkipNumberOnlyTokens(keywords);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return keywordHashSet;
    
}


                //@Throws(Exception.constructor)
            
    auto ProductListing::savePage(std::string file, std::string data) -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating File: ") +JavaString::valueOf(file), this, "generateAll()");
    

                                    }
                                

    AbFile* newFile = AbFile::createAbFile(file);;
    

                        if(newFile->exists())
                        
                                    {
                                    newFile->delete_();
    

                                    }
                                
newFile->createNewFile();
    

                        if(newFile->exists())
                        
                                    {
                                    
    AbDataOutputStream* idOutData = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(newFile);;
    
idOutData->writeBytes(data);
    
idOutData->flush();
    
StreamUtil::getInstance()->close(idOutData);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Wrote Total Bytes: ") +JavaString::valueOf(newFile->length()), this, "generateAll()");
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Could Not Create: ") +JavaString::valueOf(file));
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ProductListing::create(std::string keywordData, HashMap<Object*, Object*>* keywordFilenameHashMap, BasicArrayList* vector, AbPath* staticPath) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    

    HashMap<Object*, Object*>* hashMap = SpecialCharacterUtil::getHashMap();;
    
hashMap->put(CommonSeps::getInstance()->SPACE, StringUtil::getInstance()->EMPTY_STRING);
    

    std::string pageName = (new Replace(hashMap))->all(keywordData);;
    

    SearchParams* searchParams = this->searchRequest->getParams();;
    
searchParams->add(basicItemData->KEYWORDS, keywordData);
    
searchParams->setStartPage(CommonPhoneStrings::getInstance()->ZERO);
    
this->searchRequest->setParams(searchParams);
    
this->searchRequest->setFileBaseName(pageName);
    

    AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    

    InventorySearchUtil* inventorySearchUtil = InventorySearchUtil::getInstance();;
    

    std::vector<std::string> productListingPages = inventorySearchUtil->search(abeClientInformation, searchRequest, vector);;
    




                        for (
    int32_t index = 0;index < productListingPages.size(); index++)
        {

                        if(productListingPages[index].empty())
                        
                                    {
                                    break;

                    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Saving Listing: ") +JavaString::valueOf(index), this, "generateAll()");
    

                                    }
                                

    std::string indexStr = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(index > 0)
                        
                                    {
                                    indexStr= JavaString::valueOf((int32_t(index)));
    

                                    }
                                
keywordFilenameHashMap->put(keywordData, JavaString::valueOf(pageName) +JavaString::valueOf(indexStr));
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(JavaString::valueOf(staticPath));
    
stringBuffer->append(pageName);
    
stringBuffer->append(indexStr);
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    
stringBuffer->append(InputOutputTypeData::getInstance()->DEFAULT);
    

    std::string file = JavaString::valueOf(stringBuffer);;
    

                        if(!this->directory->create(staticPath))
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Could Not Create Directory: ") +JavaString::valueOf(staticPath));
                    

                                    }
                                
this->savePage(file, productListingPages[index]);
    
}

}


    auto ProductListing::addStaticPageInfoToDatabase(StoreFrontInterface* storeFront, HashMap<Object*, Object*>* keywordFilenameHashMap) -> void{

    Set* keywordHashSet = keywordFilenameHashMap->keys();;
    

    std::vector<Object*> keywordArray = keywordHashSet->toArray();;
    

    int32_t size = keywordArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicArrayList* insertVector = new BasicArrayListD();;
    

    std::string keywordData = JavaBoxes::unbox<std::string>(keywordArray[index]);;
    

    std::string fileName = JavaBoxes::unbox<std::string>(keywordFilenameHashMap->get(keywordData));;
    
insertVector->add(storeFront->getName());
    
insertVector->add(keywordData);
    
insertVector->add(fileName);
    
this->staticPages->insert(insertVector);
    
}

}


                //@Throws(Exception.constructor)
            
    auto ProductListing::generateAll() -> std::string{

        try {
            
    StoreFrontInterface* storeFront = this->searchRequest->getStoreFront();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(storeFront->getName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(storeFront->getStaticPath());
    

    AbPath* staticPath = new AbPath(JavaString::valueOf(stringBuffer), StringUtil::getInstance()->EMPTY_STRING);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Store Static Pages Path: ") +JavaString::valueOf(staticPath), this, "generateAll()");
    

                                    }
                                

    HashSet* keywordHashSet = this->getHashSet(storeFront);;
    

    std::vector<Object*> keywordArray = keywordHashSet->toArray();;
    

    int32_t size = keywordArray.size();;
    

    HashMap<Object*, Object*>* keywordFilenameHashMap = StdUtil::getInstance()->createHashMap();;
    

                        if(size == 0)
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Products For ");
    
stringBuffer->append(storeFront->getName());
    
stringBuffer->append(" Store Not Found");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                                    }
                                

    InventorySearchUtil* inventorySearchUtil = InventorySearchUtil::getInstance();;
    

    BasicArrayList* vector = inventorySearchUtil->getBasicItemIdColumn(this->searchRequest);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string keywordData = JavaBoxes::unbox<std::string>(keywordArray[index]);;
    

                        if(keywordData.size() > 1)
                        
                                    {
                                    this->create(keywordData, keywordFilenameHashMap, vector, staticPath);
    

                                    }
                                
}

this->addStaticPageInfoToDatabase(storeFront, keywordFilenameHashMap);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Static Files Generated Successfully For ");
    
stringBuffer->append(storeFront->getName());
    
stringBuffer->append(" it used packages ");
    
stringBuffer->append(storeFront->getPackageLocation());
    
stringBuffer->append(this->INVENTORY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto ProductListing::generateAll(std::string storeName) -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(true)
                        
                                    {
                                    
                        if(storeName.compare(GLOBALS2::GENERATEALLSTORES) != 0)
                        
                                    {
                                    this->searchRequest->setStoreFront(this->storeFronts->getStoreFrontInterface(storeName));
    
stringBuffer->append(this->generateAll());
    
stringBuffer->append("<br />");
    

                                    }
                                
                        else {
                            
    BasicArrayList* storeFrontVector = this->storeFronts->getStoreFrontNames();;
    

    int32_t size = storeFrontVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
storeName= JavaBoxes::unbox<std::string>(storeFrontVector->get(index));
    
this->searchRequest->setStoreFront(this->storeFronts->getStoreFrontInterface(storeName));
    
stringBuffer->append(this->generateAll());
    
stringBuffer->append("<br />");
    
}


                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Generation Failed No Store Specified<br/>";
    

                        }
                            
stringBuffer->append("All Static Pages Generated<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}




        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTING_CPP
