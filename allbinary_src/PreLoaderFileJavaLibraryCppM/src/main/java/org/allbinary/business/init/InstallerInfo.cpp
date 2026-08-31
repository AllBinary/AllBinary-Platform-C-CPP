
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
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InstallerInfo
            : public Object
         {
        

    private: static const instance: InstallerInfo = new InstallerInfo();

    private: static const INITFILENAME: string = "installerdata.dat";

    private: static const PACKAGE: string = PATH_GLOBALS.getInstance()!.INIT_PATH;

    private: static userName: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: static password: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: static hasRead: bool = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static setHasRead(bool value){
InstallerInfo.hasRead= value;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public write(){

    FILEABPATH: AbPath = new AbPath(URLGLOBALS.getMainPath() +InstallerInfo.PACKAGE, InstallerInfo.INITFILENAME);;
    

        try {
            
    newFile: AbFile = AbFile.createAbFileFromAbPath(FILEABPATH)!;;
    
newFile!.createNewFile();
    

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(newFile)!;;
    

    cryptedUserName: std::vector<int8_t> = new WeakCrypt(1).encrypt(this.getUserName())!.getBytes()!;;
    

    cryptedPassword: std::vector<int8_t> = new WeakCrypt(2).encrypt(this.getPassword())!.getBytes()!;;
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedUserName));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedPassword));
    
InstallerInfo.hasRead= false;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    this.logUtil!.putF("Failed", this, "write");
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    read(){

    FILEABPATH: AbPath = new AbPath(URLGLOBALS.getMainPath() +InstallerInfo.PACKAGE, InstallerInfo.INITFILENAME);;
    

        try {
            
    file: AbFile = AbFile.createAbFileFromAbPath(FILEABPATH)!;;
    

                        if(file.isFile())
                        
                                    {
                                    
    iFile: AbFileLocalInputStream = new AbFileLocalInputStream(file);;
    

    iData: AbDataInputStream = new AbDataInputStream(iFile);;
    

    decryptedUserName: string = decode.toCharArray();;
    

    decryptedPassword: string = decode.toCharArray();;
    
this.setUserName(new WeakCrypt(1).decrypt(decryptedUserName));
    
this.setPassword(new WeakCrypt(2).decrypt(decryptedPassword));
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    this.logUtil!.putF("Not a File - Failed Loading: " +FILEABPATH.toString(), this, "read");
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    this.logUtil!.putF("Failed", this, "read");
    

                                    }
                                
}

}


    public setUserName(string userName){
InstallerInfo.userName= userName;
    
}


    public setPassword(string password){
InstallerInfo.password= password;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    updateIfNeeded(){

                        if(!InstallerInfo.hasRead)
                        
                                    {
                                    InstallerInfo.hasRead= true;
    
this.read();
    

                        if(InstallerInfo.userName == 
                                    null
                                 || InstallerInfo.password == 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    this.logUtil!.putF("Failed", this, "updateIfNeeded");
    

                                    }
                                

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public string getUserName(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InstallerInfo.userName;
    
}


                //@Throws(Exception.constructor)
            
    public string getPassword(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InstallerInfo.password;
    
}


                //@Throws(Exception.constructor)
            
    public bool isValid(string userName, string password){
this.updateIfNeeded();
    

                        if(this.userName != 
                                    null
                                 && this.userName!.compareTo(userName) == 0 && this.password != 
                                    null
                                 && this.password.compareTo(password) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

