
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <java/io/FilenameFilter.h>

      
#include <java/io/IOException.h>

      
#include <java/net/URI.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInterface.h"

class AbFile
            : public Object
        : public AbFileInterface {

    public: static const AbFile NULL_FILE = AbFile::createAbFileFromRawPath(StringUtil::getInstance().EMPTY_STRING);

                //@Throws(Exception.constructor)
            
    public: static AbFile createAbFileWithChild(AbFile file, std::string childPathName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile(File(file.getFile(), childPathName));
    
}


                //@Throws(Exception.constructor)
            
    public: static AbFile createAbFile(std::string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile(File(AbPath(filePath, StringUtil::getInstance().EMPTY_STRING).toFileSystemString()));
    
}


                //@Throws(Exception.constructor)
            
    public: static AbFile createAbFilePathAndName(std::string filePath, std::string fileName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile(File(AbPath(filePath, StringUtil::getInstance().EMPTY_STRING).toFileSystemString(), fileName));
    
}


    public: static AbFile createAbFileFromAbPath(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile(File(abPath.toFileSystemString()));
    
}


    public: static AbFile createAbFileFromRawPath(std::string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile(File(filePath));
    
}


    private: File file;

: AbFile(File file){
this->file= file;
    
}


    protected: File getFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getName();;
    
}


    public: std::string getParent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getParent();;
    
}


    public: Object* getParentFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getParentFile();;
    
}


    public: std::string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getPath();;
    
}


    public: bool isAbsolute(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.isAbsolute();;
    
}


    public: std::string getAbsolutePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getAbsolutePath();;
    
}


    public: Object* getAbsoluteFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getAbsoluteFile();;
    
}


                //@Throws(IOException.constructor)
            
    public: std::string getCanonicalPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getCanonicalPath();;
    
}


                //@Throws(IOException.constructor)
            
    public: Object* getCanonicalFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getCanonicalFile();;
    
}


    public: URI toURI(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.toURI();;
    
}


    public: bool canRead(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.canRead();;
    
}


    public: bool canWrite(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.canWrite();;
    
}


    public: bool exists(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.exists();;
    
}


    public: bool isDirectory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.isDirectory();;
    
}


    public: bool isFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.isFile();;
    
}


    public: bool isHidden(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.isHidden();;
    
}


    public: int64_t lastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.lastModified();;
    
}


    public: int64_t length(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.length();;
    
}


                //@Throws(IOException.constructor)
            
    public: bool createNewFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.createNewFile();;
    
}


                //@Throws(IOException.constructor)
            
    public: bool delete_(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.delete_();;
    
}


    public: void deleteOnExit(){
this->file.deleteOnExit();
    
}


    public: std::vector<std::string> list(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.list();;
    
}


    public: std::vector<std::string> listWithFilter(FilenameFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.list(filter);;
    
}


    public: std::vector<Object*> listFiles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.listFiles() as any[];
    
}


    public: std::vector<Object*> listFilesFileNameFilter(FilenameFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.listFiles(filter) as any[];
    
}


    public: std::vector<Object*> listFilesFileFilter(FileFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.listFiles(filter) as any[];
    
}


    public: bool mkdir(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.mkdir();;
    
}


    public: bool mkdirs(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.mkdirs();;
    
}


    public: bool renameTo(AbFile dest){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.renameTo(dest.getFile());;
    
}


    public: bool setLastModified(int64_t time){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setLastModified(time);;
    
}


    public: bool setReadOnly(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setReadOnly();;
    
}


    public: bool setWritable(bool writable, bool ownerOnly){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setExecutable(writable, ownerOnly);;
    
}


    public: bool setWritable(bool writable){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setWritable(writable);;
    
}


    public: bool setReadable(bool readable, bool ownerOnly){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setReadable(readable, ownerOnly);;
    
}


    public: bool setReadable(bool readable){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setReadable(readable);;
    
}


    public: bool setExecutable(bool executable, bool ownerOnly){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setExecutable(executable, ownerOnly);;
    
}


    public: bool setExecutable(bool executable){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.setExecutable(executable);;
    
}


    public: bool canExecute(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.canExecute();;
    
}


    public: int64_t getTotalSpace(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getTotalSpace();;
    
}


    public: int64_t getFreeSpace(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getFreeSpace();;
    
}


    public: int64_t getUsableSpace(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.getUsableSpace();;
    
}


    public: int32_t compareTo(File pathname){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.compareTo(pathname);;
    
}


    public: bool equals(Object* obj){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil::getInstance().equalsNotstring(this->file, obj);;
    
}


    public: int32_t hashCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.hashCode();;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file.toString();;
    
}


};

            

