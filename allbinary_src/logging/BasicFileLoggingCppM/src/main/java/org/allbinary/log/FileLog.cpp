
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
        
class FileLog
            : public Object
         {

    private: static const StringUtil stringUtil = StringUtil::getInstance();

    private: static const int64_t logLength = 33000000;

    private: static const std::string logPath = "g:\\log\\";

    private: static const std::string extension = "dat";

    private: static const std::string fileName = .toCharArray();

    private: static const std::string backupFileName = FileLog::fileName.concat(".bak");

    private: static const std::string ORG_ALLBINARY = "org.allbinary: ";

    private: static bool firstTime = true;

    private: static File logFile = File(FileLog::logPath, FileLog::fileName);

    private: static File logFileBak;

    private: static BufferedWriter fileOut;

    private: static int32_t backupIndex= 0;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static bool createLogFile(){

        try {
            FileLog::logFile= File(logPath, fileName);
    

                        if(!FileLog::firstTime)
                        
                                    {
                                    FileLog::fileOut= BufferedWriter(FileWriter(logFile));
    

                                    }
                                
                        else {
                            FileLog::firstTime= false;
    

    RandomAccessFile raFile = RandomAccessFile(logFile, "rw");;
    
raFile.seek(raFile.length());
    
FileLog::fileOut= BufferedWriter(FileWriter(raFile.getFD()));
    

                        }
                            

    bool canWrite = FileLog::logFile.canWrite();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return canWrite;
    

                //: 
} catch(e) 
            {
console.log("Error Creating Log: " +e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static bool createLogFileBackup(){

        try {
            
    StringMaker stringMaker = StringMaker();;
    
FileLog::logFileBak= File(logPath, stringMaker.append(backupFileName).append(CommonSeps::getInstance().PERIOD).appendint(backupIndex).toString());
    

        while(FileLog::logFileBak.isFile())
        {
FileLog::backupIndex++;
    
stringMaker.delete(0, stringMaker.length());
    
FileLog::logFileBak= File(logPath, stringMaker.append(backupFileName).append(CommonSeps::getInstance().PERIOD).appendint(backupIndex).toString());
    
}


    std::string line = .toCharArray();;
    

    BufferedWriter tmpOut = BufferedWriter(FileWriter(logFileBak));;
    

    BufferedReader tmpIn = BufferedReader(FileReader(logFile));;
    

        while((line= tmpIn.readLine()) != 
                                    nullptr
                                )
        {
tmpOut.write(line, 0, line.size());
    
tmpOut.newLine();
    
}

tmpOut.flush();
    
tmpOut.close();
    
tmpIn.close();
    
FileLog::logFile.delete();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
console.log("Error Creating Backup: " +e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, Object* anyType, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog::put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, Object* anyType, std::string functionName, Throwable exception){

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
                                

    int64_t length = FileLog::logFile.length();;
    

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
                                

                        if(anyType->constructor.name.toString() != 
                                    nullptr
                                )
                        className= anyType->constructor.name.toString();
                                

    std::string message = LogFormatUtil::getInstance().get(className, functionName, specialMessage, exception);;
    
FileLog::fileOut.write(message, 0, message.size());
    
FileLog::fileOut.newLine();
    
FileLog::fileOut.flush();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, std::string className, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog::put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, std::string className, std::string functionName, Exception exception){

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
                                

    int64_t length = FileLog::logFile.length();;
    

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
                                

    std::string message = LogFormatUtil::getInstance().get(className, functionName, specialMessage, exception);;
    
FileLog::fileOut.write(message, 0, message.size());
    
FileLog::fileOut.newLine();
    
FileLog::fileOut.flush();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    
}

}


    public: static std::string getFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog::logPath +FileLog::fileName;
    
}


private: FileLog(){
}


};

            

