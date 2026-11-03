
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_CPP
        #define ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/SmallDelete.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFileSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SmallDelete::SmallDelete(std::string fileName) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->fileName= fileName;
    
this->string= AbFileSystem::getInstance()->readAsString(fileName);
    
}


    auto SmallDelete::deleteAtStart(std::string start, std::string end) -> bool{

        try {
            
    int32_t beginIndex= 0;int32_t endIndex= 0;;
    
beginIndex= JavaString::indexOf(this->string, start);
    
endIndex= JavaString::indexOf(this->string, end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 10 && endIndex < 525)
                        
                                    {
                                    
    std::string text = JavaString::substring(this->string, endIndex, this->string.size());;
    

    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(text);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteAtStart", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto SmallDelete::deleteBetween(std::string start, std::string end, std::string newText) -> bool{

        try {
            
    int32_t beginIndex= 0;int32_t endIndex= 0;;
    
beginIndex= JavaString::indexOf(this->string, start);
    
endIndex= JavaString::indexOf(this->string, end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 50 && endIndex < 425)
                        
                                    {
                                    
    std::string newStart = JavaString::substring(this->string, 0, beginIndex);;
    

    std::string text = JavaString::substring(this->string, endIndex +end.size(), this->string.size());;
    

    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(JavaString::valueOf(JavaString::valueOf(newStart) +JavaString::valueOf(newText)) +JavaString::valueOf(text));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteAtStart", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_CPP
