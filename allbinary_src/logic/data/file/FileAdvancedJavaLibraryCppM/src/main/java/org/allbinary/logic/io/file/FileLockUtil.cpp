
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileLockUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/nio/channels/FileChannel.h>

      
#include <java/nio/channels/FileLock.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"

auto FileLockUtil::instance_owner() -> FileLockUtil* { static std::unique_ptr<FileLockUtil> value(new FileLockUtil()); return value.get(); }
FileLockUtil* FileLockUtil::instance = FileLockUtil::instance_owner();

    auto FileLockUtil::getInstance() -> FileLockUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLockUtil::instance;
    
}


FileLockUtil::FileLockUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getAll(BasicArrayList* vector, bool isReturnOnFailure) -> BasicArrayList*{

    BasicArrayList* fileLockVector = new BasicArrayListD();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    AbFile* file = dynamic_cast<AbFile*>(vector->get(index));;
    

    FileLock* fileLock = this->getLock(file);;
    

                        if(fileLock != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("File Lock Obtained: ") +JavaString::valueOf(file->getAbsolutePath()), this, "getAll");
    
fileLockVector->add(fileLock);
    

                                    }
                                
                             else 
                        if(isReturnOnFailure)
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Total Locks Obtained: ") +JavaString::valueOf(fileLockVector->size()), this, "getAll");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    

                                    }
                                
}

this->logUtil->putF(JavaString::valueOf("Total Locks Obtained: ") +JavaString::valueOf(fileLockVector->size()), this, "getAll");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    
}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getAllPossible(BasicArrayList* vector) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getAll(vector, false);;
    
}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getAllOrNone(BasicArrayList* vector) -> BasicArrayList*{

    BasicArrayList* fileLockVector = this->getAll(vector, true);;
    

                        if(vector->size() != fileLockVector->size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListD();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getLock(AbFile* file) -> FileLock*{

        {
        
        auto finallyFunction_N66899 = [&]() {
            
        };
        
        struct FinallyGuard_N66899 { decltype(finallyFunction_N66899)& function; ~FinallyGuard_N66899() { function(); } } finallyGuard_N66899{finallyFunction_N66899};
        
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getLock(AbFileOutputStream::createFromAbFileAppend(file, true));;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception returns null", this, "getLock", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getLock(AbFileOutputStream* fileOutputStream) -> FileLock*{

        {
        
        auto finallyFunction_N67106 = [&]() {
            this->logUtil->putF("Finally - Closing FileOutputStream", this, "getLock");
    
StreamUtil::getInstance()->close(fileOutputStream);
    

        };
        
        struct FinallyGuard_N67106 { decltype(finallyFunction_N67106)& function; ~FinallyGuard_N67106() { function(); } } finallyGuard_N67106{finallyFunction_N67106};
        
        try {
            
    FileLock* fileLock = this->getLock(fileOutputStream->getChannel());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLock;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception returns null", this, "getLock", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto FileLockUtil::getLock(FileChannel* fileChannel) -> FileLock*{

        {
        
        auto finallyFunction_N67413 = [&]() {
            this->logUtil->putF("Finally - Closing FileChannel", this, "getLock");
    
fileChannel->close();
    

        };
        
        struct FinallyGuard_N67413 { decltype(finallyFunction_N67413)& function; ~FinallyGuard_N67413() { function(); } } finallyGuard_N67413{finallyFunction_N67413};
        
        try {
            
    FileLock* fileLock = fileChannel->tryLock();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLock;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception returns null", this, "getLock", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

        }

}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_CPP
