
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
        
#include <java/util/zip/ZipEntry.h>

      
#include <java/util/zip/ZipInputStream.h>

      
#include <java/util/zip/ZipOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ZipFileUtil
            : public Object
         {
        

    private: static const instance: ZipFileUtil = new ZipFileUtil();

    public static ZipFileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ZipFileUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public create(string outFilename, BasicArrayList fileBasicArrayList){

        try {
            
    zipFile: AbFile = AbFile.createAbFile(outFilename)!;;
    

                        if(zipFile!.exists())
                        
                                    {
                                    zipFile!.delete();
    

                                    }
                                
zipFile!.createNewFile();
    

    outputStream: ZipOutputStream = new ZipOutputStream(AbFileOutputStream.createFromAbFile(zipFile));;
    

    streamUtil: StreamUtil = StreamUtil.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    byteArray: std::vector<int8_t> = new Array(16384);;
    

    fileInputStream: AbFileInputStream;;
    

    size: int32_t = fileBasicArrayList!.size()!;;
    

    current: int32_t = 0;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    file: AbFile = fileBasicArrayList!.get(i) as AbFile;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(file.isFile())
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.appendint(current);
    
stringBuffer!.append(" Creating Zip File Entry: ");
    
stringBuffer!.append(file.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "create()");
    

        try {
            fileInputStream= new AbFileInputStream(file);
    
outputStream!.putNextEntry(new ZipEntry(file.getPath()));
    
streamUtil!.get(fileInputStream, outputStream, byteArray);
    
outputStream!.closeEntry();
    
streamUtil!.close(fileInputStream);
    

                //: 
} catch(e) 
            {
this.logUtil!.putF("Skipping File (Probably Local): " +file.getPath(), this, "create()");
    
}


                                    }
                                
current++;
    
}

streamUtil!.close(outputStream);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "create", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public unzip(string path, AbFile zipFile, string fileName){

    buffer: std::vector<int8_t> = new Array(16384);;
    

    inputStream: ZipInputStream = 
                null
            ;;
    

        try {
            inputStream= new ZipInputStream(new AbFileInputStream(zipFile));
    

    zipEntry: ZipEntry;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    fileUtil: FileUtil = FileUtil.getInstance()!;;
    

        while((zipEntry= inputStream!.getNextEntry()) != 
                                    null
                                )
        {

    entryName: string = zipEntry!.getName()!;;
    

                        if(zipEntry!.isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    entryFile: AbFile = AbFile.createAbFile(path +entryName)!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("ZipEntry Name: ");
    
stringBuffer!.append(entryName);
    
stringBuffer!.append(" isFile: ");
    
stringBuffer!.appendboolean(entryFile!.isFile());
    
stringBuffer!.append(" isDirectory: ");
    
stringBuffer!.appendboolean(entryFile!.isDirectory());
    
stringBuffer!.append(" getParent: ");
    
stringBuffer!.append(entryFile!.getParent());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "unzip");
    

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(entryFile)!;;
    
fileUtil!.write(inputStream, dataOutputStream, buffer);
    

                        }
                            
inputStream!.closeEntry();
    
}


         finally {
            StreamUtil.getInstance()!.close(inputStream);
    

         }
        
}


};

            

