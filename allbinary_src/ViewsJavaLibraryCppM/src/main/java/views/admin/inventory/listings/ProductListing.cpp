
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProductListingInterface.h"

class ProductListing
            : public Object
        : public ProductListingInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const storeFronts: StoreFrontsEntity;

    private: const staticPages: StaticPagesEntity;

    private: const inventory: InventoryEntity;

    private: const searchRequest: SearchRequest;

    private: const INVENTORY: string = ".InventoryView";

public constructor (SearchRequest searchRequest){

            super();
        this.searchRequest= searchRequest;
    
this.storeFronts= new StoreFrontsEntity();
    
this.staticPages= new StaticPagesEntity();
    
this.inventory= new InventoryEntity();
    
}


                //@Throws(Exception.constructor)
            
    HashSet getHashSet(StoreFrontInterface storeFront){

    inventoryColumnUtil: InventoryColumnUtil = InventoryColumnUtil.getInstance()!;;
    

    keywords: Vector = inventoryColumnUtil!.getColumnWhereLike(this.inventory, storeFront!.getCategoryPath(), BasicItemData.KEYWORDS)!;;
    

    subStoreVector: BasicArrayList = storeFront!.getSubStores()!;;
    

    size: int32_t = subStoreVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    subStore: string = subStoreVector!.get(index) as string;;
    

    substoreKeywords: Vector = inventoryColumnUtil!.getColumnWhereLike(this.inventory, AbPathData.getInstance()!.SEPARATOR +subStore, BasicItemData.CATEGORY)!;;
    
keywords.addAll(substoreKeywords);
    
}


    uniqueTokens: UniqueTokens = new UniqueTokens();;
    

    keywordHashSet: HashSet = uniqueTokens!.getWhithoutDashesAndSkipNumberOnlyTokens(keywords)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keywordHashSet;
    
}


                //@Throws(Exception.constructor)
            
    savePage(string file, string data){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Creating File: " +file, this, "generateAll()");
    

                                    }
                                

    newFile: AbFile = AbFile.createAbFile(file)!;;
    

                        if(newFile!.exists())
                        
                                    {
                                    newFile!.delete();
    

                                    }
                                
