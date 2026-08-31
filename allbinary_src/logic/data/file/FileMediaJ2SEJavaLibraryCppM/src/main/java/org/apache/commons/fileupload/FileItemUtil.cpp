
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FileItemStream.h"
#include "FileItem.h"

class FileItemUtil
            : public Object
         {
        

    private: static const instance: FileItemUtil = new FileItemUtil();

    public static FileItemUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileItemUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const DEFAULT_CHARSET: string = "ISO-8859-1";

                //@Throws(Exception.constructor)
            
    public string getString(std::vector<int8_t> byteArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArray;
    
}


                //@Throws(Exception.constructor)
            
    public string getString(FileItemStream fileItem){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBytes.toCharArray().slice(0, ).join('');
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<int8_t> getBytes(FileItemStream fileItem){

    streamUtil: StreamUtil = StreamUtil.getInstance()!;;
    

    inputStream: InputStream = 
                null
            ;;
    

    outputStream: ByteArrayOutputStream = 
                null
            ;;
    

        try {
            inputStream= fileItem!.openStream();
    
outputStream= new ByteArrayOutputStream();
    

                        if(fileItem!.isFormField())
                        
                                    {
                                    this.logUtil!.putF("FileItemStream FieldName: " +fileItem!.getFieldName(), this, "write()");
    

                                    }
                                
                        else {
                            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Uploaded File FieldName: ");
    
stringBuffer!.append(fileItem!.getFieldName());
    
stringBuffer!.append(" name = ");
    
stringBuffer!.append(fileItem!.getName());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "write()");
    

                        }
                            
outputStream= streamUtil!.get(inputStream, outputStream, new Array(16384)) as ByteArrayOutputStream;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream!.toByteArray();;
    

         finally {
            streamUtil!.close(outputStream);
    
streamUtil!.close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public write(FileItem fileItem, AbFile file){
fileItem!.write(AbFileNativeUtil.get(file));
    
}


};

            

