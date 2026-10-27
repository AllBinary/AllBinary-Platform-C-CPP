
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"

class AbFilePath: public AbPath {

public: AbFilePath(std::string aPath) : AbPath(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    AbPathData* pathData = AbPathData::getInstance();;
    

    PathUtil* abPathUtil = PathUtil::getInstance();;
    
this->schema= this->getSchema(aPath);
    
this->setName(pathData->getNameFromPath(aPath));
    
this->setPath(abPathUtil->adjust(this->getPathFromPath(abPathUtil->removeNameFromPath(aPath)->toString())));
    
}


};

            