newFile!.createNewFile();
    

                        if(newFile!.exists())
                        
                                    {
                                    
    idOutData: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(newFile)!;;
    
idOutData!.writeBytes(data);
    
idOutData!.flush();
    
StreamUtil.getInstance()!.close(idOutData);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Wrote Total Bytes: " +newFile!.length(), this, "generateAll()");
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw new Exception("Could Not Create: " +file);
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    create(string keywordData, HashMap<any, any> keywordFilenameHashMap, Vector vector, AbPath staticPath){

    stringBuffer: StringMaker = new StringMaker();;
    

    hashMap: HashMap<any, any> = SpecialCharacterUtil.getHashMap()!;;
    
hashMap!.put(CommonSeps.getInstance()!.SPACE, StringUtil.getInstance()!.EMPTY_STRING);
    

    pageName: string = new Replace(hashMap).all(keywordData)!;;
    

    searchParams: SearchParams = this.searchRequest!.getParams()!;;
    
searchParams!.add(BasicItemData.KEYWORDS, keywordData);
    
searchParams!.setStartPage(CommonPhoneStrings.getInstance()!.ZERO);
    
this.searchRequest!.setParams(searchParams);
    
this.searchRequest!.setFileBaseName(pageName);
    

    abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;;
    

    inventorySearchUtil: InventorySearchUtil = InventorySearchUtil.getInstance()!;;
    

    productListingPages: std::vector<string> = inventorySearchUtil!.search(abeClientInformation, searchRequest, vector)!;;
    




                        for (
    index: int32_t = 0;index < productListingPages!.length; index++)
        {

                        if(productListingPages[index] == 
                                    null
                                )
                        
                                    {
                                    break;

                    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Saving Listing: " +index, this, "generateAll()");
    

                                    }
                                

    indexStr: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(index > 0)
                        
                                    {
                                    indexStr= new Integer(index).toString();
    

                                    }
                                
keywordFilenameHashMap!.put(keywordData, pageName +indexStr);
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(staticPath!.toString());
    
stringBuffer!.append(pageName);
    
stringBuffer!.append(indexStr);
    
stringBuffer!.append(AbPathData.getInstance()!.EXTENSION_SEP);
    
stringBuffer!.append(InputOutputTypeData.getInstance()!.DEFAULT);
    

    file: string = stringBuffer!.toString()!;;
    

                        if(!this.directory.create(staticPath))
                        
                                    {
                                    


                            throw new Exception("Could Not Create Directory: " +staticPath);
                    

                                    }
                                
this.savePage(file, productListingPages[index]!);
    
}

}


    addStaticPageInfoToDatabase(StoreFrontInterface storeFront, HashMap<any, any> keywordFilenameHashMap){

    keywordHashSet: Set = keywordFilenameHashMap!.keys()!;;
    

    keywordArray: std::vector<any> = keywordHashSet!.toArray()!;;
    

    size: int32_t = keywordArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    insertVector: Vector = new Vector();;
    

    keywordData: string = keywordArray[index]! as string;;
    

    fileName: string = keywordFilenameHashMap!.get(keywordData) as string;;
    
insertVector!.add(storeFront!.getName());
    
insertVector!.add(keywordData);
    
insertVector!.add(fileName);
    
this.staticPages!.insert(insertVector);
    
}

}


                //@Throws(Exception.constructor)
            
    public string generateAll(){

        try {
            
    storeFront: StoreFrontInterface = this.searchRequest!.getStoreFront()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(storeFront!.getName());
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append(storeFront!.getStaticPath());
    

    staticPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STATICPAGEGENERATIONLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Store Static Pages Path: " +staticPath, this, "generateAll()");
    

                                    }
                                

    keywordHashSet: HashSet = this.getHashSet(storeFront)!;;
    

    keywordArray: std::vector<any> = keywordHashSet!.toArray()!;;
    

    size: int32_t = keywordArray!.length
                ;;
    

    keywordFilenameHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

                        if(size == 0)
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Products For ");
    
stringBuffer!.append(storeFront!.getName());
    
stringBuffer!.append(" Store Not Found");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                

    inventorySearchUtil: InventorySearchUtil = InventorySearchUtil.getInstance()!;;
    

    vector: Vector = inventorySearchUtil!.getBasicItemIdColumn(this.searchRequest)!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    keywordData: string = keywordArray[index]! as string;;
    

                        if(keywordData!.length > 1)
                        
                                    {
                                    this.create(keywordData, keywordFilenameHashMap, vector, staticPath);
    

                                    }
                                
}

this.addStaticPageInfoToDatabase(storeFront, keywordFilenameHashMap);
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Static Files Generated Successfully For ");
    
stringBuffer!.append(storeFront!.getName());
    
stringBuffer!.append(" it used packages ");
    
stringBuffer!.append(storeFront!.getPackageLocation());
    
stringBuffer!.append(this.INVENTORY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public string generateAll(string storeName){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    

                        if(storeName != 
                                    null
                                )
                        
                                    {
                                    
                        if(storeName!.compareTo(GLOBALS2.GENERATEALLSTORES) != 0)
                        
                                    {
                                    this.searchRequest!.setStoreFront(this.storeFronts!.getStoreFrontInterface(storeName));
    
stringBuffer!.append(this.generateAll());
    
stringBuffer!.append("<br />");
    

                                    }
                                
                        else {
                            
    storeFrontVector: Vector = this.storeFronts!.getStoreFrontNames()!;;
    

    size: int32_t = storeFrontVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
storeName= storeFrontVector!.get(index) as string;
    
this.searchRequest!.setStoreFront(this.storeFronts!.getStoreFrontInterface(storeName));
    
stringBuffer!.append(this.generateAll());
    
stringBuffer!.append("<br />");
    
}


                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Generation Failed No Store Specified<br/>";
    

                        }
                            
stringBuffer!.append("All Static Pages Generated<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


};

            

