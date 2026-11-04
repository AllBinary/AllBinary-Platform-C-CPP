
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFront.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/globals/URLGLOBALS.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"


BasicStoreFront::BasicStoreFront(){
}


BasicStoreFront::BasicStoreFront(HashMap<Object*, Object*>* storeHashMap){

    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    
this->name= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->NAME));
    
this->userName= JavaBoxes::unbox<std::string>(storeHashMap->get(UserData::USERNAME));
    
this->basketName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->NAME));
    
this->homeHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOMEHOSTNAME));
    
this->homeHostNamePath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOMEHOSTNAMEPATH));
    
this->hostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOSTNAME));
    
this->hostNamePath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOSTNAMEPATH));
    
this->testHomeHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOMEHOSTNAME));
    
this->testHomeHostNamePath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOMEHOSTNAMEPATH));
    
this->testHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOSTNAME));
    
this->testHostNamePath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOSTNAMEPATH));
    
this->imagePath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->IMAGEPATH));
    
this->staticPath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->STATICPATH));
    
this->categoryPath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->CATEGORYPATH));
    
this->inventoryControl= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->INVENTORYCONTROL));
    
this->subStores= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->SUBSTORES));
    
this->tagLocation= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TAGLOCATION));
    
this->packageLocation= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->PACKAGELOCATION));
    
this->ftp= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTP));
    
this->ftpPath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTPPATH));
    
this->ftpUserName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTPUSERNAME));
    
this->ftpPassword= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTPPASSWORD));
    
this->testFtp= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTP));
    
this->testFtpPath= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTPPATH));
    
this->testFtpUserName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTPUSERNAME));
    
this->testFtpPassword= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTPPASSWORD));
    
this->timeCreated= JavaBoxes::unbox<std::string>(storeHashMap->get(EntryData::getInstance()->TIMECREATED));
    
this->lastModified= JavaBoxes::unbox<std::string>(storeHashMap->get(EntryData::getInstance()->LASTMODIFIED));
    
}


    auto BasicStoreFront::getTestHtmlPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return URLGLOBALS::getTestHtmlPath() +this->getCurrentHostNamePath();
    
}


    auto BasicStoreFront::getCurrentHostName() -> std::string{

    std::string location = 
                nullptr
            ;;
    

                        if(URLGLOBALS::isTestingMode())
                        
                                    {
                                    location= this->getTestHostName();
    

                                    }
                                
                        else {
                            location= this->getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return location;
    
}


    auto BasicStoreFront::getCurrentHostNamePath() -> std::string{

    std::string location = 
                nullptr
            ;;
    

                        if(URLGLOBALS::isTestingMode())
                        
                                    {
                                    location= this->getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return location;
    
}


    auto BasicStoreFront::getCurrentHomeHostName() -> std::string{

    std::string location = 
                nullptr
            ;;
    

                        if(URLGLOBALS::isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this->getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return location;
    
}


    auto BasicStoreFront::getCurrentHomeHostNamePath() -> std::string{

    std::string location = 
                nullptr
            ;;
    

                        if(URLGLOBALS::isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return location;
    
}


    auto BasicStoreFront::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto BasicStoreFront::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userName;
    
}


    auto BasicStoreFront::getBasketName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basketName;
    
}


    auto BasicStoreFront::getHomeHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->homeHostName;
    
}


    auto BasicStoreFront::getHomeHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->homeHostNamePath;
    
}


    auto BasicStoreFront::getHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hostName;
    
}


    auto BasicStoreFront::getHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hostNamePath;
    
}


    auto BasicStoreFront::getTestHomeHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testHomeHostName;
    
}


    auto BasicStoreFront::getTestHomeHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testHomeHostNamePath;
    
}


    auto BasicStoreFront::getTestHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testHostName;
    
}


    auto BasicStoreFront::getTestHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testHostNamePath;
    
}


    auto BasicStoreFront::getStaticPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->staticPath;
    
}


    auto BasicStoreFront::getCategoryPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryPath;
    
}


    auto BasicStoreFront::getInventoryControl() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicStoreFront::getSubStores() -> BasicArrayList*{

        try {
            
    Tokenizer* tokenizer = new Tokenizer(CommonSeps::getInstance()->SEMICOLON);;
    

    BasicArrayList* subStoreVector = tokenizer->getTokensFromString(this->subStores, new BasicArrayListD());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return subStoreVector;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    auto BasicStoreFront::getTagLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tagLocation;
    
}


    auto BasicStoreFront::getPackageLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->packageLocation;
    
}


    auto BasicStoreFront::getFtp() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ftp;
    
}


    auto BasicStoreFront::getFtpUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ftpUserName;
    
}


    auto BasicStoreFront::getFtpPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ftpPassword;
    
}


    auto BasicStoreFront::getTestFtp() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testFtp;
    
}


    auto BasicStoreFront::getTestFtpUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testFtpUserName;
    
}


    auto BasicStoreFront::getTestFtpPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testFtpPassword;
    
}


    auto BasicStoreFront::getFtpPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ftpPath;
    
}


    auto BasicStoreFront::getTestFtpPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testFtpPath;
    
}


    auto BasicStoreFront::getTimeCreated() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeCreated;
    
}


    auto BasicStoreFront::getLastModified() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastModified;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_CPP
