
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    TransformInfoInterface get(std::string name, HashMap<any, any> propertiesHashMap, PageContext pageContext);

                //@Throws(Exception.constructor)
            
    Vector getObjectConfigs(std::string storeName);

                //@Throws(Exception.constructor)
            
    Vector getNames(std::string storeName);

    void delete_(std::string name);

    void insert(Vector values);

    void update(HashMap<any, any> updatedValues);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H
