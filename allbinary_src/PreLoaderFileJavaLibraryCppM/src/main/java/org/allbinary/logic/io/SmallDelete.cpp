
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
        
class SmallDelete
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: std::string fileName;

    private: std::string string;

public: SmallDelete(std::string fileName){
this->fileName= fileName;
    
this->string= AbFileSystem::getInstance()->readAsString(fileName);
    
}


    public: bool deleteAtStart(std::string start, std::string end){

        try {
            
    int32_t beginIndex= 0;int32_t endIndex= 0;;
    
beginIndex= this->string.indexOf(start);
    
endIndex= this->string.indexOf(end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 10 && endIndex < 525)
                        
                                    {
                                    
    std::string text = this->string.substring(endIndex, string.size());;
    

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteAtStart", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool deleteBetween(std::string start, std::string end, std::string newText){

        try {
            
    int32_t beginIndex= 0;int32_t endIndex= 0;;
    
beginIndex= this->string.indexOf(start);
    
endIndex= this->string.indexOf(end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 50 && endIndex < 425)
                        
                                    {
                                    
    std::string newStart = this->string.substring(0, beginIndex);;
    

    std::string text = this->string.substring(endIndex +end.size(), string.size());;
    

    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(newStart +newText +text);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->IDLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteAtStart", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

