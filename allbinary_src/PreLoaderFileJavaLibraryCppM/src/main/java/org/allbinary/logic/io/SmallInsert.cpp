
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_CPP
        #define ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/SmallInsert.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFileSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SmallInsert::SmallInsert(std::string fileName) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->fileName= fileName;
    
this->string= AbFileSystem::getInstance()->readAsString(fileName);
    
}


    auto SmallInsert::atBeginning(std::string text) -> bool{

        try {
            
    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(JavaString::valueOf(text) +JavaString::valueOf(this->string));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insertAtBeginning", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto SmallInsert::after(std::string text, std::string after) -> bool{

        try {
            
    int32_t index = this->string.indexOf(after);;
    

                        if(index < 0)
                        
                                    {
                                    System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("No such start: ") +JavaString::valueOf(after)) +JavaString::valueOf(" in: ")) +JavaString::valueOf(this->string));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
index= index +after.size();
    

    std::string start = this->string.substring(0, index);;
    

    std::string end = this->string.substring(index +1, string.size());;
    

    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(JavaString::valueOf(JavaString::valueOf(start) +JavaString::valueOf(text)) +JavaString::valueOf(end));
    
idOutData->close();
    
idFile->close();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "after", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto SmallInsert::atEnd(std::string text) -> bool{

        try {
            
    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(JavaString::valueOf(this->string) +JavaString::valueOf(text));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insertAtEnd", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_CPP
