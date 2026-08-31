
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: name: string;

    private: userName: string;

    private: basketName: string;

    private: homeHostName: string;

    private: homeHostNamePath: string;

    private: hostName: string;

    private: hostNamePath: string;

    private: testHomeHostName: string;

    private: testHomeHostNamePath: string;

    private: testHostName: string;

    private: testHostNamePath: string;

    private: imagePath: string;

    private: staticPath: string;

    private: categoryPath: string;

    private: inventoryControl: string;

    private: subStores: string;

    private: tagLocation: string;

    private: packageLocation: string;

    private: ftp: string;

    private: ftpPath: string;

    private: ftpUserName: string;

    private: ftpPassword: string;

    private: testFtp: string;

    private: testFtpPath: string;

    private: testFtpUserName: string;

    private: testFtpPassword: string;

    private: timeCreated: string;

    private: lastModified: string;

public constructor (){

            super();
        }


public constructor (HashMap<any, any> storeHashMap){

            super();
        
    storeFrontData: StoreFrontData = StoreFrontData.getInstance()!;;
    
this.name= storeHashMap!.get(storeFrontData!.NAME) as string;
    
this.userName= storeHashMap!.get(UserData.USERNAME) as string;
    
this.basketName= storeHashMap!.get(storeFrontData!.NAME) as string;
    
this.homeHostName= storeHashMap!.get(storeFrontData!.HOMEHOSTNAME) as string;
    
this.homeHostNamePath= storeHashMap!.get(storeFrontData!.HOMEHOSTNAMEPATH) as string;
    
this.hostName= storeHashMap!.get(storeFrontData!.HOSTNAME) as string;
    
this.hostNamePath= storeHashMap!.get(storeFrontData!.HOSTNAMEPATH) as string;
    
this.testHomeHostName= storeHashMap!.get(storeFrontData!.TESTHOMEHOSTNAME) as string;
    
this.testHomeHostNamePath= storeHashMap!.get(storeFrontData!.TESTHOMEHOSTNAMEPATH) as string;
    
this.testHostName= storeHashMap!.get(storeFrontData!.TESTHOSTNAME) as string;
    
this.testHostNamePath= storeHashMap!.get(storeFrontData!.TESTHOSTNAMEPATH) as string;
    
this.imagePath= storeHashMap!.get(storeFrontData!.IMAGEPATH) as string;
    
this.staticPath= storeHashMap!.get(storeFrontData!.STATICPATH) as string;
    
this.categoryPath= storeHashMap!.get(storeFrontData!.CATEGORYPATH) as string;
    
this.inventoryControl= storeHashMap!.get(storeFrontData!.INVENTORYCONTROL) as string;
    
this.subStores= storeHashMap!.get(storeFrontData!.SUBSTORES) as string;
    
this.tagLocation= storeHashMap!.get(storeFrontData!.TAGLOCATION) as string;
    
this.packageLocation= storeHashMap!.get(storeFrontData!.PACKAGELOCATION) as string;
    
this.ftp= storeHashMap!.get(storeFrontData!.FTP) as string;
    
this.ftpPath= storeHashMap!.get(storeFrontData!.FTPPATH) as string;
    
this.ftpUserName= storeHashMap!.get(storeFrontData!.FTPUSERNAME) as string;
    
this.ftpPassword= storeHashMap!.get(storeFrontData!.FTPPASSWORD) as string;
    
this.testFtp= storeHashMap!.get(storeFrontData!.TESTFTP) as string;
    
this.testFtpPath= storeHashMap!.get(storeFrontData!.TESTFTPPATH) as string;
    
this.testFtpUserName= storeHashMap!.get(storeFrontData!.TESTFTPUSERNAME) as string;
    
this.testFtpPassword= storeHashMap!.get(storeFrontData!.TESTFTPPASSWORD) as string;
    
this.timeCreated= storeHashMap!.get(EntryData.getInstance()!.TIMECREATED) as string;
    
this.lastModified= storeHashMap!.get(EntryData.getInstance()!.LASTMODIFIED) as string;
    
}


    public string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.URLGLOBALS.getTestHtmlPath() +this.getCurrentHostNamePath();
    
}


    public string getCurrentHostName(){

    location: string = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHostName();
    

                                    }
                                
                        else {
                            location= this.getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHostNamePath(){

    location: string = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this.getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHomeHostName(){

    location: string = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this.getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHomeHostNamePath(){

    location: string = 
                null
            ;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this.getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public string getBasketName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basketName;
    
}


    public string getHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.homeHostName;
    
}


    public string getHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.homeHostNamePath;
    
}


    public string getHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hostName;
    
}


    public string getHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hostNamePath;
    
}


    public string getTestHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHomeHostName;
    
}


    public string getTestHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHomeHostNamePath;
    
}


    public string getTestHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHostName;
    
}


    public string getTestHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHostNamePath;
    
}


    public string getStaticPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.staticPath;
    
}


    public string getCategoryPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPath;
    
}


    public string getInventoryControl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getSubStores(){

        try {
            
    tokenizer: Tokenizer = new Tokenizer(CommonSeps.getInstance()!.SEMICOLON);;
    

    subStoreVector: BasicArrayList = tokenizer.getTokensFromString(this.subStores, new BasicArrayListD())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subStoreVector;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    public string getTagLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tagLocation;
    
}


    public string getPackageLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.packageLocation;
    
}


    public string getFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftp;
    
}


    public string getFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpUserName;
    
}


    public string getFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPassword;
    
}


    public string getTestFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtp;
    
}


    public string getTestFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpUserName;
    
}


    public string getTestFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpPassword;
    
}


    public string getFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPath;
    
}


    public string getTestFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpPath;
    
}


    public string getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeCreated;
    
}


    public string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastModified;
    
}


};

            

