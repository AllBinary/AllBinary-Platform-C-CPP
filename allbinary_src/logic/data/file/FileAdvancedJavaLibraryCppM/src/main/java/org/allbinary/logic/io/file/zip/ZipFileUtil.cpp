
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
        



            #include <vector>
        
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

    private: static ZipFileUtil instance() { return ZipFileUtil(); }

    public: static ZipFileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ZipFileUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: void create(std::string outFilename, BasicArrayList fileBasicArrayList){

        try {
            
    AbFile zipFile = AbFile::createAbFile(outFilename);;
    

                        if(zipFile.exists())
                        
                                    {
                                    zipFile.delete();
    

                                    }
                                
zipFile.createNewFile();
    

    ZipOutputStream outputStream = ZipOutputStream(AbFileOutputStream::createFromAbFile(zipFile));;
    

    StreamUtil streamUtil = StreamUtil::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    

    std::vector<int8_t> byteArray = new Array(16384);;
    

    AbFileInputStream fileInputStream;;
    

    int32_t size = fileBasicArrayList.size();;
    

    int32_t current = 0;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    AbFile file = fileBasicArrayList.get(i) as AbFile;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(file.isFile())
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.appendint(current);
    
stringBuffer.append(" Creating Zip File Entry: ");
    
stringBuffer.append(file.getPath());
    
this->logUtil.putF(stringBuffer.toString(), this, "create()");
    

        try {
            fileInputStream= AbFileInputStream(file);
    
outputStream.putNextEntry(ZipEntry(file.getPath()));
    
streamUtil.get(fileInputStream, outputStream, byteArray);
    
outputStream.closeEntry();
    
streamUtil.close(fileInputStream);
    

                //: 
} catch(e) 
            {
this->logUtil.putF("Skipping File (Probably Local): " +file.getPath(), this, "create()");
    
}


                                    }
                                
current++;
    
}

streamUtil.close(outputStream);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "create", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void unzip(std::string path, AbFile zipFile, std::string fileName){

    std::vector<int8_t> buffer = new Array(16384);;
    

    ZipInputStream inputStream = 
                null
            ;;
    

        try {
            inputStream= ZipInputStream(AbFileInputStream(zipFile));
    

    ZipEntry zipEntry;;
    

    StringMaker stringBuffer = StringMaker();;
    

    FileUtil fileUtil = FileUtil::getInstance();;
    

        while((zipEntry= inputStream.getNextEntry()) != 
                                    nullptr
                                )
        {

    std::string entryName = zipEntry.getName();;
    

                        if(zipEntry.isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    AbFile entryFile = AbFile::createAbFile(path +entryName);;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("ZipEntry Name: ");
    
stringBuffer.append(entryName);
    
stringBuffer.append(" isFile: ");
    
stringBuffer.appendboolean(entryFile.isFile());
    
stringBuffer.append(" isDirectory: ");
    
stringBuffer.appendboolean(entryFile.isDirectory());
    
stringBuffer.append(" getParent: ");
    
stringBuffer.append(entryFile.getParent());
    
this->logUtil.putF(stringBuffer.toString(), this, "unzip");
    

    AbDataOutputStream dataOutputStream = DataOutputStreamFactory::getInstance().getInstanceForAbFile(entryFile);;
    
fileUtil.write(inputStream, dataOutputStream, buffer);
    

                        }
                            
inputStream.closeEntry();
    
}


         finally {
            StreamUtil::getInstance().close(inputStream);
    

         }
        
}


};

            

