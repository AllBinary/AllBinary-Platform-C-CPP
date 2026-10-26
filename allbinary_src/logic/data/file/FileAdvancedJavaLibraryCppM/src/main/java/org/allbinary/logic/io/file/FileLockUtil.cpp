
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
        #include "AbFile.h"

class FileLockUtil
            : public Object
         {

    private: static FileLockUtil instance() { return FileLockUtil(); }

    public: static FileLockUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileLockUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: FileLockUtil(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getAll(BasicArrayList vector, bool isReturnOnFailure){

    BasicArrayList fileLockVector = BasicArrayListD();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    AbFile file = vector.get(index);;
    

    FileLock fileLock = this->getLock(file);;
    

                        if(fileLock != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("File Lock Obtained: " +file.getAbsolutePath(), this, "getAll");
    
fileLockVector.add(fileLock);
    

                                    }
                                
                             else 
                        if(isReturnOnFailure)
                        
                                    {
                                    this->logUtil.putF("Total Locks Obtained: " +fileLockVector.size(), this, "getAll");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    

                                    }
                                
}

this->logUtil.putF("Total Locks Obtained: " +fileLockVector.size(), this, "getAll");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getAllPossible(BasicArrayList vector){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getAll(vector, false);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getAllOrNone(BasicArrayList vector){

    BasicArrayList fileLockVector = this->getAll(vector, true);;
    

                        if(vector.size() != fileLockVector.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListD();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLockVector;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: FileLock getLock(AbFile file){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getLock(AbFileOutputStream::createFromAbFileAppend(file, true));;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Exception returns null", this, "getLock", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

         finally {
            
         }
        
}


                //@Throws(Exception.constructor)
            
    public: FileLock getLock(AbFileOutputStream fileOutputStream){

        try {
            
    FileLock fileLock = this->getLock(fileOutputStream.getChannel());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLock;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Exception returns null", this, "getLock", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

         finally {
            this->logUtil.putF("Finally - Closing FileOutputStream", this, "getLock");
    
StreamUtil::getInstance().close(fileOutputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public: FileLock getLock(FileChannel fileChannel){

        try {
            
    FileLock fileLock = fileChannel.tryLock();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileLock;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Exception returns null", this, "getLock", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

         finally {
            this->logUtil.putF("Finally - Closing FileChannel", this, "getLock");
    
fileChannel.close();
    

         }
        
}


};

            

