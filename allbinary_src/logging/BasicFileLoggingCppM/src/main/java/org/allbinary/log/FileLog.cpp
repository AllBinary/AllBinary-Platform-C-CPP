
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Throwable.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/System.h"
        
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
        

    private: static const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: static const logLength: int64_t = 33000000;

    private: static const logPath: string = "g:\\log\\";

    private: static const extension: string = .toCharArray();

    private: static const fileName: string = .toCharArray();

    private: static const backupFileName: string = FileLog.fileName!.concat(".bak")!;

    private: static const ORG_ALLBINARY: string = "org.allbinary: ";

    private: static firstTime: bool = true;

    private: static logFile: File = new File(FileLog.logPath, FileLog.fileName);

    private: static logFileBak: File;

    private: static fileOut: BufferedWriter;

    private: static backupIndex: int32_t= 0;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static bool createLogFile(){

        try {
            FileLog.logFile= new File(logPath, fileName);
    

                        if(!FileLog.firstTime)
                        
                                    {
                                    FileLog.fileOut= new BufferedWriter(new FileWriter(logFile));
    

                                    }
                                
                        else {
                            FileLog.firstTime= false;
    

    raFile: RandomAccessFile = new RandomAccessFile(logFile, "rw");;
    
raFile!.seek(raFile!.length());
    
FileLog.fileOut= new BufferedWriter(new FileWriter(raFile!.getFD()));
    

                        }
                            

    canWrite: bool = FileLog.logFile!.canWrite()!;;
    



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

    static bool createLogFileBackup(){

        try {
            
    stringMaker: StringMaker = new StringMaker();;
    
FileLog.logFileBak= new File(logPath, stringMaker!.append(backupFileName)!.append(CommonSeps.getInstance()!.PERIOD)!.appendint(backupIndex)!.toString());
    

        while(FileLog.logFileBak!.isFile())
        {
FileLog.backupIndex++;
    
stringMaker!.delete(0, stringMaker!.length());
    
FileLog.logFileBak= new File(logPath, stringMaker!.append(backupFileName)!.append(CommonSeps.getInstance()!.PERIOD)!.appendint(backupIndex)!.toString());
    
}


    line: string = .toCharArray();;
    

    tmpOut: BufferedWriter = new BufferedWriter(new FileWriter(logFileBak));;
    

    tmpIn: BufferedReader = new BufferedReader(new FileReader(logFile));;
    

        while((line= tmpIn!.readLine()) != 
                                    null
                                )
        {
tmpOut!.write(line, 0, line.length);
    
tmpOut!.newLine();
    
}

tmpOut!.flush();
    
tmpOut!.close();
    
tmpIn!.close();
    
FileLog.logFile!.delete();
    



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

    public static string put(string specialMessage, any = {} anyType, string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog.put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, any = {} anyType, string functionName, Throwable exception){

        try {
            
                        if(FileLog.firstTime == true)
                        
                                    {
                                    FileLog.createLogFileBackup();
    

                        if(createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                                    }
                                

                                    }
                                

    length: int64_t = FileLog.logFile!.length()!;;
    

                        if(length > FileLog.logLength)
                        
                                    {
                                    
                        if(!(createLogFileBackup()) || createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                                    }
                                

                                    }
                                

    className: string = NULL_STRING.toCharArray();;
    

                        if(functionName == 
                                    null
                                )
                        functionName= NULL_STRING.toCharArray()

                        if(specialMessage == 
                                    null
                                )
                        specialMessage= NULL_STRING.toCharArray()

                        if(anyType!.constructor.name.toString()! != 
                                    null
                                )
                        className= anyType!.constructor.name.toString()!

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
FileLog.fileOut!.write(message, 0, message.length);
    
FileLog.fileOut!.newLine();
    
FileLog.fileOut!.flush();
    



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

    public static string put(string specialMessage, string className, string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog.put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, string className, string functionName, Exception exception){

        try {
            
                        if(FileLog.firstTime == true)
                        
                                    {
                                    FileLog.createLogFileBackup();
    

                        if(createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                                    }
                                

                                    }
                                

    length: int64_t = FileLog.logFile!.length()!;;
    

                        if(length > FileLog.logLength)
                        
                                    {
                                    
                        if(!(createLogFileBackup()) || createLogFile() == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                                    }
                                

                                    }
                                

                        if(functionName == 
                                    null
                                )
                        functionName= NULL_STRING.toCharArray()

                        if(specialMessage == 
                                    null
                                )
                        specialMessage= NULL_STRING.toCharArray()

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
FileLog.fileOut!.write(message, 0, message.length);
    
FileLog.fileOut!.newLine();
    
FileLog.fileOut!.flush();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return .toCharArray();
    
}

}


    public static string getFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLog.logPath +FileLog.fileName;
    
}


private constructor (){

            super();
        }


};

            

