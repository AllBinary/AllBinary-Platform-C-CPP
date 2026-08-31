
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/HttpData.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DbConnectionInfo.h"

class DbInitInfo: public DbConnectionInfo {
        

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const httpData: HttpData = HttpData.getInstance()!;

    private: const GET_URL: string = "getUrl";

    private: const PACKAGE: string = FREEBLISKET_PATH_GLOBALS.getInstance()!.DBINITPATH;

    private: initFileName: string;

    private: hasRead: bool = false;

public constructor (string initFileName, bool read){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initFileName= initFileName;
    

                        if(read)
                        
                                    {
                                    this.updateIfNeeded();
    

                                    }
                                
                        else {
                            this.setHasRead(true);
    

                        }
                            
}


    public string getUrl(){

    url: string = super.getUrl()!;;
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put(this.httpData!.URL_LABEL +url, this, GET_URL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return url;
    
}


                //@Throws(Exception.constructor)
            
    public write(){

    PATH: AbPath = new AbPath(URLGLOBALS.getWebappPath() +this.PACKAGE, StringUtil.getInstance()!.EMPTY_STRING);;
    
this.directory.create(PATH);
    

    FILEABPATH: AbPath = new AbPath(URLGLOBALS.getWebappPath() +this.PACKAGE, this.initFileName);;
    

        try {
            
    newFile: AbFile = AbFile.createAbFileFromAbPath(FILEABPATH)!;;
    
newFile!.createNewFile();
    

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(newFile)!;;
    

        try {
            
    cryptedJdbcDriver: std::vector<int8_t> = new WeakCrypt(1).encrypt(this.getJdbcDriver())!.getBytes()!;;
    

    cryptedName: std::vector<int8_t> = new WeakCrypt(2).encrypt(this.getName())!.getBytes()!;;
    

    cryptedUserName: std::vector<int8_t> = new WeakCrypt(3).encrypt(this.getUserName())!.getBytes()!;;
    

    cryptedPassword: std::vector<int8_t> = new WeakCrypt(4).encrypt(this.getPassword())!.getBytes()!;;
    

    cryptedSchema: std::vector<int8_t> = new WeakCrypt(5).encrypt(this.getSchema())!.getBytes()!;;
    

    cryptedServer: std::vector<int8_t> = new WeakCrypt(6).encrypt(this.getServer())!.getBytes()!;;
    

    cryptedPort: std::vector<int8_t> = new WeakCrypt(7).encrypt(this.getPort())!.getBytes()!;;
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedJdbcDriver));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedName));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedUserName));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedPassword));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedSchema));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedServer));
    
dataOutputStream!.writeUTF(DatabaseEncoder.encode(cryptedPort));
    
this.hasRead= false;
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    

         }
        

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("Failed Write: " +FILEABPATH.toString(), this, "write", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    load(){

    FILEABPATH: AbPath = new AbPath(URLGLOBALS.getWebappPath() +this.PACKAGE, this.initFileName);;
    

        try {
            
    file: AbFile = AbFile.createAbFileFromAbPath(FILEABPATH)!;;
    

                        if(file.isFile())
                        
                                    {
                                    
    iFile: AbFileInputStream = new AbFileInputStream(file);;
    

    iData: AbDataInputStream = new AbDataInputStream(iFile);;
    

        try {
            
    decryptedJdbcDriver: string = decode.toCharArray();;
    

    decryptedName: string = decode.toCharArray();;
    

    decryptedUserName: string = decode.toCharArray();;
    

    decryptedPassword: string = decode.toCharArray();;
    

    decryptedSchema: string = decode.toCharArray();;
    

    decryptedServer: string = decode.toCharArray();;
    

    decryptedPort: string = decode.toCharArray();;
    
this.setJdbcDriver(new WeakCrypt(1).decrypt(decryptedJdbcDriver));
    
this.setName(new WeakCrypt(2).decrypt(decryptedName));
    
this.setUserName(new WeakCrypt(3).decrypt(decryptedUserName));
    
this.setPassword(new WeakCrypt(4).decrypt(decryptedPassword));
    
this.setSchema(new WeakCrypt(5).decrypt(decryptedSchema));
    
this.setServer(new WeakCrypt(6).decrypt(decryptedServer));
    
this.setPort(new WeakCrypt(7).decrypt(decryptedPort));
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

         finally {
            StreamUtil.getInstance()!.close(iData);
    

         }
        

                                    }
                                
                        else {
                            this.hasRead= false;
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("Not a File - Failed Loading: " +FILEABPATH.toString(), this, this.commonStrings!.LOAD);
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("Failed Loading: " +FILEABPATH.toString(), this, this.commonStrings!.LOAD, e);
    

                                    }
                                
}

}


    public setHasRead(bool value){
this.hasRead= value;
    
}


    updateIfNeeded(){

        try {
            
                        if(!this.hasRead)
                        
                                    {
                                    this.hasRead= true;
    
this.load();
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, "updateIfNeeded", e);
    

                                    }
                                
}

}


    public string getName(){
this.updateIfNeeded();
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("Name: " +super.getName(), this, "getName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getName();;
    
}


    public string getUserName(){
this.updateIfNeeded();
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("Name: " +super.getUserName(), this, "getUserName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getUserName();;
    
}


    public string getPassword(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getPassword();;
    
}


    public string getSchema(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getSchema();;
    
}


    public string getServer(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getServer();;
    
}


    public string getPort(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getPort();;
    
}


};

            

