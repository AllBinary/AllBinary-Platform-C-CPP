
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RegistrationConfiguration
            : public Object
         {
        

    private: static const SINGLETON: RegistrationConfiguration = new RegistrationConfiguration();

    public static RegistrationConfiguration getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RegistrationConfiguration.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: registrationCode: string = "No Registration Code";

    public const NAME: string = "registrationid";

    private: const FILE: string = "Registration.dat";

private constructor (){

            super();
        
        try {
            
                        if(FileFactory.getInstance()!.isFile(this.FILE))
                        
                                    {
                                    this.read();
    

                                    }
                                
                        else {
                            this.write();
    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR, e);
    
}

}


                //@Throws(Exception.constructor)
            
    read(){

    fileInputStreamFactory: FileStreamFactory = FileStreamFactory.getInstance()!;;
    

    fileInputStream: InputStream = fileInputStreamFactory!.getFileInputStreamInstance(StringUtil.getInstance()!.EMPTY_STRING, this.FILE)!;;
    

    dataInputStream: DataInputStream = new DataInputStream(fileInputStream);;
    
this.setRegistrationCode(dataInputStream!.readUTF());
    
PreLogUtil.put(new StringMaker().append("Read Configuration: ")!.append(this.toString())!.toString(), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    public write(){

    dataOutputStream: AbDataOutputStream = 
                null
            ;;
    

        try {
            this.logUtil!.putF(new StringMaker().append("Write Configuration: ")!.append(this.toString())!.toString(), this, "write");
    

    fileInputStreamFactory: FileStreamFactory = FileStreamFactory.getInstance()!;;
    

    fileOutputStream: OutputStream = fileInputStreamFactory!.getFileOutputStreamInstance(StringUtil.getInstance()!.EMPTY_STRING, this.FILE)!;;
    
dataOutputStream= new AbDataOutputStream(fileOutputStream);
    
dataOutputStream!.writeUTF(this.getRegistrationCode());
    
dataOutputStream!.flush();
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    

         }
        
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append("Registration Code: ")!.append(this.getRegistrationCode())!.toString();;
    
}


    public setRegistrationCode(string registrationCode){
this.registrationCode= registrationCode;
    
}


    public string getRegistrationCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.registrationCode;
    
}


};

            

