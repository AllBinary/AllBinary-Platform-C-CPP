
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
        



        #ifndef ORG_ALLBINARY_LOG_FILELOG_CPP
        #define ORG_ALLBINARY_LOG_FILELOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/log/FileLog.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/BufferedWriter.h>

      
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/FileWriter.h>

      
#include <java/io/RandomAccessFile.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
StringUtil* FileLog::stringUtil = StringUtil::getInstance();
const std::string FileLog::extension = "dat";
const std::string FileLog::fileName = .toCharArray();
const std::string FileLog::backupFileName = FileLog::fileName->concat(".bak");
auto FileLog::logFile_owner() -> File* { static std::unique_ptr<File> value(new File(FileLog::logPath, FileLog::fileName)); return value.get(); }
File* FileLog::logFile = FileLog::logFile_owner();

FileLog::FileLog(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::createLogFile() -> bool{

        try {
            FileLog::logFile= new File(logPath, fileName);
    

                        if(!FileLog::firstTime)
                        
                                    {
                                    FileLog::fileOut= new BufferedWriter(new FileWriter(logFile));
    

                                    }
                                
                        else {
                            FileLog::firstTime= false;
    

    RandomAccessFile* raFile = new RandomAccessFile(logFile, "rw");;
    
raFile->seek(raFile->length());
    
FileLog::fileOut= new BufferedWriter(new FileWriter(raFile->getFD()));
    

                        }
                            

    bool canWrite = FileLog::logFile->canWrite();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return canWrite;
    

                //: 
} catch(Exception& e) 
            {
System.out.println(JavaString::valueOf("Error Creating Log: ") +JavaString::valueOf(e));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::createLogFileBackup() -> bool{

        try {
            
    StringMaker* stringMaker = new StringMaker();;
    
FileLog::logFileBak= new File(logPath, JavaString::valueOf(stringMaker->append(backupFileName)->append(CommonSeps::getInstance()->PERIOD)->appendint(backupIndex)));
    

        while(FileLog::logFileBak->isFile())
        {
FileLog::backupIndex++;
    
stringMaker->delete_(0, stringMaker->length());
    
FileLog::logFileBak= new File(logPath, JavaString::valueOf(stringMaker->append(backupFileName)->append(CommonSeps::getInstance()->PERIOD)->appendint(backupIndex)));
    
}


    std::string line = std::string();;
    

    BufferedWriter* tmpOut = new BufferedWriter(new FileWriter(logFileBak));;
    

    BufferedReader* tmpIn = new BufferedReader(new FileReader(logFile));;
    

        while((line= tmpIn->readLine()) != 
                                    nullptr
                                )
        {
tmpOut->write(line, 0, line.size());
    
tmpOut->newLine();
    
}

tmpOut->flush();
    
tmpOut->close();
    
tmpIn->close();
    
FileLog::logFile->delete_();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
System.out.println(JavaString::valueOf("Error Creating Backup: ") +JavaString::valueOf(e));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::put(std::string specialMessage, Object* anyType, std::string functionName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileLog::put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::put(std::string specialMessage, Object* anyType, std::string functionName, Throwable* exception) -> std::string{

        try {
            
                        if(FileLog::firstTime == true)
                        
                                    {
                                    FileLog::createLogFileBackup();
    

                        if(createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Log File Creation Error";
    

                                    }
                                

                                    }
                                

    int64_t length = FileLog::logFile->length();;
    

                        if(length > FileLog::logLength)
                        
                                    {
                                    
                        if(!(createLogFileBackup()) || createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Couldn't Create a Backup file";
    

                                    }
                                

                                    }
                                

    std::string className = NULL_STRING.toCharArray();;
    

                        if(false)
                        functionName= NULL_STRING.toCharArray();
                                

                        if(false)
                        specialMessage= NULL_STRING.toCharArray();
                                

                        if(true)
                        className= anyType->getClass()->getName();
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
FileLog::fileOut->write(message, 0, message.size());
    
FileLog::fileOut->newLine();
    
FileLog::fileOut->flush();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return .toCharArray();
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return .toCharArray();
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::put(std::string specialMessage, std::string className, std::string functionName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileLog::put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FileLog::put(std::string specialMessage, std::string className, std::string functionName, Exception* exception) -> std::string{

        try {
            
                        if(FileLog::firstTime == true)
                        
                                    {
                                    FileLog::createLogFileBackup();
    

                        if(createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Log File Creation Error";
    

                                    }
                                

                                    }
                                

    int64_t length = FileLog::logFile->length();;
    

                        if(length > FileLog::logLength)
                        
                                    {
                                    
                        if(!(createLogFileBackup()) || createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Couldn't Create a Backup file";
    

                                    }
                                

                                    }
                                

                        if(false)
                        functionName= NULL_STRING.toCharArray();
                                

                        if(false)
                        specialMessage= NULL_STRING.toCharArray();
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
FileLog::fileOut->write(message, 0, message.size());
    
FileLog::fileOut->newLine();
    
FileLog::fileOut->flush();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return .toCharArray();
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return .toCharArray();
    
}

}


    auto FileLog::getFilePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileLog::logPath +FileLog::fileName;
    
}




        #endif //ORG_ALLBINARY_LOG_FILELOG_CPP
