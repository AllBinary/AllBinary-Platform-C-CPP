
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
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <java/io/UnsupportedEncodingException.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileItemHeaders.h>

      
#include <org/apache/commons/fileupload/FileItemUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileItem
            : public Object
        : public FileItem {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const name: string;

    private: fieldName: string;

    private: const byteArray: std::vector<int8_t>;

public constructor (string name, string fieldName, std::vector<int8_t> byteArray){

            super();
        this.name= name;
    
this.fieldName= fieldName;
    
this.byteArray= byteArray;
    
}


                //@Throws(IOException.constructor)
            
    public InputStream getInputStream(){



                            throw new IOException(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public bool isInMemory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public int64_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.byteArray!.length;
    
}


    public std::vector<int8_t> get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.byteArray;
    
}


                //@Throws(UnsupportedEncodingException.constructor)
            
    public string getString(string encoding){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.byteArray;
    
}


    public string getString(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileItemUtil.getInstance()!.getString(this.byteArray);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getString", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}

}


                //@Throws(Exception.constructor)
            
    public write(File file){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public write(AbFile file){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public delete(){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, "delete()");
    
}


    public string getFieldName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fieldName;
    
}


    public setFieldName(string name){
this.fieldName= name;
    
}


    public bool isFormField(){

                        if(StringValidationUtil.getInstance()!.isEmpty(this.fieldName))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public setFormField(bool state){
}


                //@Throws(IOException.constructor)
            
    public OutputStream getOutputStream(){



                            throw new IOException(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public FileItemHeaders getHeaders(){



                            throw new RuntimeException(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public setHeaders(FileItemHeaders fih){



                            throw new RuntimeException(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


};

            

