
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
        



        #ifndef TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H
        #define TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H

            #include "../../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <taghelpers/transform/info/TransformInfoRequestHelperFactory.h>

      
#include <tags/ModifyTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoTag: public ModifyTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: name: string;

    private: storeName: string;

    private: objectFile: string;

    private: anyType: string;

    private: objectConfigFile: string;

    private: objectConfig: string;

    private: templateFile: string;

    private: template: string;

    private: dataFile: string;

    private: data: string;

    private: type: string;

public constructor ();

public constructor (TagHelperFactoryInterface tagHelperFactoryInterface);

    public setName(string value);

    public setStoreName(string value);

    public setObjectFile(string value);

    public setObject(string value);

    public setTemplateFile(string value);

    public setTemplate(string value);

    public setDataFile(string value);

    public setData(string value);

    public setObjectConfigFile(string value);

    public setObjectConfig(string value);

    public setType(string value);

    public string getName();

    public string getObjectFile();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H
