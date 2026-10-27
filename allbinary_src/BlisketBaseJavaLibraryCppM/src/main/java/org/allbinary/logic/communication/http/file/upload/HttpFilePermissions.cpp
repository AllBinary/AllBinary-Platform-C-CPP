
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/file/upload/FileUploadData.h"

class HttpFilePermissions
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: AbFile* file;

    private: BasicArrayList* userRoles = new BasicArrayListD();

public: HttpFilePermissions(AbPath* fullPath){
this->file= AbFile::createAbFileFromAbPath(new AbPath(fullPath->toFileSystemString(), FileUploadData::getInstance()->FILE));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF("Loading Privileges: " +fullPath->toFileSystemString(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                        if(this->isFile())
                        
                                    {
                                    this->userRoles->add(BasicUserRoleFactory::getInstance()->ADMINISTRATOR);
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF("User Roles: " +this->userRoles, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    public: bool isFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file->isFile();;
    
}


    public: BasicArrayList* getUserRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userRoles;
    
}


};

            

