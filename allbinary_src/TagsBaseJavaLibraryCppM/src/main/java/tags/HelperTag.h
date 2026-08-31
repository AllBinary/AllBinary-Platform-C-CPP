
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
        



        #ifndef TAGS_HELPERTAG_H
        #define TAGS_HELPERTAG_H

            #include "../java/lang/Exception.h"
        
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PropertiesTag.h"

class HelperTag: public PropertiesTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tagHelperFactoryInterface: TagHelperFactoryInterface;

    private: anyType: any;

public constructor (TagHelperFactoryInterface tagHelperFactoryInterface);

                //@Throws(Exception.constructor)
            
    setHelper();

    public any getHelper();

    public int32_t doEndTag();

};

            


        #endif //TAGS_HELPERTAG_H
