
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOFACTORYINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOFACTORYINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"

class TransformInfoFactoryInterface {

                //@Throws(Exception.constructor)
            
    TransformInfoInterface getInstance(HashMap<Object*, Object*> databaseHashMap, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOFACTORYINTERFACE_H
