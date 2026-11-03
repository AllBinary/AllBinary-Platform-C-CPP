
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/AbFile.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <java/io/FilenameFilter.h>

      
#include <java/io/IOException.h>

      
#include <java/net/URI.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFileInterface.h"

AbFile* AbFile::NULL_FILE = AbFile::createAbFileFromRawPath(StringUtil::getInstance()->EMPTY_STRING);

                //@Throws(Exception.constructor)
            
    auto AbFile::createAbFileWithChild(AbFile* file, std::string childPathName) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbFile(new File(file->getFile(), childPathName));
    
}


                //@Throws(Exception.constructor)
            
    auto AbFile::createAbFile(std::string filePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbFile(new File((new AbPath(filePath, StringUtil::getInstance()->EMPTY_STRING))->toFileSystemString()));
    
}


                //@Throws(Exception.constructor)
            
    auto AbFile::createAbFilePathAndName(std::string filePath, std::string fileName) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbFile(new File((new AbPath(filePath, StringUtil::getInstance()->EMPTY_STRING))->toFileSystemString(), fileName));
    
}


    auto AbFile::createAbFileFromAbPath(AbPath* abPath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbFile(new File(abPath->toFileSystemString()));
    
}


    auto AbFile::createAbFileFromRawPath(std::string filePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbFile(new File(filePath));
    
}


AbFile::AbFile(File* file){
this->file= file;
    
}


    auto AbFile::getFile() -> File*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file;
    
}


    auto AbFile::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getName();;
    
}


    auto AbFile::getParent() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getParent();;
    
}


    auto AbFile::getParentFile() -> File*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getParentFile();;
    
}


    auto AbFile::getPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getPath();;
    
}


    auto AbFile::isAbsolute() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->isAbsolute();;
    
}


    auto AbFile::getAbsolutePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getAbsolutePath();;
    
}


    auto AbFile::getAbsoluteFile() -> File*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getAbsoluteFile();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFile::getCanonicalPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getCanonicalPath();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFile::getCanonicalFile() -> File*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->getCanonicalFile();;
    
}


    auto AbFile::toURI() -> URI*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->toURI();;
    
}


    auto AbFile::canRead() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->canRead();;
    
}


    auto AbFile::canWrite() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->canWrite();;
    
}


    auto AbFile::exists() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->exists();;
    
}


    auto AbFile::isDirectory() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->isDirectory();;
    
}


    auto AbFile::isFile() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->isFile();;
    
}


    auto AbFile::isHidden() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->isHidden();;
    
}


    auto AbFile::lastModified() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->lastModified();;
    
}


    auto AbFile::length() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->length();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFile::createNewFile() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->createNewFile();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFile::delete_() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->delete_();;
    
}


    auto AbFile::deleteOnExit() -> void{
this->file->deleteOnExit();
    
}


    auto AbFile::list() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->list();;
    
}


    auto AbFile::listWithFilter(FilenameFilter* filter) -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->list(filter);;
    
}


    auto AbFile::listFiles() -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::vector<Object*>>(this->file->listFiles());
    
}


    auto AbFile::listFilesFileNameFilter(FilenameFilter* filter) -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::vector<Object*>>(this->file->listFiles(filter));
    
}


    auto AbFile::listFilesFileFilter(FileFilter* filter) -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::vector<Object*>>(this->file->listFiles(filter));
    
}


    auto AbFile::mkdir() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->mkdir();;
    
}


    auto AbFile::mkdirs() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->mkdirs();;
    
}


    auto AbFile::renameTo(AbFile* dest) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->renameTo(dest->getFile());;
    
}


    auto AbFile::setLastModified(int64_t time) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->setLastModified(time);;
    
}


    auto AbFile::setReadOnly() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->setReadOnly();;
    
}


    auto AbFile::compareTo(File* pathname) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->compareTo(pathname);;
    
}


    auto AbFile::equals(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TsUtil::getInstance()->equalsNotstring(this->file, obj);;
    
}


    auto AbFile::hashCode() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->hashCode();;
    
}


    auto AbFile::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_CPP
