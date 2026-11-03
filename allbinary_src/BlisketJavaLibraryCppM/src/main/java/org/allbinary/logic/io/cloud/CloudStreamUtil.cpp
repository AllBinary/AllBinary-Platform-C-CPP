
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/CloudStreamUtil.h"
        

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


CloudStreamUtil::CloudStreamUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto CloudStreamUtil::instance_owner() -> CloudStreamUtil* { static std::unique_ptr<CloudStreamUtil> value(new CloudStreamUtil()); return value.get(); }
CloudStreamUtil* CloudStreamUtil::instance = CloudStreamUtil::instance_owner();

    auto CloudStreamUtil::getInstance() -> CloudStreamUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CloudStreamUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto CloudStreamUtil::getFile(AbFile* file) -> InputStream*{

    InputStream* inputStream = new AbFileInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Cloud File Bytes: ") +JavaString::valueOf(available), this, "processRequest()");
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    auto CloudStreamUtil::getFileAnyWhere(AbFile* file) -> InputStream*{

    InputStream* inputStream = new AbFileLocalInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Local File Bytes: ") +JavaString::valueOf(available), this, "processRequest()");
    

                                    }
                                

                                    }
                                
                        else {
                            inputStream= new AbFileInputStream(file);
    
available= inputStream->available();
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Cloud File Bytes: ") +JavaString::valueOf(available), this, "processRequest()");
    

                                    }
                                

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    auto CloudStreamUtil::getFileLocal(AbFile* file) -> InputStream*{

    InputStream* inputStream = new AbFileLocalInputStream(file);;
    

    int32_t available = inputStream->available();;
    

                        if(available > 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Local File Bytes: ") +JavaString::valueOf(available), this, "processRequest()");
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_CPP
