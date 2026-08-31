
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/AbIOSystem.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"
#include "FilePathData.h"
#include "FileWrapperUtil.h"
#include "FileUtil2.h"
//data/init/views/TestStore/template/type/genericTemplateObjectConfig.xml
class FileUtil
            : public Object
         {
        

    private: static const instance: FileUtil = new FileUtil();

    public static FileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUtil.instance;
    
}


    static string getNewDirectory(AbFile fromFile){

    newDirectory: string = fromFile!.getPath()!;;
    

    separatorChar: string = FilePathData.getInstance()!.PATH_START;;
    

                        if(AbIOSystem.getInstance()!.isType("com.vobject.appengine.java.io"))
                        
                                    {
                                    separatorChar= AbPathData.getInstance()!.SEPARATOR;
    

                                    }
                                

    lastIndex: int32_t = newDirectory!.lastIndexOf(separatorChar)!;;
    

                        if(lastIndex >= newDirectory!.length)
                        
                                    {
                                    newDirectory= newDirectory!.substring(0, newDirectory!.length -1);
    
lastIndex= newDirectory!.lastIndexOf(separatorChar);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newDirectory!.substring(lastIndex, newDirectory!.length);;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const logConfigTypeFactory: LogConfigTypeFactory = LogConfigTypeFactory.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbFile file){

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(file)!;;
    
this.write(inputStream, dataOutputStream);
    
}


                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbDataOutputStream dataOutputStream){

        try {
            dataOutputStream= StreamUtil.getInstance()!.get(inputStream, dataOutputStream, new Array(16384)) as AbDataOutputStream;
    
dataOutputStream!.flush();
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbDataOutputStream dataOutputStream, std::vector<int8_t> buffer){

        try {
            dataOutputStream= StreamUtil.getInstance()!.get(inputStream, dataOutputStream, buffer) as AbDataOutputStream;
    
dataOutputStream!.flush();
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    copy(AbFileInputStream dataInputStream, AbDataOutputStream dataOutputStream){

        try {
            dataOutputStream= StreamUtil.getInstance()!.get(dataInputStream, dataOutputStream, new Array(16384)) as AbDataOutputStream;
    
dataOutputStream!.flush();
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    
StreamUtil.getInstance()!.close(dataInputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    AbPath fixPath(AbFile file, AbPath path, AbPath realPath, string cloud){

    beginIndex: int32_t = file.getPath()!.indexOf(cloud) +cloud.length;;
    

    endIndex: int32_t = file.getPath()!.indexOf(file.getName())!;;
    

    fixedPathString: string = realPath!.toFileSystemString() +file.getPath()!.substring(beginIndex, endIndex);;
    

    fixedPath: AbPath = new AbPath(fixedPathString, StringUtil.getInstance()!.EMPTY_STRING);;
    
this.directory.create(fixedPath);
    

    string: string = fixedPath!.toFileSystemString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF(string, this, "fixPath");
    

                                    }
                                

    outPath: AbPath = new AbPath(string, file.getName());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outPath;
    
}


                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbPath path, AbPath realPath, string cloud){
this.copyToCloud(file, path, realPath, cloud, false, false);
    
}


                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbPath path, AbPath realPath, string cloud, bool overwriteNewer, bool overwriteAll){

        try {
            
    outPath: AbPath = this.fixPath(file, path, realPath, cloud)!;;
    

    outFile: AbFile = AbFile.createAbFileFromAbPath(outPath)!;;
    

                        if(!this.copyPrepare(file, outFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Out File: ");
    
stringBuffer!.append(outFile!.getPath());
    
stringBuffer!.append(" In File: ");
    
stringBuffer!.append(file.getPath());
    
stringBuffer!.append(" to cloud.");
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyToCloud");
    

                                    }
                                

                        }
                            

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(outFile)!;;
    

    fileInputStream: AbFileInputStream = new AbFileLocalInputStream(file);;
    
this.copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILEERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error Copying File File: ");
    
stringBuffer!.append(file.toString());
    
stringBuffer!.append(" to cloud.");
    
this.logUtil!.put(stringBuffer!.toString(), getInstance(), "copyToCloud", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbFile outFile){
this.copyToCloud(file, outFile, false, false);
    
}


                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbFile outFile, bool overwriteNewer, bool overwriteAll){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    

                        if(!this.copyPrepare(file, outFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Out File: ");
    
stringBuffer!.append(outFile!.getPath());
    
stringBuffer!.append(" In File: ");
    
stringBuffer!.append(file.getPath());
    
stringBuffer!.append(" to cloud.");
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyToCloud");
    

                                    }
                                

                        }
                            

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(outFile)!;;
    

    fileInputStream: AbFileInputStream = new AbFileLocalInputStream(file);;
    
this.copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILEERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error Copying File File: ");
    
stringBuffer!.append(file.toString());
    
stringBuffer!.append(" to cloud.");
    
this.logUtil!.put(stringBuffer!.toString(), getInstance(), "copyToCloud", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    bool copyPrepare(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll){

                        if(toFile!.exists())
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    

                        if(overwriteAll)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Overwriting File: ");
    
stringBuffer!.append(toFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyFile");
    

                                    }
                                
toFile!.delete();
    
toFile!.createNewFile();
    

                                    }
                                
                             else 
                        if(toFile!.lastModified() < fromFile!.lastModified() && overwriteNewer)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Newer by: ");
    
stringBuffer!.appendlong(fromFile!.lastModified() -toFile!.lastModified());
    
stringBuffer!.append("ms ");
    
stringBuffer!.append("Copying File: ");
    
stringBuffer!.append(toFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyFile");
    

                                    }
                                
toFile!.delete();
    
toFile!.createNewFile();
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("File Already Exists");
    

                        if(overwriteNewer)
                        
                                    {
                                    stringBuffer!.append(" And Is Not Older");
    

                                    }
                                
                        else {
                            stringBuffer!.append(" And Not A In Overwrite Mode");
    

                        }
                            
stringBuffer!.append(CommonLabels.getInstance()!.COLON_SEP);
    
stringBuffer!.append(toFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyFile");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                        else {
                            toFile!.createNewFile();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    copyFile(AbFile fromFile, AbFile toFile){
this.copyFile(fromFile, toFile, false, false);
    
}


                //@Throws(Exception.constructor)
            
    copyFile(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copying ");
    
stringBuffer!.appendlong(fromFile!.length());
    
stringBuffer!.append(" bytes from File: ");
    
stringBuffer!.append(fromFile!.getPath());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(toFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyFile");
    

                                    }
                                

                        if(!this.copyPrepare(fromFile, toFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    dataOutputStream: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(toFile)!;;
    

    fileInputStream: AbFileInputStream = new AbFileInputStream(fromFile);;
    
this.copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILEERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error Copying File fromFile: ");
    
stringBuffer!.append(fromFile!.toString());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(toFile!.toString());
    
this.logUtil!.put(stringBuffer!.toString(), getInstance(), "copyFile", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public copyDirectoryPortion(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total){

    file: AbFile = AbFile.createAbFileFromAbPath(fromDirectoryAbPath)!;;
    

                        if(!file.isDirectory())
                        
                                    {
                                    


                            throw new Exception("Not a directory: " +file.getPath());
                    

                                    }
                                

    fileList: BasicArrayList = this.directory.search(file, true)!;;
    

    size: int32_t = fileList!.size()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Searched: ");
    
stringBuffer!.append(file.getPath());
    
stringBuffer!.append(" Total: ");
    
stringBuffer!.appendint(size);
    

    portion: int32_t = size /total +1;;
    

    start: int32_t = portion *current;;
    

    end: int32_t = start +portion;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                
stringBuffer!.append(" Section: ");
    
stringBuffer!.appendint(start);
    
stringBuffer!.append(" - ");
    
stringBuffer!.appendint(end);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copySomeFilesToDirectory()");
    

                                    }
                                

    nextFile: AbFile;;
    




                        for (
    index: int32_t = start;index < end; index++)
        {
nextFile= fileList!.get(index) as AbFile;
    

                        if(nextFile!.isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    path: string = new AbPath(nextFile!.getPath(), StringUtil.getInstance()!.EMPTY_STRING).getPath()!;;
    

    beginIndex: int32_t = fromDirectoryAbPath!.getPath()!.length()!;;
    

                        if(path.indexOf(URLGLOBALS.getWebappPath()) < 0)
                        
                                    {
                                    beginIndex -= new AbPath(URLGLOBALS.getWebappPath(), StringUtil.getInstance()!.EMPTY_STRING).getPath()!.length();
    

                                    }
                                

    newPath: string = toDirectoryAbPath!.toFileSystemString() +path.substring(beginIndex);;
    

    toFile: AbFile = AbFile.createAbFileFromAbPath(new AbPath(newPath, StringUtil.getInstance()!.EMPTY_STRING))!;;
    
this.copyFile(nextFile, toFile, overwriteNewer, overwriteAll);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    copyDirectory(AbFile fromFile, AbFile to){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copying Directory from: ");
    
stringBuffer!.append(fromFile!.getPath());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(to.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyDirectory");
    

                                    }
                                

    newDirectory: string = FileUtil.getNewDirectory(fromFile)!;;
    

    newDirectoryAbPath: AbPath = new AbPath(to.getPath() +AbPathData.getInstance()!.SEPARATOR +newDirectory, StringUtil.getInstance()!.EMPTY_STRING);;
    

                        if(!this.directory.create(newDirectoryAbPath))
                        
                                    {
                                    


                            throw new Exception("Failed to create directory: " +newDirectoryAbPath);
                    

                                    }
                                

    fileArray: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fromFile!.listFiles())!;;
    

    size: int32_t = fileArray!.length
                ;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copying ");
    
stringBuffer!.appendint(size);
    
stringBuffer!.append(" files from: ");
    
stringBuffer!.append(fromFile!.getPath());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(to.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), "copyDirectory");
    

                                    }
                                

    file: AbFile;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
file= fileArray[index]!;
    

                        if(file.isFile())
                        
                                    {
                                    this.copyFile(file, AbFile.createAbFilePathAndName(newDirectoryAbPath!.toString(), file.getName()));
    

                                    }
                                
                             else 
                        if(file.isDirectory())
                        
                                    {
                                    this.copyDirectory(file, AbFile.createAbFileFromAbPath(newDirectoryAbPath));
    

                                    }
                                
                        else {
                            


                            throw new Exception("File Copy Error");
                    

                        }
                            
}


                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILEERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error Copying Directory fromFile: ");
    
stringBuffer!.append(fromFile!.toString());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(to.toString());
    
this.logUtil!.put(stringBuffer!.toString(), getInstance(), "copyDirectory", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool copy(AbPath fromAbPath, AbPath to){

    COPY: string = "copy";;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copying AbPaths from: ");
    
stringBuffer!.append(fromAbPath!.toString());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(to.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), COPY);
    

                                    }
                                

                        if(fromAbPath == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Cannot Copy From A Null Location");
                    

                                    }
                                

                        if(to == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Cannot Copy To A Null Location");
                    

                                    }
                                

    fromLocationFile: AbFile = AbFile.createAbFileFromAbPath(fromAbPath)!;;
    

    toLocationFile: AbFile = AbFile.createAbFileFromAbPath(to)!;;
    

                        if(fromLocationFile!.isFile())
                        
                                    {
                                    
                        if(toLocationFile!.isDirectory())
                        
                                    {
                                    
    file: AbFile = AbFile.createAbFileWithChild(toLocationFile, fromLocationFile!.getName())!;;
    
this.copyFile(fromLocationFile, file);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copied file=");
    
stringBuffer!.append(fromLocationFile!.getName());
    
stringBuffer!.append(" from: ");
    
stringBuffer!.append(fromLocationFile!.getPath());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(toLocationFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), COPY);
    

                                    }
                                

                                    }
                                
                        else {
                            this.copyFile(fromLocationFile, toLocationFile);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Copied file with new name ");
    
stringBuffer!.append(" from: ");
    
stringBuffer!.append(fromLocationFile!.getPath());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(toLocationFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), getInstance(), COPY);
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(fromLocationFile!.isDirectory() && toLocationFile!.isDirectory())
                        
                                    {
                                    
                        if(fromAbPath!.toFileSystemString()[fromAbPath!.toFileSystemString()!.length() -1] == java.io.File.separatorChar)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF("Copying subdirectories", getInstance(), COPY);
    

                                    }
                                

    fileArray: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fromLocationFile!.listFiles())!;;
    




                        for (
    index: int32_t = 0;index < fileArray!.length; index++)
        {

    file: AbFile = fileArray[index]!;;
    

                        if(file.isFile())
                        
                                    {
                                    
    aFile: AbFile = AbFile.createAbFileWithChild(toLocationFile, file.getName())!;;
    
this.copyFile(file, aFile);
    

                                    }
                                
                             else 
                        if(file.isDirectory())
                        
                                    {
                                    this.copyDirectory(file, toLocationFile);
    

                                    }
                                
                        else {
                            


                            throw new Exception("File Copy Error");
                    

                        }
                            
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF("Copied subdirectories", getInstance(), COPY);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF("Copyinhg directory", getInstance(), COPY);
    

                                    }
                                
this.copyDirectory(fromLocationFile, toLocationFile);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILE))
                        
                                    {
                                    this.logUtil!.putF("Copied directory", getInstance(), COPY);
    

                                    }
                                

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(this.logConfigTypeFactory!.FILEERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error Copying fromAbPath: ");
    
stringBuffer!.append(fromAbPath!.toString());
    
stringBuffer!.append(" to: ");
    
stringBuffer!.append(to.toString());
    
this.logUtil!.put(stringBuffer!.toString(), getInstance(), COPY, e);
    

                                    }
                                



                            throw e;
                    
}

}


    public bool shouldSkip(AbFile file, std::vector<string> skipFiles){

    size: int32_t = skipFiles!.length
                ;;
    

    skipFile: string;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
skipFile= skipFiles[index]!;
    

                        if(file.getPath()!.compareTo(skipFile) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    private: const WRITE_LABEL: string = "Write file: ";

    private: const DATA_LABEL: string = " data: ";

    private: const WRITE_METHOD: string = "write";

                //@Throws(Exception.constructor)
            
    public write(string filePath, string string){

    dataOutputStream: AbDataOutputStream = 
                null
            ;;
    

        try {
            PreLogUtil.put(new StringMaker().append(this.WRITE_LABEL)!.append(filePath)!.append(this.DATA_LABEL)!.append(string)!.toString(), this, this.WRITE_METHOD);
    

    fileInputStreamFactory: FileStreamFactory = FileStreamFactory.getInstance()!;;
    

    fileOutputStream: OutputStream = fileInputStreamFactory!.getFileOutputStreamInstance(StringUtil.getInstance()!.EMPTY_STRING, filePath)!;;
    
dataOutputStream= new AbDataOutputStream(fileOutputStream);
    
dataOutputStream!.write(string.getBytes(), 0, string.length);
    
dataOutputStream!.flush();
    

         finally {
            StreamUtil.getInstance()!.close(dataOutputStream);
    

         }
        
}


    public BasicArrayList loadFileAsList(AbFile file, int32_t max, std::vector<int8_t> byteArray1){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUtil2.getInstance()!.loadFileAsList(file, max, byteArray1);;
    
}


};

            

