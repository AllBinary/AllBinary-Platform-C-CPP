
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicStoreFrontInterface.h"

class BasicStoreFront
            : public Object
        : public BasicStoreFrontInterface {

    private: std::string name;

    private: std::string userName;

    private: std::string basketName;

    private: std::string homeHostName;

    private: std::string homeHostNamePath;

    private: std::string hostName;

    private: std::string hostNamePath;

    private: std::string testHomeHostName;

    private: std::string testHomeHostNamePath;

    private: std::string testHostName;

    private: std::string testHostNamePath;

    private: std::string imagePath;

    private: std::string staticPath;

    private: std::string categoryPath;

    private: std::string inventoryControl;

    private: std::string subStores;

    private: std::string tagLocation;

    private: std::string packageLocation;

    private: std::string ftp;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

    private: std::string testFtp;

    private: std::string testFtpPath;

    private: std::string testFtpUserName;

    private: std::string testFtpPassword;

    private: std::string timeCreated;

    private: std::string lastModified;

public: BasicStoreFront(){
}


public: BasicStoreFront(HashMap<Object*, Object*> storeHashMap){

    StoreFrontData storeFrontData = StoreFrontData::getInstance();;
    
this->name= storeHashMap.get(storeFrontData.NAME);
    
this->userName= storeHashMap.get(UserData::USERNAME);
    
this->basketName= storeHashMap.get(storeFrontData.NAME);
    
this->homeHostName= storeHashMap.get(storeFrontData.HOMEHOSTNAME);
    
this->homeHostNamePath= storeHashMap.get(storeFrontData.HOMEHOSTNAMEPATH);
    
this->hostName= storeHashMap.get(storeFrontData.HOSTNAME);
    
this->hostNamePath= storeHashMap.get(storeFrontData.HOSTNAMEPATH);
    
this->testHomeHostName= storeHashMap.get(storeFrontData.TESTHOMEHOSTNAME);
    
this->testHomeHostNamePath= storeHashMap.get(storeFrontData.TESTHOMEHOSTNAMEPATH);
    
this->testHostName= storeHashMap.get(storeFrontData.TESTHOSTNAME);
    
this->testHostNamePath= storeHashMap.get(storeFrontData.TESTHOSTNAMEPATH);
    
this->imagePath= storeHashMap.get(storeFrontData.IMAGEPATH);
    
this->staticPath= storeHashMap.get(storeFrontData.STATICPATH);
    
this->categoryPath= storeHashMap.get(storeFrontData.CATEGORYPATH);
    
this->inventoryControl= storeHashMap.get(storeFrontData.INVENTORYCONTROL);
    
this->subStores= storeHashMap.get(storeFrontData.SUBSTORES);
    
this->tagLocation= storeHashMap.get(storeFrontData.TAGLOCATION);
    
this->packageLocation= storeHashMap.get(storeFrontData.PACKAGELOCATION);
    
this->ftp= storeHashMap.get(storeFrontData.FTP);
    
this->ftpPath= storeHashMap.get(storeFrontData.FTPPATH);
    
this->ftpUserName= storeHashMap.get(storeFrontData.FTPUSERNAME);
    
this->ftpPassword= storeHashMap.get(storeFrontData.FTPPASSWORD);
    
this->testFtp= storeHashMap.get(storeFrontData.TESTFTP);
    
this->testFtpPath= storeHashMap.get(storeFrontData.TESTFTPPATH);
    
this->testFtpUserName= storeHashMap.get(storeFrontData.TESTFTPUSERNAME);
    
this->testFtpPassword= storeHashMap.get(storeFrontData.TESTFTPPASSWORD);
    
this->timeCreated= storeHashMap.get(EntryData::getInstance().TIMECREATED);
    
this->lastModified= storeHashMap.get(EntryData::getInstance().LASTMODIFIED);
    
}


    public: std::string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.URLGLOBALS.getTestHtmlPath() +this->getCurrentHostNamePath();
    
}


    public: std::string getCurrentHostName(){

    std::string location = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHostName();
    

                                    }
                                
                        else {
                            location= this->getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHostNamePath(){

    std::string location = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHomeHostName(){

    std::string location = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this->getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHomeHostNamePath(){

    std::string location = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string getBasketName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basketName;
    
}


    public: std::string getHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostName;
    
}


    public: std::string getHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostNamePath;
    
}


    public: std::string getHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostName;
    
}


    public: std::string getHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostNamePath;
    
}


    public: std::string getTestHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostName;
    
}


    public: std::string getTestHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostNamePath;
    
}


    public: std::string getTestHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostName;
    
}


    public: std::string getTestHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostNamePath;
    
}


    public: std::string getStaticPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->staticPath;
    
}


    public: std::string getCategoryPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPath;
    
}


    public: std::string getInventoryControl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getSubStores(){

        try {
            
    Tokenizer tokenizer = Tokenizer(CommonSeps::getInstance().SEMICOLON);;
    

    BasicArrayList subStoreVector = tokenizer.getTokensFromString(this->subStores, BasicArrayListD());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subStoreVector;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    public: std::string getTagLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tagLocation;
    
}


    public: std::string getPackageLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->packageLocation;
    
}


    public: std::string getFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftp;
    
}


    public: std::string getFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    public: std::string getFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    public: std::string getTestFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtp;
    
}


    public: std::string getTestFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpUserName;
    
}


    public: std::string getTestFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPassword;
    
}


    public: std::string getFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath;
    
}


    public: std::string getTestFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPath;
    
}


    public: std::string getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    public: std::string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastModified;
    
}


};

            

