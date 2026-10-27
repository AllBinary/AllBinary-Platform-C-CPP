
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/io/file/FileUtil2.h"
//data/init/views/TestStore/template/type/genericTemplateObjectConfig.xml
auto FileUtil::instance_owner() -> FileUtil* { static std::unique_ptr<FileUtil> value(new FileUtil()); return value.get(); }
FileUtil* FileUtil::instance = FileUtil::instance_owner();

    auto FileUtil::getInstance() -> FileUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUtil::instance;
    
}


FileUtil::FileUtil() : logUtil(LogUtil::getInstance()), directory(Directory::getInstance()), logConfigTypeFactory(LogConfigTypeFactory::getInstance()), commonStrings(CommonStrings::getInstance()), streamUtil(StreamUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::write(InputStream* inputStream, AbFile* file) -> void{

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(file);;
    
this->write(inputStream, dataOutputStream);
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::write(InputStream* inputStream, AbDataOutputStream* dataOutputStream) -> void{

        try {
            dataOutputStream= dynamic_cast<AbDataOutputStream*>(StreamUtil::getInstance()->get(inputStream, dataOutputStream, std::vector<int8_t>(16384)));
    
dataOutputStream->flush();
    

         finally {
            StreamUtil::getInstance()->close(dataOutputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::write(InputStream* inputStream, AbDataOutputStream* dataOutputStream, std::vector<int8_t> buffer) -> void{

        try {
            dataOutputStream= dynamic_cast<AbDataOutputStream*>(StreamUtil::getInstance()->get(inputStream, dataOutputStream, buffer));
    
dataOutputStream->flush();
    

         finally {
            StreamUtil::getInstance()->close(dataOutputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copy(AbFileInputStream* dataInputStream, AbDataOutputStream* dataOutputStream) -> void{

        try {
            dataOutputStream= dynamic_cast<AbDataOutputStream*>(StreamUtil::getInstance()->get(dataInputStream, dataOutputStream, std::vector<int8_t>(16384)));
    
dataOutputStream->flush();
    

         finally {
            StreamUtil::getInstance()->close(dataOutputStream);
    
StreamUtil::getInstance()->close(dataInputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::fixPath(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud) -> AbPath*{

    int32_t beginIndex = file->getPath()->indexOf(cloud) +cloud.size();;
    

    int32_t endIndex = file->getPath()->indexOf(file->getName());;
    

    std::string fixedPathString = realPath->toFileSystemString() +file->getPath()->substring(beginIndex, endIndex);;
    

    AbPath* fixedPath = new AbPath(fixedPathString, StringUtil::getInstance()->EMPTY_STRING);;
    
this->directory->create(fixedPath);
    

    std::string string = fixedPath->toFileSystemString();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF(string, this, "fixPath");
    

                                    }
                                

    AbPath* outPath = new AbPath(string, file->getName());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outPath;
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyToCloud(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud) -> void{
this->copyToCloud(file, path, realPath, cloud, false, false);
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyToCloud(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud, bool overwriteNewer, bool overwriteAll) -> void{

        try {
            
    AbPath* outPath = this->fixPath(file, path, realPath, cloud);;
    

    AbFile* outFile = AbFile::createAbFileFromAbPath(outPath);;
    

                        if(!this->copyPrepare(file, outFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Out File: ");
    
stringBuffer->append(outFile->getPath());
    
stringBuffer->append(" In File: ");
    
stringBuffer->append(file->getPath());
    
stringBuffer->append(" to cloud.");
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyToCloud");
    

                                    }
                                

                        }
                            

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(outFile);;
    

    AbFileInputStream* fileInputStream = new AbFileLocalInputStream(file);;
    
this->copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILEERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Copying File File: ");
    
stringBuffer->append(file->toString());
    
stringBuffer->append(" to cloud.");
    
this->logUtil->put(stringBuffer->toString(), getInstance(), "copyToCloud", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyToCloud(AbFile* file, AbFile* outFile) -> void{
this->copyToCloud(file, outFile, false, false);
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyToCloud(AbFile* file, AbFile* outFile, bool overwriteNewer, bool overwriteAll) -> void{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(!this->copyPrepare(file, outFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Out File: ");
    
stringBuffer->append(outFile->getPath());
    
stringBuffer->append(" In File: ");
    
stringBuffer->append(file->getPath());
    
stringBuffer->append(" to cloud.");
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyToCloud");
    

                                    }
                                

                        }
                            

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(outFile);;
    

    AbFileInputStream* fileInputStream = new AbFileLocalInputStream(file);;
    
this->copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILEERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Copying File File: ");
    
stringBuffer->append(file->toString());
    
stringBuffer->append(" to cloud.");
    
this->logUtil->put(stringBuffer->toString(), getInstance(), "copyToCloud", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyPrepare(AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll) -> bool{

                        if(toFile->exists())
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(overwriteAll)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Overwriting File: ");
    
stringBuffer->append(toFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyFile");
    

                                    }
                                
toFile->delete_();
    
toFile->createNewFile();
    

                                    }
                                
                             else 
                        if(toFile->lastModified() < fromFile->lastModified() && overwriteNewer)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Newer by: ");
    
stringBuffer->appendlong(fromFile->lastModified() -toFile->lastModified());
    
stringBuffer->append("ms ");
    
stringBuffer->append("Copying File: ");
    
stringBuffer->append(toFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyFile");
    

                                    }
                                
toFile->delete_();
    
toFile->createNewFile();
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("File Already Exists");
    

                        if(overwriteNewer)
                        
                                    {
                                    stringBuffer->append(" And Is Not Older");
    

                                    }
                                
                        else {
                            stringBuffer->append(" And Not A In Overwrite Mode");
    

                        }
                            
stringBuffer->append(CommonLabels::getInstance()->COLON_SEP);
    
stringBuffer->append(toFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyFile");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                        else {
                            toFile->createNewFile();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyFile(AbFile* fromFile, AbFile* toFile) -> void{
this->copyFile(fromFile, toFile, false, false);
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyFile(AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll) -> void{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copying ");
    
stringBuffer->appendlong(fromFile->length());
    
stringBuffer->append(" bytes from File: ");
    
stringBuffer->append(fromFile->getPath());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(toFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyFile");
    

                                    }
                                

                        if(!this->copyPrepare(fromFile, toFile, overwriteNewer, overwriteAll))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(toFile);;
    

    AbFileInputStream* fileInputStream = new AbFileInputStream(fromFile);;
    
this->copy(fileInputStream, dataOutputStream);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILEERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Copying File fromFile: ");
    
stringBuffer->append(fromFile->toString());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(toFile->toString());
    
this->logUtil->put(stringBuffer->toString(), getInstance(), "copyFile", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto FileUtil::getNewDirectory(AbFile* fromFile) -> std::string{

    std::string newDirectory = fromFile->getPath();;
    

    std::string separatorChar = FilePathData::getInstance()->PATH_START;;
    

                        if(AbIOSystem::getInstance()->isType("com.vobject.appengine.java.io"))
                        
                                    {
                                    separatorChar= AbPathData::getInstance()->SEPARATOR;
    

                                    }
                                

    int32_t lastIndex = JavaString::lastIndexOf(newDirectory, separatorChar);;
    

                        if(lastIndex >= newDirectory.size())
                        
                                    {
                                    newDirectory= JavaString::substring(newDirectory, 0, newDirectory.size() -1);
    
lastIndex= JavaString::lastIndexOf(newDirectory, separatorChar);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::substring(newDirectory, lastIndex, newDirectory.size());;
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyDirectoryPortion(AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total) -> void{

    AbFile* file = AbFile::createAbFileFromAbPath(fromDirectoryAbPath);;
    

                        if(!file->isDirectory())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Not a directory: ") +JavaString::valueOf(file->getPath()));
                    

                                    }
                                

    BasicArrayList* fileList = this->directory->search(file, true);;
    

    int32_t size = fileList->size();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Searched: ");
    
stringBuffer->append(file->getPath());
    
stringBuffer->append(" Total: ");
    
stringBuffer->appendint(size);
    

    int32_t portion = size /total +1;;
    

    int32_t start = portion *current;;
    

    int32_t end = start +portion;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                
stringBuffer->append(" Section: ");
    
stringBuffer->appendint(start);
    
stringBuffer->append(" - ");
    
stringBuffer->appendint(end);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF(stringBuffer->toString(), getInstance(), "copySomeFilesToDirectory()");
    

                                    }
                                

    AbFile* nextFile;;
    




                        for (
    int32_t index = start;index < end; index++)
        {
nextFile= dynamic_cast<AbFile*>(fileList->get(index));
    

                        if(nextFile->isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    std::string path = (new AbPath(nextFile->getPath(), StringUtil::getInstance()->EMPTY_STRING))->getPath();;
    

    int32_t beginIndex = fromDirectoryAbPath->getPath()->length();;
    

                        if(JavaString::indexOf(path, URLGLOBALS::getWebappPath()) < 0)
                        
                                    {
                                    beginIndex -= (new AbPath(URLGLOBALS::getWebappPath(), StringUtil::getInstance()->EMPTY_STRING))->getPath()->length();
    

                                    }
                                

    std::string newPath = toDirectoryAbPath->toFileSystemString() +JavaString::substring(path, beginIndex);;
    

    AbFile* toFile = AbFile::createAbFileFromAbPath(new AbPath(newPath, StringUtil::getInstance()->EMPTY_STRING));;
    
this->copyFile(nextFile, toFile, overwriteNewer, overwriteAll);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    auto FileUtil::copyDirectory(AbFile* fromFile, AbFile* to) -> void{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copying Directory from: ");
    
stringBuffer->append(fromFile->getPath());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(to->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyDirectory");
    

                                    }
                                

    std::string newDirectory = FileUtil::getNewDirectory(fromFile);;
    

    AbPath* newDirectoryAbPath = new AbPath(JavaString::valueOf(to->getPath() +AbPathData::getInstance()->SEPARATOR) +JavaString::valueOf(newDirectory), StringUtil::getInstance()->EMPTY_STRING);;
    

                        if(!this->directory->create(newDirectoryAbPath))
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Failed to create directory: ") +JavaString::valueOf(newDirectoryAbPath));
                    

                                    }
                                

    std::vector<AbFile*> fileArray = FileWrapperUtil::wrapFiles(fromFile->listFiles());;
    

    int32_t size = fileArray.size();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copying ");
    
stringBuffer->appendint(size);
    
stringBuffer->append(" files from: ");
    
stringBuffer->append(fromFile->getPath());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(to->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), "copyDirectory");
    

                                    }
                                

    AbFile* file;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
file= fileArray[index];
    

                        if(file->isFile())
                        
                                    {
                                    this->copyFile(file, AbFile::createAbFilePathAndName(newDirectoryAbPath->toString(), file->getName()));
    

                                    }
                                
                             else 
                        if(file->isDirectory())
                        
                                    {
                                    this->copyDirectory(file, AbFile::createAbFileFromAbPath(newDirectoryAbPath));
    

                                    }
                                
                        else {
                            


                            throw Exception("File Copy Error");
                    

                        }
                            
}


                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILEERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Copying Directory fromFile: ");
    
stringBuffer->append(fromFile->toString());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(to->toString());
    
this->logUtil->put(stringBuffer->toString(), getInstance(), "copyDirectory", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileUtil::copy(AbPath* fromAbPath, AbPath* to) -> bool{

    std::string COPY = "copy";;
    

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copying AbPaths from: ");
    
stringBuffer->append(fromAbPath->toString());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(to->toString());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), COPY);
    

                                    }
                                

                        if(fromAbPath == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Cannot Copy From A Null Location");
                    

                                    }
                                

                        if(to == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Cannot Copy To A Null Location");
                    

                                    }
                                

    AbFile* fromLocationFile = AbFile::createAbFileFromAbPath(fromAbPath);;
    

    AbFile* toLocationFile = AbFile::createAbFileFromAbPath(to);;
    

                        if(fromLocationFile->isFile())
                        
                                    {
                                    
                        if(toLocationFile->isDirectory())
                        
                                    {
                                    
    AbFile* file = AbFile::createAbFileWithChild(toLocationFile, fromLocationFile->getName());;
    
this->copyFile(fromLocationFile, file);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copied file=");
    
stringBuffer->append(fromLocationFile->getName());
    
stringBuffer->append(" from: ");
    
stringBuffer->append(fromLocationFile->getPath());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(toLocationFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), COPY);
    

                                    }
                                

                                    }
                                
                        else {
                            this->copyFile(fromLocationFile, toLocationFile);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Copied file with new name ");
    
stringBuffer->append(" from: ");
    
stringBuffer->append(fromLocationFile->getPath());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(toLocationFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), getInstance(), COPY);
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(fromLocationFile->isDirectory() && toLocationFile->isDirectory())
                        
                                    {
                                    
                        if(fromAbPath->toFileSystemString()[fromAbPath->toFileSystemString()->length() -1] == java.io->File->separatorChar)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF("Copying subdirectories", getInstance(), COPY);
    

                                    }
                                

    std::vector<AbFile*> fileArray = FileWrapperUtil::wrapFiles(fromLocationFile->listFiles());;
    




                        for (
    int32_t index = 0;index < fileArray.size(); index++)
        {

    AbFile* file = fileArray[index];;
    

                        if(file->isFile())
                        
                                    {
                                    
    AbFile* aFile = AbFile::createAbFileWithChild(toLocationFile, file->getName());;
    
this->copyFile(file, aFile);
    

                                    }
                                
                             else 
                        if(file->isDirectory())
                        
                                    {
                                    this->copyDirectory(file, toLocationFile);
    

                                    }
                                
                        else {
                            


                            throw Exception("File Copy Error");
                    

                        }
                            
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF("Copied subdirectories", getInstance(), COPY);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF("Copyinhg directory", getInstance(), COPY);
    

                                    }
                                
this->copyDirectory(fromLocationFile, toLocationFile);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILE))
                        
                                    {
                                    this->logUtil->putF("Copied directory", getInstance(), COPY);
    

                                    }
                                

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(this->logConfigTypeFactory->FILEERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Copying fromAbPath: ");
    
stringBuffer->append(fromAbPath->toString());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(to->toString());
    
this->logUtil->put(stringBuffer->toString(), getInstance(), COPY, &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto FileUtil::shouldSkip(AbFile* file, std::vector<std::string> skipFiles) -> bool{

    int32_t size = skipFiles.size();;
    

    std::string skipFile;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
skipFile= skipFiles[index];
    

                        if(file->getPath()->compareTo(skipFile) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto FileUtil::write(std::string filePath, std::string string) -> void{

    AbDataOutputStream* dataOutputStream = 
                null
            ;;
    

        try {
            PreLogUtil::put((new StringMaker())->append(this->WRITE_LABEL)->append(filePath)->append(this->DATA_LABEL)->append(string)->toString(), this, this->WRITE_METHOD);
    

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream* fileOutputStream = fileInputStreamFactory->getFileOutputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, filePath);;
    
dataOutputStream= new AbDataOutputStream(fileOutputStream);
    
dataOutputStream->write(JavaString::getBytes(string), 0, string.size());
    
dataOutputStream->flush();
    

         finally {
            StreamUtil::getInstance()->close(dataOutputStream);
    

         }
        
}


    auto FileUtil::loadFileAsList(AbFile* file, int32_t max, std::vector<int8_t> byteArray1) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUtil2::getInstance()->loadFileAsList(file, max, byteArray1);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_CPP
