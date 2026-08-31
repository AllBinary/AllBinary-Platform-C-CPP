
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoInterface: public TableMappingInterface {
        

    string log();

                //@Throws(Exception.constructor)
            
    override(HashMap<any, any> hashMap);

    string getName();

    setStoreName(string value);

    string getStoreName();

    string getObjectFile();

    any getObject();

                //@Throws(Exception.constructor)
            
    AbPath getTemplateFilePath();

    string getTemplateFile();

    string getTemplate();

                //@Throws(Exception.constructor)
            
    AbPath getDataFilePath();

    string getDataFile();

                //@Throws(Exception.constructor)
            
    Document getDataDocument();

    setName(string value);

    setObjectFile(string value);

    setObject(Object anyType);

                //@Throws(Exception.constructor)
            
    setObjectConfigInterface(Object transformInfoObjectConfigInterface);

                //@Throws(Exception.constructor)
            
    TransformInfoObjectConfigInterface getObjectConfigInterface();

    setTemplateFile(string value);

    setTemplate(string value);

    setDataFile(string value);

    setData(string value);

    setChild();

    bool isChild();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H
