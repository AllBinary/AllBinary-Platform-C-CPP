
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
        



        #ifndef TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H
        #define TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H

            #include "../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/ModifyTable.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreNoManipulation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoRequestHelper: public ModifyTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: transformInfoInterface: TransformInfoHttpInterface;

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext);

    public string update();

    public string insert();

    public string delete();

};

            


        #endif //TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H
