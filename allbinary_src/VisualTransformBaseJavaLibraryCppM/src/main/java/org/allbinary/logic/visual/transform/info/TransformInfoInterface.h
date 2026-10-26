
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

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoInterface: public TableMappingInterface {

    std::string log();

                //@Throws(Exception.constructor)
            
    void override(HashMap<Object*, Object*> hashMap);

    std::string getName();

    void setStoreName(std::string value);

    std::string getStoreName();

    std::string getObjectFile();

    Object* getObject();

                //@Throws(Exception.constructor)
            
    AbPath getTemplateFilePath();

    std::string getTemplateFile();

    std::string getTemplate();

                //@Throws(Exception.constructor)
            
    AbPath getDataFilePath();

    std::string getDataFile();

                //@Throws(Exception.constructor)
            
    Document getDataDocument();

    void setName(std::string value);

    void setObjectFile(std::string value);

    void setObject(Object anyType);

                //@Throws(Exception.constructor)
            
    void setObjectConfigInterface(Object transformInfoObjectConfigInterface);

                //@Throws(Exception.constructor)
            
    TransformInfoObjectConfigInterface getObjectConfigInterface();

    void setTemplateFile(std::string value);

    void setTemplate(std::string value);

    void setDataFile(std::string value);

    void setData(std::string value);

    void setChild();

    bool isChild();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOINTERFACE_H
