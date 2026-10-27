
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoInterface: public TableMappingInterface {

    public: virtual std::string log() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void override(HashMap<Object*, Object*>* hashMap) = 0;

    public: virtual std::string getName() = 0;

    public: virtual void setStoreName(std::string value) = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getObjectFile() = 0;

    public: virtual Object* getObject() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getTemplateFilePath() = 0;

    public: virtual std::string getTemplateFile() = 0;

    public: virtual std::string getTemplate() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getDataFilePath() = 0;

    public: virtual std::string getDataFile() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual Document* getDataDocument() = 0;

    public: virtual void setName(std::string value) = 0;

    public: virtual void setObjectFile(std::string value) = 0;

    public: virtual void setObject(Object anyType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setObjectConfigInterface(Object* transformInfoObjectConfigInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoObjectConfigInterface* getObjectConfigInterface() = 0;

    public: virtual void setTemplateFile(std::string value) = 0;

    public: virtual void setTemplate(std::string value) = 0;

    public: virtual void setDataFile(std::string value) = 0;

    public: virtual void setData(std::string value) = 0;

    public: virtual void setChild() = 0;

    public: virtual bool isChild() = 0;

};

            

