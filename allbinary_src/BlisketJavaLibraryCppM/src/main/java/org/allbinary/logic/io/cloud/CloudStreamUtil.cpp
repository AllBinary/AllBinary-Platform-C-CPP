
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
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"

class CloudStreamUtil
            : public Object
         {

    private: static CloudStreamUtil* instance() { static std::unique_ptr<CloudStreamUtil> value(new CloudStreamUtil()); return value.get(); }

    public: static CloudStreamUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CloudStreamUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: InputStream* getFile(AbFile* file){

    InputStream* inputStream = new AbFileInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Cloud File Bytes: " +available, this, "processRequest()");
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* getFileAnyWhere(AbFile* file){

    InputStream* inputStream = new AbFileLocalInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Local File Bytes: " +available, this, "processRequest()");
    

                                    }
                                

                                    }
                                
                        else {
                            inputStream= new AbFileInputStream(file);
    
available= inputStream->available();
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF("Cloud File Bytes: " +available, this, "processRequest()");
    

                                    }
                                

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* getFileLocal(AbFile* file){

    InputStream* inputStream = new AbFileLocalInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Local File Bytes: " +available, this, "processRequest()");
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


};

            

